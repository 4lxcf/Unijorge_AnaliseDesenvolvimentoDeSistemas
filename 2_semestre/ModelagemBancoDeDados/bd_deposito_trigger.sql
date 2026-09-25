create database deposito_novo;

use deposito_novo;

create table Produtos(
    referencia varchar(3) primary key,
    descricao varchar(50) unique not null,
    estoque int not null default 0,
    qtdMinima int not null default 0
);

insert into Produtos (referencia, descricao, estoque, qtdMinima)
    values ('001', 'Feijão', 10, 100),
           ('002', 'Arroz', 5, 50),
           ('003', 'Farinha', 15, 150);

select * from Produtos;

create table ItensVenda(
    id int auto_increment primary key,
    venda int,
    produto varchar(3),
    qtdVendida int
);

insert into ItensVenda (venda, produto, qtdVendida)
    values (1, '001', 3),
           (2, '002', 1),
           (3, '003', 5);

delete from ItensVenda where produto = '003';

select * from ItensVenda;

DELIMITER $
create trigger tgr_itensvenda_after_insert after insert on ItensVenda
for each row
begin
    update Produtos set estoque = estoque - new.qtdVendida where referencia = new.produto;
end $
delimiter ;

DELIMITER $
create trigger tgr_itensvenda_delete after delete on ItensVenda
for each row
begin
    update Produtos set estoque = estoque + old.qtdVendida where referencia = old.produto;
end $
delimiter ;