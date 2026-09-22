create database if not exists deposito;

use deposito;

create table if not exists Produtos(
	Referencia varchar(3),
    Descricao varchar(50),
    Estoque int
);

insert into Produtos (Referencia, Descricao, Estoque)
	values ('001', 'Feijão', 10),
		   ('002', 'Arroz', 5),
           ('003', 'Farinha', 15);
       
insert into Produtos (Referencia, Descricao, Estoque)
	values ('004', 'Feijão Fradinho', 10);
           
-- selecionar uma quantidade especifica de produtos
delimiter $$
create procedure Selecionar_Produtos(in quantidade int)
begin
	select * from Produtos
    limit quantidade;
end $$
delimiter ;
call Selecionar_Produtos(2);

-- selecionar um produto especifico de acordo com a referencia
delimiter $$
create procedure Ver_Produto(in ref varchar(3))
begin
	select Descricao, Estoque from Produtos where referencia = ref;
end $$
delimiter ;
call Ver_Produto('001');

-- contar a quantidade de produtos registrados
delimiter $$
create procedure Verificar_Quantidade_Produtos(out quantidade int)
begin
	select count(*) into quantidade from Produtos;
end $$
delimiter ;
call Verificar_Quantidade_Produtos(@total);
select @total as Total_Registros;

-- contar a quantidade de produtos especificos registrados
delimiter $$
create procedure Verificar_Quantidade_Produtos_Especificos(out quantidade int)
begin
	select count(*) into quantidade from Produtos where Descricao like '%Feijão%';
end $$
delimiter ;
call Verificar_Quantidade_Produtos_Especificos(@total);
select @total as Total_Registros_Especificos;

-- exemplo de procedure com inout
delimiter $$
create procedure Elevar_Ao_Quadrado(inout numero int)
begin
	set numero = numero * numero;
end $$
delimiter ;
set @valor = 5;
call Elevar_Ao_Quadrado(@valor);
select @valor as Result;

-- exemplo de procedure com 2 parametros
delimiter $$
create procedure Busca_Com_Parametros(in descr varchar(50), out quantidade int)
begin
	select count(*) into quantidade from Produtos where Descricao like descr;
end $$
delimiter ;
call Busca_Com_Parametros('Feijão%', @total);
select @total as Total;

select * from Produtos;