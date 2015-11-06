 #include "subforms.h"
 #include "funcoes.h"
 #include <QtGui>
 #include <QtUiTools> 
 #include <QSqlDatabase>
 #include <QSqlError>
 #include <QSqlQuery>
 #include <QtSql>
 #include <QSqlResult>
 #include <QString>
 #include <QSqlQueryModel>
 #include <QDialog>
 #include <Qt>

  FrmClientes_cls::FrmClientes_cls( const QString &title,QWidget *parent)
     : QDialog(parent)
     
 {
     QWidget *formWidget = loadUiFile();
     ui_edt_id = qFindChild<QLineEdit*>(this, "edt_id");     
     ui_edt_nome = qFindChild<QLineEdit*>(this, "edt_nome");
     ui_edt_endereco = qFindChild<QLineEdit*>(this, "edt_endereco");
     ui_btn_novo = qFindChild<QPushButton*>(this, "btn_novo");
     ui_btn_salvar = qFindChild<QPushButton*>(this, "btn_salvar");
     ui_btn_atualizar = qFindChild<QPushButton*>(this, "btn_atualizar");
     ui_btn_excluir = qFindChild<QPushButton*>(this, "btn_excluir");     
     ui_btn_sair = qFindChild<QPushButton*>(this, "btn_sair");
     QMetaObject::connectSlotsByName(this);

//   QVBoxLayout *layout = new QVBoxLayout;
     QGridLayout *layout = new QGridLayout;

     setConfigDB();
     layout->setHorizontalSpacing (0);
     layout-> setOriginCorner(Qt::TopLeftCorner);
     layout->setSizeConstraint(QLayout::SetMinAndMaxSize);
     
     layout->addWidget(formWidget);
     setLayout(layout);
     setWindowTitle(title);
          setWindowIcon(QIcon("/home/Melk/Omega/icons/clientes.png"));
//w->setWindowState(w->windowState() & ~Qt::WindowMinimized | Qt::WindowActive);
     //setWindowTitle(title);

     
     
     
     
 }
	
 QWidget* FrmClientes_cls::loadUiFile()
 {
     QUiLoader loader;

     QFile file(":/forms/frmclientes.ui");
     file.open(QFile::ReadOnly);

     QWidget *formWidget = loader.load(&file, this);
     file.close();

     return formWidget;
 }
void FrmClientes_cls::setConfigDB()
 {
		QSettings settings("/etc/omegasis/config/database.ini",
		QSettings::IniFormat);
		my_hostname =settings.value("omegasis/hostname").toString ();
		my_database =settings.value("omegasis/database").toString ();
		my_username =settings.value("omegasis/username").toString ();
		my_password =settings.value("omegasis/password").toString ();

 }
void FrmClientes_cls::pegadados(QString x)
{
   {
	QSqlDatabase db ;
	db = QSqlDatabase::addDatabase("QMYSQL","01");
	db.setHostName(my_hostname);
	db.setDatabaseName(my_database);
	db.setUserName(my_username);
	db.setPassword(my_password);
	bool ok = db.open();
	db = QSqlDatabase::database("01");

	QSqlQuery query = QSqlQuery::QSqlQuery(db);
	QString name = ui_edt_nome -> text();
	QString codx =x;

	QString sql = "SELECT * FROM `Cliente` where Cod="+x+"";
	query.exec(sql);
		//funcionou
		while (query.next()) {
			QString id = query.value(0).toString();		
			QString name = query.value(1).toString();
			QString endereco = query.value(3).toString();
			ui_edt_id ->setText(id);			
			ui_edt_nome ->setText(name);
			ui_edt_endereco ->setText(endereco);
		};
	db.close();   
   }
 QSqlDatabase::removeDatabase("01"); // correct
   
}
 void FrmClientes_cls::on_btn_salvar_clicked()
  {
	{
     		QSqlDatabase db ;
		db = QSqlDatabase::addDatabase("QMYSQL","01");
		db.setHostName(my_hostname);
		db.setDatabaseName(my_database);
		db.setUserName(my_username);
		db.setPassword(my_password);
		bool ok = db.open();
		db = QSqlDatabase::database("01");
		
		QSqlQuery query = QSqlQuery::QSqlQuery(db);
		
		QString verify = ui_edt_id -> text();
		QString verify_nome = ui_edt_nome -> text();
		if (verify ==""){
			if(verify_nome==""){
			QMessageBox::information(this, tr("Mensagem!"),
				tr("Por Favor Preencher Pelo Menos\n"
				   "o (Nome do Cliente) Obrigado!..."));			
			}else{
			QString nome = ui_edt_nome -> text();
			QString endereco = ui_edt_endereco -> text();
			QString sql = "insert into Cliente (Cod,Nome,Endereco)Values(0,'"+nome+"','"+endereco+"')";
			query.exec(sql);				
			db.close();				
			QMessageBox::information(this, tr("Mensagem!"),
				tr("Cliente Cadastrado com Sucesso!.\n"
					"Obrigado Por Usar (Omega Sistemas)!"));
			}
			
		}else{
			QString sql2 = "select * from Cliente where Cod="+verify+"";
			query.exec(sql2);
			int nraff = query.numRowsAffected();
//			qDebug()<<query.numRowsAffected();
			if (nraff >0){
		
			QMessageBox::information(this, tr("Mensagem!"),
				tr("Já Existe Um Clinte Cadastrado com esse ID.\n"
					"Por Favor, Peça (Novo) para Cadastrar!"));
			}else{
				QString nome = ui_edt_nome -> text();
				QString endereco = ui_edt_endereco -> text();
				QString sql = "insert into Cliente (Cod,Nome,Endereco)Values(0,'"+nome+"','"+endereco+"')";
				query.exec(sql);
				
				db.close();		
			}
	    }
	}
 
	 QSqlDatabase::removeDatabase("01"); // correct
	 


}
void FrmClientes_cls::on_btn_novo_clicked()
{
	ui_edt_id->clear();
	ui_edt_nome->clear();
	ui_edt_endereco->clear();
}

void FrmClientes_cls::on_btn_atualizar_clicked()
{
	{
     		QSqlDatabase db ;
		db = QSqlDatabase::addDatabase("QMYSQL","01");
		db.setHostName(my_hostname);
		db.setDatabaseName(my_database);
		db.setUserName(my_username);
		db.setPassword(my_password);
		bool ok = db.open();
		db = QSqlDatabase::database("01");
		QSqlQuery query = QSqlQuery::QSqlQuery(db);
		
		QString verify = ui_edt_id -> text();
		QString sql2 = "select * from Cliente where Cod="+verify+"";
		query.exec(sql2);
		int nraff = query.numRowsAffected();
//		qDebug()<<query.numRowsAffected();
		if (nraff <= 0){
	
		 QMessageBox::information(this, tr("Mensagem!"),
                              tr("Este Cliente Ainda Não Foi Cadastrado!.\n"
                                 "Por Favor, Peça (Salvar) para Cadastrar!"));
		}else{
	
			QString id = ui_edt_id -> text();
			QString nome = ui_edt_nome -> text();
			QString endereco = ui_edt_endereco -> text();
			
			QString sql = "UPDATE Cliente SET Nome = '"+nome+"',Endereco='"+endereco+"' where Cod ="+id;
			
			query.exec(sql);
			
			db.close();
			QMessageBox::information(this, tr("Mensagem!"),
				tr("Cliente Atualizado com Sucesso!.\n"
					"Obrigado Por Usar (Omega Sistemas)!"));
			
		}
	}
 
	 QSqlDatabase::removeDatabase("01"); // correct



}
void FrmClientes_cls::on_btn_excluir_clicked()
{
	{
     		QSqlDatabase db ;
		db = QSqlDatabase::addDatabase("QMYSQL","01");
		db.setHostName(my_hostname);
		db.setDatabaseName(my_database);
		db.setUserName(my_username);
		db.setPassword(my_password);
		bool ok = db.open();
		db = QSqlDatabase::database("01");

		QSqlQuery query = QSqlQuery::QSqlQuery(db);
				
		QString verify = ui_edt_id -> text();
		QString verify_nome = ui_edt_nome -> text();
		
		if (verify ==""){
		QMessageBox::information(this, tr("Mensagem!"),
			tr("Por Favor Selecione Um Cliente\n"
				"A Ser Excluido! Obrigado..."));					
			
		}else{
		QString id = ui_edt_id -> text();
		QString sql = "Delete From Cliente Where Cod="+id;				
		QMessageBox::StandardButton ret;
		ret = QMessageBox::warning(this, tr("Mensagem!"),
		tr("Você Deseja Realmente Excluir esse Cliente?.\n"
			"Não Será Possivel Recupera-lo depois!"),
		QMessageBox::Ok | QMessageBox::Cancel);	
		if (ret == QMessageBox::Ok){
			query.exec(sql);	
			on_btn_novo_clicked();		
		}else if (ret == QMessageBox::Cancel){
			
		}
			
		

		
		db.close();
		
		}										
	}
 
	 QSqlDatabase::removeDatabase("01"); // correct



}


void FrmClientes_cls::on_btn_localizar_clicked()
{ 
    close();
    FrmLocalizar_cls dialog(tr("Localizar"), this);
    dialog.setGeometry(100,200,100,100);
    if (dialog.exec() == QDialog::Accepted);
}
void FrmClientes_cls::on_btn_sair_clicked()
{
 close();
}

