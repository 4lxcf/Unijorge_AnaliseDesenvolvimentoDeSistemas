create database if not exists eCommerce;
use eCommerce;

create table if not exists tbCliente(
	cpf varchar(14) primary key,
    nome varchar(30),
    email varchar(20),
    telefone varchar(12),
    dataNascimento date,
    dataCadastro date
);

create table if not exists tbEndereco(
	idEndereco int primary key auto_increment,
    cpfCliente varchar(14),
    rua varchar(30),
    numero int,
    complemento varchar(30),
    bairro varchar(15),
    cidade varchar(15),
    estado varchar(15),
    cep varchar(9),
    tipo enum("Entrega", "Cobrança"),
    
    constraint fk_end_cli foreign key (cpfCliente) references tbCliente (cpf)
);

create table if not exists tbProduto(
	idProduto int primary key auto_increment,
    tipo int,
    marca int,
    nome varchar(30),
    descricao varchar(50),
    preco int,
    codBarras varchar(20),
    ativo boolean,
    
    constraint fk_prod_tipo foreign key (tipo) references tbTipo (idTipo),
    constraint fk_prod_marc foreign key (marca) references tbMarca (idMarca)
);

create table if not exists tbTipo(
	idTipo int primary key auto_increment,
    nome varchar(30),
    descricao varchar(50)
);

create table if not exists tbMarca(
	idMarca int primary key auto_increment,
    nome varchar(30)
);

create table if not exists tbEstoque(
	idEstoque int primary key auto_increment,
    idProduto int,
    qtd int,
    qtd_min int,
    
    constraint fk_est_prod foreign key (idProduto) references tbProduto (idProduto)
);

create table if not exists tbPedido(
	idPedido int primary key auto_increment,
    idCliente varchar(14),
    idEndereco int,
    dataPedido date,
    etapa enum("Pendente", "Pago", "Separando Pedido", "Enviado", "Entregue", "Cancelado"),
    valorFrete int,
    valorDesconto int,
    valorTotal int,
    
    constraint fk_pedi_cli foreign key (idCliente) references tbCliente(cpf),
    constraint fk_pedi_end foreign key (idEndereco) references tbEndereco(idEndereco)
);

create table if not exists tbItensPedido(
	idItensPedido int primary key auto_increment,
    idPedido int,
    idProduto int,
    qtd int,
    precoUnitario int,
    
    constraint fk_iten_ped foreign key (idPedido) references tbPedido(idPedido),
    constraint fk_iten_prod foreign key (idProduto) references tbProduto(idProduto)
);

select * from tbCliente;
select * from tbEndereco;
select * from tbProduto;
select * from tbTipo;
select * from tbMarca;
select * from tbEstoque;
select * from tbPedido;
select * from tbItensPedido;