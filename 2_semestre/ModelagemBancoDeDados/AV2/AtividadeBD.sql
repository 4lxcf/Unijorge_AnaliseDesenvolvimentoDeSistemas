-- Cria e seleciona o banco de dados da loja.
CREATE DATABASE IF NOT EXISTS ecommerce_loja;

USE ecommerce_loja;

-- Endereços e dados dos clientes.
CREATE TABLE IF NOT EXISTS tbEndereco (
    CEP varchar(12) primary key,
    rua varchar(100) not null,
    bairro varchar(100) not null,
    cidade varchar(100) not null,
    estado varchar(50) not null
);

CREATE TABLE IF NOT EXISTS tbCliente (
    CPF varchar(14) primary key,
    nome varchar(255) not null,
    dataNascimento date,
    numeroTelefone varchar(12),
    email varchar(200) not null unique
);

CREATE TABLE IF NOT EXISTS tbEnderecoCliente (
    id_enderecoCliente int auto_increment primary key,
    CPF varchar(14) not null,
    CEP varchar(12) not null,
    numeroEndereco varchar(10) not null,
    complemento varchar(150),

    constraint endCliente_cliente foreign key (CPF) references tbCliente(CPF)
    on update cascade
    on delete restrict,

    constraint end_endCliente foreign key (CEP) references tbEndereco(CEP)
    on update cascade
    on delete restrict
);

-- Categorias, subcategorias e produtos do catálogo.
CREATE TABLE IF NOT EXISTS tbCategoria (
    id_categoria int auto_increment primary key,
    nome varchar(150) not null unique
);

CREATE TABLE IF NOT EXISTS tbSubcategoria (
    id_subcategoria int auto_increment primary key,
    nome varchar(150) not null unique,
    id_categoria int not null,

    constraint cat_sub foreign key (id_categoria) references tbCategoria(id_categoria)
    on update cascade
    on delete restrict
);

CREATE TABLE IF NOT EXISTS tbProduto (
    id_produto int auto_increment primary key,
    codigoBarra varchar(44) unique,
    descricao varchar(150) not null unique,
    marca varchar(150),
    peso decimal(8,3),
    valorCusto decimal(10,2) not null,
    valorVenda decimal(10,2) not null,
    id_subcategoria int not null,

    constraint subcat_prod foreign key (id_subcategoria) references tbSubcategoria(id_subcategoria)
    on update cascade
    on delete restrict
);

CREATE TABLE IF NOT EXISTS tbEstoque (
    id_estoque int auto_increment primary key,
    id_produto int not null unique,
    quantidadeAtual int not null default 0,
    quantidadeMinima int not null default 0,

    constraint estoque_produto foreign key (id_produto) references tbProduto(id_produto)
    on update cascade
    on delete restrict
);

-- Carrinhos e produtos adicionados pelos clientes.
CREATE TABLE IF NOT EXISTS tbCarrinho (
    id_carrinho int auto_increment primary key,
    cpf varchar(14) not null,
    valorTotal decimal(10,2) not null default 0.00,

    constraint car_id_cliente unique (id_carrinho, cpf),
    constraint car_cliente foreign key (cpf) references tbCliente(CPF)
    on update cascade
    on delete restrict
);

CREATE TABLE IF NOT EXISTS tbItensCarrinho (
    id_itensCarrinho int auto_increment primary key,
    id_carrinho int not null,
    id_produto int not null,
    quantidade int not null,

    constraint itenscar_carr foreign key (id_carrinho) references tbCarrinho(id_carrinho)
    on update cascade
    on delete restrict,

    constraint car_produto foreign key (id_produto) references tbProduto(id_produto)
    on update cascade
    on delete restrict
);

-- Pedidos, itens, pagamentos e entregas.
CREATE TABLE IF NOT EXISTS tbPedido (
    id_pedido int auto_increment primary key,
    id_carrinho int not null unique,
    dataPedido date not null,
    valorTotVenda decimal(10,2) not null,
    cpf varchar(14) not null,
    desconto decimal(10,2) not null default 0.00,
    statusPedido enum(
        'Aguardando pagamento',
        'Pagamento aprovado',
        'Em preparação',
        'Enviado',
        'Entregue',
        'Cancelado'
    ) not null default 'Aguardando pagamento',

    constraint ped_carrinho_cliente foreign key (id_carrinho, cpf) references tbCarrinho(id_carrinho, cpf)
    on update cascade
    on delete restrict
);

CREATE TABLE IF NOT EXISTS tbItemPedido (
    id_produto int not null,
    id_pedido int not null,
    quantidade_vendida int not null,
    precoUnitario decimal(10,2) not null,

    primary key (id_pedido, id_produto),

    constraint item_prod foreign key (id_produto) references tbProduto(id_produto)
    on update cascade
    on delete restrict,

    constraint item_venda foreign key (id_pedido) references tbPedido(id_pedido)
    on update cascade
    on delete restrict
);

CREATE TABLE IF NOT EXISTS tbPagamento (
    id_pagamento int auto_increment primary key,
    id_pedido int not null unique,
    formaPg enum('Dinheiro', 'PIX', 'Cartão de Débito', 'Cartão de Crédito') not null,
    valor decimal(10,2) not null,
    parcelas int not null default 1,

    constraint pag_ped foreign key (id_pedido) references tbPedido(id_pedido)
    on update cascade
    on delete restrict
);

CREATE TABLE IF NOT EXISTS tbEntrega (
    id_entrega int auto_increment primary key,
    id_pedido int not null unique,
    id_enderecoCliente int not null,
    codigoRastreamento varchar(50),
    statusEntrega enum(
        'Aguardando envio',
        'Enviado',
        'Em trânsito',
        'Saiu para entrega',
        'Entregue',
        'Não entregue'
    ) not null default 'Aguardando envio',
    dataEnvio date,
    dataPrevista date,
    dataEntrega date,
    valorFrete decimal(10,2) not null default 0.00,

    constraint entrega_pedido foreign key (id_pedido) references tbPedido(id_pedido)
    on update cascade
    on delete restrict,

    constraint entrega_endCliente foreign key (id_enderecoCliente) references tbEnderecoCliente(id_enderecoCliente)
    on update cascade
    on delete restrict
);

DELIMITER $$
-- Impede vendas com quantidade inválida ou estoque insuficiente.
CREATE TRIGGER verificar_estoque_pedido
BEFORE INSERT ON tbItemPedido
FOR EACH ROW
BEGIN
    DECLARE estoque_atual int DEFAULT NULL;

    SELECT quantidadeAtual
    INTO estoque_atual
    FROM tbEstoque
    WHERE id_produto = NEW.id_produto;

    IF NEW.quantidade_vendida <= 0 OR estoque_atual IS NULL OR estoque_atual < NEW.quantidade_vendida THEN
        SIGNAL SQLSTATE '45000'
            SET MESSAGE_TEXT = 'Estoque insuficiente ou quantidade inválida para a venda';
    END IF;
END $$

-- Baixa do estoque após a inclusão de um item no pedido.
CREATE TRIGGER diminuir_estoque_venda
AFTER INSERT ON tbItemPedido
FOR EACH ROW
BEGIN
    UPDATE tbEstoque
    SET quantidadeAtual = quantidadeAtual - NEW.quantidade_vendida
    WHERE id_produto = NEW.id_produto;
END $$

-- Atualiza o total do carrinho quando um item é adicionado.
CREATE TRIGGER atualizar_total_carrinho
AFTER INSERT ON tbItensCarrinho
FOR EACH ROW
BEGIN
    UPDATE tbCarrinho
    SET valorTotal = valorTotal + (
        NEW.quantidade * (
            SELECT valorVenda
            FROM tbProduto
            WHERE id_produto = NEW.id_produto
        )
    )
    WHERE id_carrinho = NEW.id_carrinho;
END $$
DELIMITER ;

-- Dados de exemplo: endereços e clientes.
INSERT INTO tbEndereco (CEP, rua, bairro, cidade, estado)
VALUES
('40000001', 'Rua das Flores', 'Centro', 'Salvador', 'BA'),
('40000002', 'Avenida Brasil', 'Pituba', 'Salvador', 'BA'),
('40000003', 'Rua do Comércio', 'Barra', 'Salvador', 'BA'),
('40000004', 'Avenida Paralela', 'Imbuí', 'Salvador', 'BA'),
('40000005', 'Rua Bahia', 'Caminho das Árvores', 'Salvador', 'BA'),
('40000006', 'Rua São Paulo', 'Centro', 'Feira de Santana', 'BA'),
('40000007', 'Avenida Central', 'Centro', 'São Paulo', 'SP');

INSERT INTO tbCliente (CPF, nome, dataNascimento, numeroTelefone, email)
VALUES
('11111111111', 'João Silva', '1995-03-15', '71999990001', 'joao@email.com'),
('22222222222', 'Maria Santos', '1998-07-22', '71999990002', 'maria@email.com'),
('33333333333', 'Carlos Oliveira', '1990-11-10', '71999990003', 'carlos@email.com'),
('44444444444', 'Ana Souza', '2000-01-05', '71999990004', 'ana@email.com'),
('55555555555', 'Pedro Costa', '1993-09-18', '71999990005', 'pedro@email.com');

INSERT INTO tbEnderecoCliente (CPF, CEP, numeroEndereco, complemento)
VALUES
('11111111111', '40000001', '101', 'Apto 201'),
('22222222222', '40000002', '202', 'Casa'),
('33333333333', '40000003', '303', 'Apto 501'),
('44444444444', '40000006', '404', 'Apto 302'),
('55555555555', '40000007', '505', NULL);

-- Dados de exemplo: catálogo e estoque.
INSERT INTO tbCategoria (nome)
VALUES
('Informática'),
('Celulares'),
('Periféricos'),
('Eletrônicos');

INSERT INTO tbSubcategoria (nome, id_categoria)
VALUES
('Notebooks', 1),
('Computadores', 1),
('Smartphones', 2),
('Teclados', 3),
('Mouses', 3),
('Monitores', 1),
('Fones de ouvido', 4);

INSERT INTO tbProduto (codigoBarra, descricao, marca, peso, valorCusto, valorVenda, id_subcategoria)
VALUES
('7890000000011', 'Notebook Lenovo IdeaPad', 'Lenovo', 1.800, 2500.00, 3299.90, 1),
('7890000000028', 'Monitor Dell 24 Polegadas', 'Dell', 3.000, 600.00, 899.90, 6),
('7890000000035', 'Smartphone Samsung Galaxy', 'Samsung', 0.200, 1800.00, 2499.90, 3),
('7890000000042', 'Teclado Mecânico Redragon', 'Redragon', 0.900, 150.00, 249.90, 4),
('7890000000059', 'Fone Bluetooth JBL', 'JBL', 0.400, 200.00, 349.90, 7),
('7890000000066', 'Mouse Gamer Logitech', 'Logitech', 0.300, 100.00, 179.90, 5),
('7890000000073', 'Webcam Full HD', 'Logitech', 0.500, 250.00, 399.90, 5),
('7890000000080', 'Placa de Vídeo RTX', 'NVIDIA', 1.200, 2500.00, 3499.90, 2);

INSERT INTO tbEstoque (id_produto, quantidadeAtual, quantidadeMinima)
VALUES
(1, 20, 5),
(2, 15, 5),
(3, 8, 3),
(4, 30, 10),
(5, 50, 15),
(6, 40, 10),
(7, 12, 5),
(8, 25, 8);

-- Dados de exemplo: carrinhos e seus itens.
INSERT INTO tbCarrinho (cpf)
VALUES
('11111111111'),
('22222222222'),
('33333333333'),
('44444444444');

INSERT INTO tbItensCarrinho (id_carrinho, id_produto, quantidade)
VALUES
(1, 1, 1),
(1, 5, 1),
(2, 4, 1),
(3, 5, 2),
(3, 6, 1),
(4, 8, 1);

-- Dados de exemplo: pedidos, itens, pagamentos e entregas.
INSERT INTO tbPedido (id_carrinho, dataPedido, valorTotVenda, cpf, desconto, statusPedido)
VALUES
(1, '2026-09-25', 3649.80, '11111111111', 50.00, 'Entregue'),
(2, '2026-09-26', 249.90, '22222222222', 0.00, 'Enviado'),
(3, '2026-09-27', 879.70, '33333333333', 100.00, 'Enviado'),
(4, '2026-09-28', 3499.90, '44444444444', 0.00, 'Enviado');

INSERT INTO tbItemPedido (id_produto, id_pedido, quantidade_vendida, precoUnitario)
VALUES
(1, 1, 1, 3299.90),
(5, 1, 1, 349.90),
(4, 2, 1, 249.90),
(5, 3, 2, 349.90),
(6, 3, 1, 179.90),
(8, 4, 1, 3499.90);

INSERT INTO tbPagamento (id_pedido, formaPg, valor, parcelas)
VALUES
(1, 'Cartão de Crédito', 3599.80, 3),
(2, 'PIX', 249.90, 1),
(3, 'Cartão de Débito', 779.70, 1),
(4, 'PIX', 3499.90, 1);

INSERT INTO tbEntrega (
    id_pedido,
    id_enderecoCliente,
    codigoRastreamento,
    statusEntrega,
    dataEnvio,
    dataPrevista,
    dataEntrega,
    valorFrete
)
VALUES
(1, 1, 'BR123456789', 'Entregue', '2026-09-27', '2026-09-30', '2026-09-29', 25.00),
(2, 2, 'BR987654321', 'Em trânsito', '2026-09-28', '2026-10-02', NULL, 20.00),
(3, 3, 'BR555666777', 'Enviado', '2026-09-29', '2026-10-03', NULL, 30.00),
(4, 4, 'BR111222333', 'Saiu para entrega', '2026-09-30', '2026-10-02', NULL, 15.00);

-- View com o lucro bruto por produto.
CREATE OR REPLACE VIEW vwLucroProduto AS
SELECT
    descricao,
    valorCusto,
    valorVenda,
    valorVenda - valorCusto AS lucro
FROM tbProduto ORDER BY lucro DESC;

-- Consulta os registros das tabelas para conferência.
SELECT * FROM tbEndereco;
SELECT * FROM tbCliente ORDER BY nome;
SELECT * FROM tbEnderecoCliente;
SELECT * FROM tbCategoria;
SELECT * FROM tbSubcategoria;
SELECT * FROM tbProduto;
SELECT * FROM tbEstoque;
SELECT * FROM tbCarrinho;
SELECT * FROM tbItensCarrinho;
SELECT * FROM tbPedido;
SELECT * FROM tbItemPedido;
SELECT * FROM tbPagamento;
SELECT * FROM tbEntrega;

-- Filtra produtos de marcas selecionadas.
SELECT descricao, marca, valorVenda
FROM tbProduto
WHERE marca IN ('Logitech', 'Samsung')
ORDER BY marca;

-- Exibe cada produto com sua subcategoria e categoria.
SELECT
    p.descricao AS produto,
    s.nome AS subcategoria,
    c.nome AS categoria
FROM tbProduto AS p
INNER JOIN tbSubcategoria AS s ON p.id_subcategoria = s.id_subcategoria
INNER JOIN tbCategoria AS c ON s.id_categoria = c.id_categoria;

-- Lista os pedidos e seus totais após desconto.
SELECT
    c.nome,
    c.CPF,
    p.id_pedido,
    p.statusPedido,
    p.valorTotVenda - p.desconto AS totalComDesconto
FROM tbCliente AS c
INNER JOIN tbPedido AS p ON c.CPF = p.CPF
ORDER BY p.dataPedido;

-- Conta clientes por cidade e estado.
SELECT
    e.cidade,
    e.estado,
    COUNT(DISTINCT ec.CPF) AS clientesNaRegiao
FROM tbEnderecoCliente AS ec
INNER JOIN tbEndereco AS e ON ec.CEP = e.CEP
GROUP BY e.cidade, e.estado
ORDER BY e.estado, e.cidade;

-- Consulta os lucros calculados pela view.
SELECT * FROM vwLucroProduto ORDER BY descricao;