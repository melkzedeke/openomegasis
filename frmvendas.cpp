 #include <QtGui>
 #include <QtUiTools>
 #include "subforms.h"
 #include <QSqlDatabase>
 #include <QSqlError>
 #include <QSqlQuery>
 #include <QtSql>
 #include <QSqlResult>
 #include <QString>
 #include <QSqlQueryModel>
 #include <QWorkspace>
 #include <Qt>
 #include <QVariant>
 
//     FrmLocalizar_cls(const QString &title, QWidget *parent=0);
  FrmVendas_cls::FrmVendas_cls(const QString &title,QWidget *parent)
     : QDialog(parent)
 {
	QWidget *formWidget = loadUiFile();
	ui_grd_vendas = qFindChild<QTableWidget*>(this, "grd_vendas");
	ui_btn_findPro = qFindChild<QPushButton*>(this, "btn_findPro");
	ui_btn_incluir = qFindChild<QPushButton*>(this, "btn_incluir");
	ui_btn_excluir = qFindChild<QPushButton*>(this, "btn_excluir");
        ui_edt_idpro = qFindChild<QLineEdit*>(this, "edt_idpro");     
	ui_edt_nomepro = qFindChild<QLineEdit*>(this, "edt_nomepro");
	ui_edt_qtd = qFindChild<QLineEdit*>(this, "edt_qtd");
	ui_edt_vlr_unit = qFindChild<QLineEdit*>(this, "edt_vlr_unit");
	ui_edt_vlr_total = qFindChild<QLineEdit*>(this, "edt_vlr_total");

        /*ui_edt_idpro = qFindChild<QLineEdit*>(this, "edt_idpro");     
        ui_edt_qtdpro = qFindChild<QLineEdit*>(this, "edt_qtdpro");
	ui_edt_nomepro = qFindChild<QLineEdit*>(this, "edt_nomepro");
        ui_edt_vlrpro = qFindChild<QLineEdit*>(this, "edt_vlrpro");
        ui_edt_vlrtotal = qFindChild<QLineEdit*>(this, "edt_vlrtotal");
        ui_btn_sair = qFindChild<QPushButton*>(this, "btn_sair");
	ui_btn_ok = qFindChild<QPushButton*>(this, "btn_ok");
	ui_btn_localizar = qFindChild<QPushButton*>(this, "btn_localizar");
	ui_btn_comprar = qFindChild<QPushButton*>(this, "btn_comprar");*/
	QMetaObject::connectSlotsByName(this);
	connect( ui_edt_idpro, SIGNAL(returnPressed ()), this, SLOT(on_btn_findPro_clicked() ));
//	ui_grd_localizar->horizontalHeader()->setResizeMode(1,  QHeaderView::Stretch);
//	ui_grd_vendas ->horizontalHeader()->setResizeMode(1,  QHeaderView::Stretch);
	//QVBoxLayout *layout = new QVBoxLayout;
	QGridLayout *layout = new QGridLayout;
	layout->setHorizontalSpacing (0);
	layout->setSizeConstraint(QLayout::SetMinAndMaxSize);
	
	layout->addWidget(formWidget);
	setLayout(layout);	
	setWindowTitle(title);
	if (title=="Vendas"){
		limpa_grd_vnd();
	}
	
	ui_grd_vendas ->horizontalHeader()->setResizeMode(1,  QHeaderView::Stretch);
 }

 QWidget* FrmVendas_cls::loadUiFile()
 {
     QUiLoader loader;

     QFile file(":/forms/frmvendas.ui");
     file.open(QFile::ReadOnly);

     QWidget *formWidget = loader.load(&file, this);
     file.close();

     return formWidget;
 }
void FrmVendas_cls::limpar_vnd()
{
/*	ui_edt_idpro->clear();
	ui_edt_nomepro->clear();
	ui_edt_qtdpro->clear();	
	ui_edt_vlrpro->clear();	
	ui_edt_vlrtotal->clear();	*/
}
void FrmVendas_cls::preenche_grd_vnd()
{
	{
		QSqlDatabase db ;		
		db = QSqlDatabase::addDatabase("QMYSQL","01");
		db.setHostName("localhost");
		db.setDatabaseName("Omega");
		db.setUserName("root");
                db.setPassword("");
		bool ok = db.open();
		db = QSqlDatabase::database("01");
		
		QSqlQuery query = QSqlQuery::QSqlQuery(db);
		
		QString sql = "SELECT * FROM `tmp_vendas` ";
		query.exec(sql);
		//funcionou
		while (query.next()) {
			QString id = query.value(0).toString();		
			QString name = query.value(1).toString();
			QString qtd = query.value(2).toString();
			QString vlr_unit = query.value(3).toString();
			QString vlr_total = query.value(4).toString();
//			QString codbarras = query.value(2).toString();
//			ui_edt_idpro ->setText(id);			
//			ui_edt_nomepro ->setText(name);

			int contador = ui_grd_vendas -> rowCount();
			QTableWidgetItem *item_id = new QTableWidgetItem((id));
			QTableWidgetItem *item_name = new QTableWidgetItem((name));
			QTableWidgetItem *item_qtd = new QTableWidgetItem((qtd));
			QTableWidgetItem *item_vlr_unit = new QTableWidgetItem((vlr_unit));
			QTableWidgetItem *item_vlr_total = new QTableWidgetItem((vlr_total));
		
			ui_grd_vendas->setRowCount(contador+1);
			ui_grd_vendas->setItem(contador,0,item_id);
			ui_grd_vendas->setItem(contador,1, item_name);
			ui_grd_vendas->setItem(contador,2, item_qtd);
			ui_grd_vendas->setItem(contador,3, item_vlr_unit);
			ui_grd_vendas->setItem(contador,4, item_vlr_total);

//			ui_edt_codbarras ->setText(codbarras);
		};
	db.close();   
   }
 QSqlDatabase::removeDatabase("01"); // correct
}

void FrmVendas_cls::limpa_grd_vnd()
{
	{
		QSqlDatabase db ;		
		db = QSqlDatabase::addDatabase("QMYSQL","01");
		db.setHostName("localhost");
		db.setDatabaseName("Omega");
		db.setUserName("root");
                db.setPassword("");
		bool ok = db.open();
		db = QSqlDatabase::database("01");
		
		QSqlQuery query = QSqlQuery::QSqlQuery(db);
		
		QString sql = "delete from tmp_vendas";
//		qDebug() << sql;
		query.exec(sql);				
		db.close();	

	    }
 
	 QSqlDatabase::removeDatabase("01"); // correct
}
void FrmVendas_cls::on_btn_incluir_clicked()
{
	{
		QSqlDatabase db ;		
		db = QSqlDatabase::addDatabase("QMYSQL","01");
		db.setHostName("localhost");
		db.setDatabaseName("Omega");
		db.setUserName("root");
                db.setPassword("");
		bool ok = db.open();
		db = QSqlDatabase::database("01");
		
		QSqlQuery query = QSqlQuery::QSqlQuery(db);
		
		QString verify = ui_edt_idpro -> text();
		QString verify_nome = ui_edt_nomepro -> text();
		if (verify ==""){
			QMessageBox::information(this, tr("Mensagem!"),
				tr("Por Favor Selecione o Produto\n"
				   "a Ser Incluido, Obrigado!..."));		
			
		}else{
			QString sql2 = "select * from tmp_vendas where idpro="+verify+"";
			query.exec(sql2);
			int nraff = query.numRowsAffected();
//			qDebug()<<query.numRowsAffected();
			if (nraff >0){	
				QMessageBox::information(this, tr("Mensagem!"),
					tr("Já Existe Um Produto Cadastrado com esse ID.\n"
  					     "Escolha Outro Produto, Obrigado!"));			
                            }
                        else
                            {
				QString idpro = ui_edt_idpro -> text();
				QString nomepro = ui_edt_nomepro -> text();
				QString qtd = ui_edt_qtd -> text();
				QString vlr_unit = ui_edt_vlr_unit -> text();
				QString vlr_total = ui_edt_vlr_total -> text();
//				QString codbarras = ui_edt_codbarras -> text();
				QString sql = "insert into tmp_vendas (idpro,nomepro,qtd,vlr_unit,vlr_total)Values('"+idpro+"','"+nomepro+"','"+qtd+"','"+vlr_unit+"','"+vlr_total+"')";
//				qDebug() << sql;
				query.exec(sql);				
				db.close();	

				int contador = ui_grd_vendas -> rowCount();
				QTableWidgetItem *item_id = new QTableWidgetItem((idpro));
				QTableWidgetItem *item_nome = new QTableWidgetItem((nomepro));
				QTableWidgetItem *item_qtd = new QTableWidgetItem((qtd));
				QTableWidgetItem *item_vlr_unit = new QTableWidgetItem((vlr_unit));
				QTableWidgetItem *item_vlr_total = new QTableWidgetItem((vlr_total));
				ui_grd_vendas->setRowCount(contador+1);
				ui_grd_vendas->setItem(contador,0,item_id);
				ui_grd_vendas->setItem(contador,1, item_nome);
				ui_grd_vendas->setItem(contador,2, item_qtd);
				ui_grd_vendas->setItem(contador,3, item_vlr_unit);
				ui_grd_vendas->setItem(contador,4, item_vlr_total);
			}
	    }
	}
 
	 QSqlDatabase::removeDatabase("01"); // correct
}
void FrmVendas_cls::pegadados_vnd(QString x)
{
   {
	QSqlDatabase db ;		
	db = QSqlDatabase::addDatabase("QMYSQL","01");
	db.setHostName("localhost");
	db.setDatabaseName("Omega");
	db.setUserName("root");
        db.setPassword("");
	bool ok = db.open();
	db = QSqlDatabase::database("01");
	
	QSqlQuery query = QSqlQuery::QSqlQuery(db);
//	QString name = ui_edt_nome -> text();
//	QString codx =x;

	QString sql = "SELECT * FROM `Produtos` where proId="+x+"";
	query.exec(sql);
		//funcionou
		while (query.next()) {
			QString id = query.value(0).toString();		
			QString name = query.value(1).toString();
			QString codbarras = query.value(2).toString();
			ui_edt_idpro ->setText(id);			
			ui_edt_nomepro ->setText(name);
//			ui_edt_codbarras ->setText(codbarras);
		};
	db.close();   
   }
 QSqlDatabase::removeDatabase("01"); // correct
      preenche_grd_vnd();
}
void FrmVendas_cls::on_btn_excluir_clicked()
{
QString idpro = ui_grd_vendas->item(ui_grd_vendas->currentRow (),0) ->text();
	{
		QSqlDatabase db ;		
		db = QSqlDatabase::addDatabase("QMYSQL","01");
		db.setHostName("localhost");
		db.setDatabaseName("Omega");
		db.setUserName("root");
                db.setPassword("");
		bool ok = db.open();
		db = QSqlDatabase::database("01");
		
		QSqlQuery query = QSqlQuery::QSqlQuery(db);
		
		QString sql = "delete from tmp_vendas where idpro="+idpro;
//		qDebug() << sql;
		query.exec(sql);				
		db.close();	

	    }
 
	 QSqlDatabase::removeDatabase("01"); // correct
//	qDebug() << idpro;
ui_grd_vendas->removeRow(ui_grd_vendas->currentRow ());
}

void FrmVendas_cls::on_btn_findPro_clicked()
{
    close();
    FrmLocPro_cls dialog(tr("LocVendas"), this);
    dialog.setGeometry(100,200,100,100);
    if (dialog.exec() == QDialog::Accepted);
}
