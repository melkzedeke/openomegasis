-- MySQL Administrator dump 1.4
--
-- ------------------------------------------------------
-- Server version	5.1.46


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;


--
-- Create schema Omega
--

CREATE DATABASE IF NOT EXISTS Omega;
USE Omega;

--
-- Definition of table `Cliente`
--

DROP TABLE IF EXISTS `Cliente`;
CREATE TABLE `Cliente` (
  `Cod` int(11) NOT NULL DEFAULT '0',
  `Nome` varchar(40) DEFAULT '',
  `Fone` varchar(10) DEFAULT '',
  `Endereco` varchar(40) DEFAULT '',
  `Bairro` varchar(30) DEFAULT '',
  `Cidade` varchar(30) DEFAULT '',
  `UF` varchar(4) DEFAULT '',
  `Cep` varchar(10) DEFAULT '',
  `Pessoa` varchar(9) DEFAULT '',
  `LimiteCredito` varchar(15) DEFAULT '',
  `Data` varchar(11) DEFAULT '',
  `Local1` varchar(40) DEFAULT '',
  `Fone1` varchar(7) DEFAULT '',
  `Local2` varchar(40) DEFAULT '',
  `Fone2` varchar(7) DEFAULT '',
  `Local3` varchar(40) DEFAULT '',
  `Fone3` varchar(7) DEFAULT '',
  `LocalTrabalho` varchar(40) DEFAULT '',
  `Fone4` varchar(7) DEFAULT '',
  `CPF` varchar(12) DEFAULT '',
  `RG` varchar(10) DEFAULT '',
  `TituloEleitor` varchar(15) DEFAULT '',
  `Renda` varchar(7) DEFAULT '',
  `Profissao` varchar(20) DEFAULT '',
  `DataNasc` varchar(10) DEFAULT '',
  `RazaoSocial` varchar(15) DEFAULT '',
  `NomeFantasia` varchar(30) DEFAULT '',
  `CNPJ` varchar(10) DEFAULT '',
  `InscriEst` varchar(10) DEFAULT '',
  `FoneFax` varchar(10) DEFAULT '',
  `Proprietario` varchar(30) DEFAULT '',
  `Email` varchar(30) DEFAULT '',
  `Observacao` varchar(20) DEFAULT '',
  PRIMARY KEY (`Cod`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `Cliente`
--

/*!40000 ALTER TABLE `Cliente` DISABLE KEYS */;
INSERT INTO `Cliente` (`Cod`,`Nome`,`Fone`,`Endereco`,`Bairro`,`Cidade`,`UF`,`Cep`,`Pessoa`,`LimiteCredito`,`Data`,`Local1`,`Fone1`,`Local2`,`Fone2`,`Local3`,`Fone3`,`LocalTrabalho`,`Fone4`,`CPF`,`RG`,`TituloEleitor`,`Renda`,`Profissao`,`DataNasc`,`RazaoSocial`,`NomeFantasia`,`CNPJ`,`InscriEst`,`FoneFax`,`Proprietario`,`Email`,`Observacao`) VALUES 
 (1,'Jose Silva Sarrau','6471-1212','R: Mato Grosso','Sao Jorge','Mundo Novo','MS','79980-00','Fisica','500,00','20/04/2007','','','','','','','','','','','','','','','','','','','','','',''),
 (3,'Tiburcio Agustinho','3474-2115','R: josé bonifácio  nº160','Itaipu','Mundo Novo','Ms','79980-000','','10,00','25/04/2007','','','','','','','','','','','','','','','','','','','','','',''),
 (4,'Silvina da Silva','3474-1000','Rua Mato Grosso N 1323','Centro','Mundo Novo','MS','79980','','1,000,00','25/04/2007','','','','','','','','','04133433912','001311328','02156896','350,00','Vendedora','08/12/07','','','','','','','','');
/*!40000 ALTER TABLE `Cliente` ENABLE KEYS */;


--
-- Definition of table `Produtos`
--

DROP TABLE IF EXISTS `Produtos`;
CREATE TABLE `Produtos` (
  `proId` int(11) NOT NULL AUTO_INCREMENT,
  `proNome` varchar(50) NOT NULL,
  `codBarras` varchar(30) NOT NULL,
  PRIMARY KEY (`proId`)
) ENGINE=MyISAM AUTO_INCREMENT=4 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `Produtos`
--

/*!40000 ALTER TABLE `Produtos` DISABLE KEYS */;
INSERT INTO `Produtos` (`proId`,`proNome`,`codBarras`) VALUES 
 (1,'FONTE ATX',''),
 (2,'MOUSE USB',''),
 (3,'TECLADO USB MTEK','');
/*!40000 ALTER TABLE `Produtos` ENABLE KEYS */;


--
-- Definition of table `controle`
--

DROP TABLE IF EXISTS `controle`;
CREATE TABLE `controle` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `controle`
--

/*!40000 ALTER TABLE `controle` DISABLE KEYS */;
/*!40000 ALTER TABLE `controle` ENABLE KEYS */;


--
-- Definition of table `datasistem`
--

DROP TABLE IF EXISTS `datasistem`;
CREATE TABLE `datasistem` (
  `Data` varchar(100) NOT NULL DEFAULT ''
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `datasistem`
--

/*!40000 ALTER TABLE `datasistem` DISABLE KEYS */;
INSERT INTO `datasistem` (`Data`) VALUES 
 ('30/03/2007'),
 ('31/05/2007');
/*!40000 ALTER TABLE `datasistem` ENABLE KEYS */;


--
-- Definition of table `dividaativa`
--

DROP TABLE IF EXISTS `dividaativa`;
CREATE TABLE `dividaativa` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Nome` varchar(40) DEFAULT '',
  `ND` varchar(10) DEFAULT '',
  `Parcela` varchar(10) DEFAULT '',
  `ValorParcela` varchar(10) DEFAULT '',
  `NumParcela` varchar(10) DEFAULT '',
  `Total` varchar(13) DEFAULT '',
  `DataCompra` varchar(12) DEFAULT '',
  `DataVencimento` varchar(12) DEFAULT '',
  `DataAtualJuros` varchar(12) DEFAULT '',
  `Cod` char(2) DEFAULT '',
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=42 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `dividaativa`
--

/*!40000 ALTER TABLE `dividaativa` DISABLE KEYS */;
INSERT INTO `dividaativa` (`id`,`Nome`,`ND`,`Parcela`,`ValorParcela`,`NumParcela`,`Total`,`DataCompra`,`DataVencimento`,`DataAtualJuros`,`Cod`) VALUES 
 (30,'Willian Angelo Alves de Oliveira','45','5x','126,45','3','632,25','2007-04-25','2007-07-25','2007-07-25','AT'),
 (29,'Willian Angelo Alves de Oliveira','45','5x','126,45','2','632,25','2007-04-25','2007-06-25','2007-06-25','AT'),
 (28,'Willian Angelo Alves de Oliveira','45','5x','126,45','1','632,25','2007-04-25','2007-05-25','2007-05-25','AT'),
 (27,'Melquizedeque Ramos Feitoza','44','3x','51,30','3','153,90','2007-04-24','2007-07-24','2007-07-24','AT'),
 (26,'Melquizedeque Ramos Feitoza','44','3x','51,30','2','153,90','2007-04-24','2007-06-24','2007-06-24','AT'),
 (25,'Melquizedeque Ramos Feitoza','44','3x','51,30','1','153,90','2007-04-24','2007-05-24','2007-05-24','AT'),
 (31,'Willian Angelo Alves de Oliveira','45','5x','126,45','4','632,25','2007-04-25','2007-08-25','2007-08-25','AT'),
 (32,'Willian Angelo Alves de Oliveira','45','5x','126,45','5','632,25','2007-04-25','2007-09-25','2007-09-25','AT'),
 (33,'Edilaine Amélia Feitoza','48','4x','25,92','1','103,68','2007-04-25','2007-05-25','2007-05-25','AT'),
 (34,'Edilaine Amélia Feitoza','48','4x','25,92','2','103,68','2007-04-25','2007-06-25','2007-06-25','AT'),
 (35,'Edilaine Amélia Feitoza','48','4x','25,92','3','103,68','2007-04-25','2007-07-25','2007-07-25','AT'),
 (36,'Edilaine Amélia Feitoza','48','4x','25,92','4','103,68','2007-04-25','2007-08-25','2007-08-25','AT'),
 (37,'Edilaine Amélia Feitoza','53','5x','970,47','1','4.852,35','2007-04-27','2007-05-27','2007-05-27','AT'),
 (38,'Edilaine Amélia Feitoza','53','5x','970,47','2','4.852,35','2007-04-27','2007-06-27','2007-06-27','AT'),
 (39,'Edilaine Amélia Feitoza','53','5x','970,47','3','4.852,35','2007-04-27','2007-07-27','2007-07-27','AT'),
 (40,'Edilaine Amélia Feitoza','53','5x','970,47','4','4.852,35','2007-04-27','2007-08-27','2007-08-27','AT'),
 (41,'Edilaine Amélia Feitoza','53','5x','970,47','5','4.852,35','2007-04-27','2007-09-27','2007-09-27','AT');
/*!40000 ALTER TABLE `dividaativa` ENABLE KEYS */;


--
-- Definition of table `fabricante`
--

DROP TABLE IF EXISTS `fabricante`;
CREATE TABLE `fabricante` (
  `Cod` int(11) NOT NULL AUTO_INCREMENT,
  `Nome` varchar(30) DEFAULT '',
  `Endereco` varchar(100) NOT NULL DEFAULT '',
  `Bairro` varchar(100) NOT NULL DEFAULT '',
  `Fone` varchar(100) NOT NULL DEFAULT '',
  `Cidade` varchar(100) NOT NULL DEFAULT '',
  `Estado` varchar(100) NOT NULL DEFAULT '',
  `CNPJ` varchar(100) NOT NULL DEFAULT '',
  `InscriEst` varchar(100) NOT NULL DEFAULT '',
  `CEP` varchar(30) DEFAULT '',
  PRIMARY KEY (`Cod`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `fabricante`
--

/*!40000 ALTER TABLE `fabricante` DISABLE KEYS */;
/*!40000 ALTER TABLE `fabricante` ENABLE KEYS */;


--
-- Definition of table `fornecedor`
--

DROP TABLE IF EXISTS `fornecedor`;
CREATE TABLE `fornecedor` (
  `Cod` varchar(7) DEFAULT '',
  `Nome` varchar(100) DEFAULT '',
  `Endereco` varchar(100) DEFAULT '',
  `Bairro` varchar(100) DEFAULT '',
  `Fone` varchar(100) DEFAULT '',
  `Cidade` varchar(100) DEFAULT '',
  `Estado` varchar(100) DEFAULT '',
  `CNPJ` varchar(100) DEFAULT '',
  `InscricaoEstadual` varchar(100) DEFAULT '',
  `CEP` varchar(100) DEFAULT ''
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `fornecedor`
--

/*!40000 ALTER TABLE `fornecedor` DISABLE KEYS */;
/*!40000 ALTER TABLE `fornecedor` ENABLE KEYS */;


--
-- Definition of table `funcionario`
--

DROP TABLE IF EXISTS `funcionario`;
CREATE TABLE `funcionario` (
  `Cod` varchar(7) DEFAULT '',
  `Nome` varchar(100) DEFAULT '',
  `Endereco` varchar(100) DEFAULT '',
  `Bairro` varchar(100) DEFAULT '',
  `Fone` varchar(100) DEFAULT '',
  `Cidade` varchar(100) DEFAULT '',
  `Estado` varchar(100) DEFAULT '',
  `CEP` varchar(100) DEFAULT '',
  `Data` varchar(100) DEFAULT '',
  `Funcao` varchar(100) DEFAULT '',
  `Salario` varchar(100) DEFAULT '',
  `CPF` varchar(100) DEFAULT '',
  `RG` varchar(100) DEFAULT '',
  `CRT` varchar(100) DEFAULT '',
  `DataAdmissao` varchar(100) DEFAULT '',
  `DataDemissao` varchar(100) DEFAULT '',
  `DataNascimento` varchar(100) DEFAULT '',
  `EstadoCivil` varchar(100) DEFAULT '',
  `Escolaridade` varchar(100) DEFAULT '',
  `Naturalidade` varchar(100) DEFAULT '',
  `Pai` varchar(100) DEFAULT '',
  `Mae` varchar(100) DEFAULT ''
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `funcionario`
--

/*!40000 ALTER TABLE `funcionario` DISABLE KEYS */;
/*!40000 ALTER TABLE `funcionario` ENABLE KEYS */;


--
-- Definition of table `juros`
--

DROP TABLE IF EXISTS `juros`;
CREATE TABLE `juros` (
  `JurosMes` varchar(10) DEFAULT '',
  `JurosDias` varchar(100) DEFAULT ''
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `juros`
--

/*!40000 ALTER TABLE `juros` DISABLE KEYS */;
INSERT INTO `juros` (`JurosMes`,`JurosDias`) VALUES 
 ('0,1','0,5');
/*!40000 ALTER TABLE `juros` ENABLE KEYS */;


--
-- Definition of table `movimento`
--

DROP TABLE IF EXISTS `movimento`;
CREATE TABLE `movimento` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `AbreCaixa` varchar(100) NOT NULL DEFAULT '',
  `MovDia` varchar(100) NOT NULL DEFAULT '',
  `TotalCaixa` varchar(100) NOT NULL DEFAULT '',
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `movimento`
--

/*!40000 ALTER TABLE `movimento` DISABLE KEYS */;
/*!40000 ALTER TABLE `movimento` ENABLE KEYS */;


--
-- Definition of table `movimentodia`
--

DROP TABLE IF EXISTS `movimentodia`;
CREATE TABLE `movimentodia` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `valor` varchar(15) NOT NULL DEFAULT '',
  `datamov` varchar(15) NOT NULL DEFAULT '',
  `caixaaberto` varchar(15) NOT NULL DEFAULT '',
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=11 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `movimentodia`
--

/*!40000 ALTER TABLE `movimentodia` DISABLE KEYS */;
INSERT INTO `movimentodia` (`id`,`valor`,`datamov`,`caixaaberto`) VALUES 
 (6,'3.051,90','24/04/2007','2.290,50'),
 (5,'76,95','21/04/2007','76,95'),
 (7,'456,00','25/04/2007','266,40'),
 (8,'1.407,97','27/04/2007','1.169,77'),
 (9,'2.756,95','28/04/2007','76,95'),
 (10,'216,75','29/04/2007','216,75');
/*!40000 ALTER TABLE `movimentodia` ENABLE KEYS */;


--
-- Definition of table `ndoc`
--

DROP TABLE IF EXISTS `ndoc`;
CREATE TABLE `ndoc` (
  `id` int(11) NOT NULL DEFAULT '0'
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `ndoc`
--

/*!40000 ALTER TABLE `ndoc` DISABLE KEYS */;
INSERT INTO `ndoc` (`id`) VALUES 
 (1),
 (2),
 (3),
 (4),
 (5),
 (6),
 (7),
 (8),
 (9),
 (10),
 (11),
 (12),
 (13),
 (14),
 (15),
 (16),
 (17),
 (18),
 (19),
 (20),
 (21),
 (22),
 (23),
 (24),
 (25),
 (26),
 (27),
 (28),
 (29),
 (30),
 (31),
 (32),
 (33),
 (34),
 (35),
 (36),
 (37),
 (38),
 (39),
 (40),
 (41),
 (42),
 (43),
 (44),
 (45),
 (46),
 (47),
 (48),
 (49),
 (50),
 (51),
 (52),
 (53),
 (54),
 (55),
 (56),
 (57),
 (58),
 (59),
 (60);
/*!40000 ALTER TABLE `ndoc` ENABLE KEYS */;


--
-- Definition of table `produtos_antigo`
--

DROP TABLE IF EXISTS `produtos_antigo`;
CREATE TABLE `produtos_antigo` (
  `CodProduto` int(11) NOT NULL DEFAULT '0',
  `DescricaoProduto` varchar(40) DEFAULT '',
  `CodFornecedor` varchar(7) DEFAULT '',
  `Fornecedor` varchar(100) DEFAULT '',
  `CodFabricante` varchar(100) DEFAULT '',
  `Fabricante` varchar(100) DEFAULT '',
  `Referencia` varchar(100) DEFAULT '',
  `ValorCusto` varchar(11) DEFAULT '',
  `Quantidade` varchar(100) DEFAULT '',
  `Porcentagem` varchar(100) DEFAULT '',
  `ValorVenda` varchar(100) DEFAULT '',
  `Unidade` varchar(100) DEFAULT '',
  `Grupo` varchar(100) DEFAULT '',
  `Tipo` varchar(100) DEFAULT '',
  `Cor` varchar(100) DEFAULT '',
  `Tamanho` varchar(100) DEFAULT '',
  PRIMARY KEY (`CodProduto`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `produtos_antigo`
--

/*!40000 ALTER TABLE `produtos_antigo` DISABLE KEYS */;
INSERT INTO `produtos_antigo` (`CodProduto`,`DescricaoProduto`,`CodFornecedor`,`Fornecedor`,`CodFabricante`,`Fabricante`,`Referencia`,`ValorCusto`,`Quantidade`,`Porcentagem`,`ValorVenda`,`Unidade`,`Grupo`,`Tipo`,`Cor`,`Tamanho`) VALUES 
 (1,'Cadeira em ferro','','ssssmmmjjj','','s','','57,00','112','35','76,95','U','1','1','0','0'),
 (2,'produto de teste','','','','','','57,00','79,95','35','76,95','kg','1','1','1','10'),
 (5,'camiseta gola polo','1','','1','','2001','12,35','281','30','16,05','U','1','1','1','P'),
 (6,'Malha branca','1','','1','','101','30,00','33,5','50','45,00','KG','1','1','Branca',''),
 (7,'Cotton Escuro','1','','1','','002','25,00','1484,5','50','37,50','KG','','','Marrom',''),
 (8,'asdfa','sda','','sdfa','','f','100,00','54','30','130,00','U','1','1','1','1'),
 (9,'asfsdf','','','','','1','158,00','55','35','213,30','U','1','1','1','1'),
 (10,'11231','','','','','1','335,00','24','5','351,75','U','','','','');
/*!40000 ALTER TABLE `produtos_antigo` ENABLE KEYS */;


--
-- Definition of table `produtosaida`
--

DROP TABLE IF EXISTS `produtosaida`;
CREATE TABLE `produtosaida` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `CodCli` varchar(11) DEFAULT '',
  `NomeCli` varchar(40) NOT NULL DEFAULT '',
  `TipoVenda` varchar(11) DEFAULT '',
  `ND` varchar(11) DEFAULT '',
  `Data` varchar(11) DEFAULT '',
  `CodPro` varchar(11) DEFAULT '',
  `DescricaoProduto` varchar(40) DEFAULT '',
  `Fabricante` varchar(20) DEFAULT '',
  `Quantidade` varchar(11) DEFAULT '',
  `Unidade` varchar(11) DEFAULT '',
  `ValorUnitario` varchar(14) DEFAULT '',
  `ValorTotal` varchar(11) DEFAULT '',
  `TotalGeral` varchar(11) DEFAULT '',
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=84 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `produtosaida`
--

/*!40000 ALTER TABLE `produtosaida` DISABLE KEYS */;
INSERT INTO `produtosaida` (`id`,`CodCli`,`NomeCli`,`TipoVenda`,`ND`,`Data`,`CodPro`,`DescricaoProduto`,`Fabricante`,`Quantidade`,`Unidade`,`ValorUnitario`,`ValorTotal`,`TotalGeral`) VALUES 
 (46,'1','Melquizedeque Ramos Feitoza','A Vista','47','2007-04-25','2','produto de teste','','0,250','kg','76,95','19,23','163,68'),
 (45,'1','Melquizedeque Ramos Feitoza','A Vista','47','2007-04-25','1','Cadeira em ferro','s','1','U','76,95','76,95','163,68'),
 (44,'1','Melquizedeque Ramos Feitoza','A Vista','47','2007-04-25','6','Malha branca','','1,500','kg','45,00','67,50','163,68'),
 (43,'1','Melquizedeque Ramos Feitoza','A Vista','46','2007-04-25','6','Malha branca','','2,5','kg','45,00','112,50','266,40'),
 (42,'1','Melquizedeque Ramos Feitoza','A Vista','46','2007-04-25','1','Cadeira em ferro','s','2','U','76,95','153,90','266,40'),
 (41,'3','Willian Angelo Alves de Oliveira','A Prazo','45','2007-04-25','6','Malha branca','','5,5','kg','45,00','247,50','632,25'),
 (40,'3','Willian Angelo Alves de Oliveira','A Prazo','45','2007-04-25','1','Cadeira em ferro','','5','U','76,95','384,75','632,25'),
 (39,'1','Melquizedeque Ramos Feitoza','A Prazo','44','2007-04-24','1','Cadeira em ferro','s','2','U','76,95','153,90','153,90'),
 (38,'1','Melquizedeque Ramos Feitoza','A Vista','43','2007-04-24','6','Malha branca','','1,5','kg','45,00','67,50','67,50'),
 (37,'1','Melquizedeque Ramos Feitoza','A Vista','42','2007-04-24','6','Malha branca','','1,5','kg','45,00','67,50','67,50'),
 (36,'1','Melquizedeque Ramos Feitoza','A Vista','41','2007-04-24','6','Malha branca','s','10,5','kg','45,00','472,50','626,40'),
 (35,'1','Melquizedeque Ramos Feitoza','A Vista','41','2007-04-24','1','Cadeira em ferro','s','2','U','76,95','153,90','626,40'),
 (33,'1','Melquizedeque Ramos Feitoza','A Vista','40','2007-04-24','1','Cadeira em ferro','s','15','U','76,95','1.154,25','2.290,50'),
 (34,'1','Melquizedeque Ramos Feitoza','A Vista','40','2007-04-24','6','Malha branca','','25,25','kg','45,00','1.136,25','2.290,50'),
 (47,'4','Edilaine Amélia Feitoza','A Prazo','48','2007-04-25','6','Malha branca','','0,125','kg','45,00','5,62','103,68'),
 (48,'4','Edilaine Amélia Feitoza','A Prazo','48','2007-04-25','7','Cotton Escuro','','0,475','kg','37,50','17,81','103,68'),
 (49,'4','Edilaine Amélia Feitoza','A Prazo','48','2007-04-25','5','camiseta gola polo','','5','U','16,05','80,25','103,68'),
 (50,'4','Edilaine Amélia Feitoza','A Vista','49','2007-04-27','1','Cadeira em ferro','s','2','U','76,95','153,90','1.169,77'),
 (51,'4','Edilaine Amélia Feitoza','A Vista','49','2007-04-27','6','Malha branca','','2','kg','45,00','9,00','1.169,77'),
 (52,'4','Edilaine Amélia Feitoza','A Vista','49','2007-04-27','7','Cotton Escuro','','26,85','kg','37,50','1.006,87','1.169,77'),
 (53,'1','Melquizedeque Ramos Feitoza','A Vista','50','2007-04-27','7','Cotton Escuro','','1,5','KG','37,50','56,25','56,25'),
 (54,'4','Edilaine Amélia Feitoza','A Vista','51','2007-04-27','1','Cadeira em ferro','s','1','U','76,95','76,95','76,95'),
 (55,'3','Willian Angelo Alves de Oliveira','A Vista','52','2007-04-27','7','Cotton Escuro','','2,8','KG','37,50','105,00','105,00'),
 (56,'4','Edilaine Amélia Feitoza','A Prazo','53','2007-04-27','1','Cadeira em ferro','','50','U','76,95','3.847,50','4.852,35'),
 (57,'4','Edilaine Amélia Feitoza','A Prazo','53','2007-04-27','5','camiseta gola polo','','12','U','16,05','192,60','4.852,35'),
 (58,'4','Edilaine Amélia Feitoza','A Prazo','53','2007-04-27','6','Malha branca','','18,05','kg','45,00','812,25','4.852,35'),
 (59,'1','Melquizedeque Ramos Feitoza','A Vista','54','2007-04-28','1','Cadeira em ferro','','1','U','76,95','76,95','76,95'),
 (60,'1','Melquizedeque Ramos Feitoza','A Vista','55','2007-04-28','1','Cadeira em ferro','s','1','U','76,95','76,95','240,26'),
 (61,'1','Melquizedeque Ramos Feitoza','A Vista','55','2007-04-28','6','Malha branca','','1,5','kg','45,00','67,50','240,26'),
 (62,'1','Melquizedeque Ramos Feitoza','A Vista','55','2007-04-28','7','Cotton Escuro','','2,555','KG','37,50','95,81','240,26'),
 (63,'1','Melquizedeque Ramos Feitoza','A Vista','56','2007-04-28','1','Cadeira em ferro','s','2','U','76,95','153,90','405,15'),
 (64,'1','Melquizedeque Ramos Feitoza','A Vista','56','2007-04-28','6','Malha branca','','3,5','KG','45,00','157,50','405,15'),
 (65,'1','Melquizedeque Ramos Feitoza','A Vista','56','2007-04-28','7','Cotton Escuro','','2,5','KG','37,50','93,75','405,15'),
 (66,'3','Willian Angelo Alves de Oliveira','A Vista','57','2007-04-28','1','Cadeira em ferro','s','5','U','76,95','384,75','838,50'),
 (67,'3','Willian Angelo Alves de Oliveira','A Vista','57','2007-04-28','6','Malha branca','','5,5','KG','45,00','247,50','838,50'),
 (68,'3','Willian Angelo Alves de Oliveira','A Vista','57','2007-04-28','7','Cotton Escuro','','5,5','KG','37,50','206,25','838,50'),
 (69,'4','Edilaine Amélia Feitoza','A Vista','58','2007-04-28','1','Cadeira em ferro','s','3','U','76,95','230,85','392,10'),
 (70,'4','Edilaine Amélia Feitoza','A Vista','58','2007-04-28','6','Malha branca','','1,5','KG','45,00','67,50','392,10'),
 (71,'4','Edilaine Amélia Feitoza','A Vista','58','2007-04-28','7','Cotton Escuro','','2,5','KG','37,50','93,75','392,10'),
 (72,'3','Willian Angelo Alves de Oliveira','A Vista','59','2007-04-28','1','Cadeira em ferro','s','1','U','76,95','76,95','803,99'),
 (73,'3','Willian Angelo Alves de Oliveira','A Vista','59','2007-04-28','2','produto de teste','','1','kg','76,95','7,69','803,99'),
 (74,'3','Willian Angelo Alves de Oliveira','A Vista','59','2007-04-28','5','camiseta gola polo','','1','U','16,05','16,05','803,99'),
 (75,'3','Willian Angelo Alves de Oliveira','A Vista','59','2007-04-28','6','Malha branca','','1','KG','45,00','4,50','803,99'),
 (76,'3','Willian Angelo Alves de Oliveira','A Vista','59','2007-04-28','7','Cotton Escuro','','1','KG','37,50','3,75','803,99'),
 (77,'3','Willian Angelo Alves de Oliveira','A Vista','59','2007-04-28','8','asdfa','','1','U','130,00','130,00','803,99'),
 (78,'3','Willian Angelo Alves de Oliveira','A Vista','59','2007-04-28','9','asfsdf','','1','U','213,30','213,30','803,99'),
 (79,'3','Willian Angelo Alves de Oliveira','A Vista','59','2007-04-28','10','11231','','1','U','351,75','351,75','803,99'),
 (80,'4','Edilaine Amélia Feitoza','A Vista','60','2007-04-29','1','Cadeira em ferro','s','1','U','76,95','76,95','216,75'),
 (81,'4','Edilaine Amélia Feitoza','A Vista','60','2007-04-29','5','camiseta gola polo','','1','U','16,05','16,05','216,75'),
 (82,'4','Edilaine Amélia Feitoza','A Vista','60','2007-04-29','6','Malha branca','','1,5','KG','45,00','67,50','216,75'),
 (83,'4','Edilaine Amélia Feitoza','A Vista','60','2007-04-29','7','Cotton Escuro','','1,5','KG','37,50','56,25','216,75');
/*!40000 ALTER TABLE `produtosaida` ENABLE KEYS */;


--
-- Definition of table `receitas`
--

DROP TABLE IF EXISTS `receitas`;
CREATE TABLE `receitas` (
  `cod` varchar(7) NOT NULL DEFAULT '',
  `Nome` varchar(100) NOT NULL DEFAULT '',
  `Data` varchar(100) NOT NULL DEFAULT '',
  `Receita` varchar(100) NOT NULL DEFAULT ''
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `receitas`
--

/*!40000 ALTER TABLE `receitas` DISABLE KEYS */;
/*!40000 ALTER TABLE `receitas` ENABLE KEYS */;


--
-- Definition of table `tipovenda`
--

DROP TABLE IF EXISTS `tipovenda`;
CREATE TABLE `tipovenda` (
  `Cod` int(11) NOT NULL AUTO_INCREMENT,
  `TipoVenda` varchar(100) NOT NULL DEFAULT '',
  PRIMARY KEY (`Cod`)
) ENGINE=MyISAM AUTO_INCREMENT=3 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `tipovenda`
--

/*!40000 ALTER TABLE `tipovenda` DISABLE KEYS */;
INSERT INTO `tipovenda` (`Cod`,`TipoVenda`) VALUES 
 (1,'A Vista'),
 (2,'A Prazo');
/*!40000 ALTER TABLE `tipovenda` ENABLE KEYS */;


--
-- Definition of table `usuario`
--

DROP TABLE IF EXISTS `usuario`;
CREATE TABLE `usuario` (
  `Cod` int(11) NOT NULL AUTO_INCREMENT,
  `Usuario` varchar(30) DEFAULT '',
  `Senha` varchar(50) DEFAULT '',
  `Funcao` varchar(40) DEFAULT '',
  PRIMARY KEY (`Cod`)
) ENGINE=MyISAM AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `usuario`
--

/*!40000 ALTER TABLE `usuario` DISABLE KEYS */;
INSERT INTO `usuario` (`Cod`,`Usuario`,`Senha`,`Funcao`) VALUES 
 (1,'admin','admin','admin');
/*!40000 ALTER TABLE `usuario` ENABLE KEYS */;




/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
