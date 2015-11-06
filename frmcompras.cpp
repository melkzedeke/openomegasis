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
 #include <QLineEdit>
 #include <QWorkspace>
 #include <Qt>
 #include <QVariant>


//     FrmLocalizar_cls(const QString &title, QWidget *parent=0);
  FrmCompras_cls::FrmCompras_cls(const QString &title,QWidget *parent)
     : QDialog(parent)
 {
	QWidget *formWidget = loadUiFile();
        ui_edt_idpro = qFindChild<QLineEdit*>(this, "edt_idpro");     
        ui_edt_qtdpro = qFindChild<QLineEdit*>(this, "edt_qtdpro");
	ui_edt_nomepro = qFindChild<QLineEdit*>(this, "edt_nomepro");
        ui_edt_vlrpro = qFindChild<QLineEdit*>(this, "edt_vlrpro");
        ui_edt_vlrtotal = qFindChild<QLineEdit*>(this, "edt_vlrtotal");
	ui_btn_calc = qFindChild<QPushButton*>(this, "btn_calc");
        ui_btn_sair = qFindChild<QPushButton*>(this, "btn_sair");
	ui_btn_ok = qFindChild<QPushButton*>(this, "btn_ok");
	ui_btn_localizar = qFindChild<QPushButton*>(this, "btn_localizar");
	ui_btn_comprar = qFindChild<QPushButton*>(this, "btn_comprar");
	QMetaObject::connectSlotsByName(this);
//        connect( ui_edt_vlrpro, SIGNAL(textChanged(const QString&)), this, SLOT(keyPressEvent(QKeyEvent *event)) );
        connect( ui_edt_vlrpro, SIGNAL(textChanged(const QString&)), this, SLOT(ui_edt_vlrpro_setText(const QString&)) );
	connect( ui_edt_vlrtotal, SIGNAL(textChanged(const QString&)), this, SLOT(setText(const QString&)) );
        ui_edt_vlrpro->setAlignment(Qt::AlignRight);
	ui_edt_vlrtotal->setAlignment(Qt::AlignRight);
        ui_edt_vlrpro->setMaxLength(9);
	local=0;
	//QVBoxLayout *layout = new QVBoxLayout;
	QGridLayout *layout = new QGridLayout;
	layout->setHorizontalSpacing (0);
	layout->setSizeConstraint(QLayout::SetMinAndMaxSize);
	setConfigDB();
	
	layout->addWidget(formWidget);
	setLayout(layout);	
	setWindowTitle(title);
 }

 QWidget* FrmCompras_cls::loadUiFile()
 {
     QUiLoader loader;

     QFile file(":/forms/frmcompras.ui");
     file.open(QFile::ReadOnly);

     QWidget *formWidget = loader.load(&file, this);
     file.close();
     return formWidget;
 }

void FrmCompras_cls::setConfigDB()
 {
		QSettings settings("/etc/omegasis/config/database.ini",
		QSettings::IniFormat);
		my_hostname =settings.value("omegasis/hostname").toString ();
		my_database =settings.value("omegasis/database").toString ();
		my_username =settings.value("omegasis/username").toString ();
		my_password =settings.value("omegasis/password").toString ();

 }

void FrmCompras_cls::limpar_cmp()
{
   {
	ui_edt_idpro->clear();
	ui_edt_nomepro->clear();
	ui_edt_qtdpro->clear();	
	ui_edt_vlrpro->clear();	
	ui_edt_vlrtotal->clear();	
   }
}
void FrmCompras_cls::pegadados_cmp(QString x)
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
   
}
void FrmCompras_cls::on_btn_localizar_clicked()
{
    close();
    FrmLocPro_cls dialog(tr("LocCompras"), this);
    dialog.setGeometry(100,200,100,100);
    if (dialog.exec() == QDialog::Accepted);

}
 void FrmCompras_cls::setText(const QString&)
{
	bool ok = VerificaVirgula(ui_edt_vlrpro ->text());
	if(ok==true){

		}else{
			if(local==0){
			ui_edt_vlrpro -> setText(Mascara(ui_edt_vlrpro ->text()));
		}else{
			ui_edt_vlrtotal -> setText(Mascara(ui_edt_vlrtotal ->text()));

		}
	}
}
 void FrmCompras_cls::ui_edt_vlrpro_setText(const QString&)
{

      	int j = 0;
        edt_mask = new QLineEdit;
	QString vlrpos;
	vlrpos =  ui_edt_vlrpro ->text();
	vlrpos =  TiraPontoVirgula(vlrpos);
	
//	ui_edt_vlrpro->clear();
	if(vlrpos.count()==2){
	    vlrpos.prepend("0");
	  }
	if(vlrpos.count()==1){
	    vlrpos.prepend("00");
	  }

      if(vlrpos.count()>3){
        int k = 0;
	while ((k = vlrpos.indexOf("0", k)) != -1) {
	  if (k==0){
		vlrpos.remove(k, 1);
		k=-1;
	  }
		++k;
	}		
      }

	vlrpos = vlrpos.rightJustified(11, ' ');    // t == "...apple"
	edt_mask -> setInputMask("xxx.xxx.xxx,xx");


        edt_mask  -> setText(vlrpos);
	

	
	vlrpos = edt_mask ->text();
	
	edt_mask->setInputMask("");
	vlrpos.remove(QRegExp(" "));


	j=0;
	while ((j = vlrpos.indexOf(".", j)) != -1) {
	  if (j==0){
		vlrpos.remove(j, 1);
		j=-1;
	  }
		++j;
	}	
	j=0;
	while ((j = vlrpos.indexOf(",", j)) != -1) {
	  if (j==0){
		vlrpos.remove(j, 1);
		j=-1;
	  }
		++j;
	}	
        ui_edt_vlrpro  -> setText(vlrpos);
  
	
	
/*	QString MyEdit=ui_edt_vlrpro ->text();
	bool ok = VerificaVirgula(ui_edt_vlrpro ->text());

	if(ok==true){
		ui_edt_vlrpro -> setText( TrataVirgulas(Mascara(MyEdit)));
	}else{
		ui_edt_vlrpro -> setText(Mascara(MyEdit));
	}
*/
}
void FrmCompras_cls::on_btn_comprar_clicked()
{
	{
	
		QString verify = ui_edt_idpro -> text();
		if (verify ==""){
		QMessageBox::information(this, tr("Mensagem!"),
			tr("Por Favor Localize o Produto\n"
				"a ser (Comprado) Obrigado!..."));			
			
		}else{
			QSqlDatabase db ;		
			db = QSqlDatabase::addDatabase("QMYSQL","01");
			db.setHostName(my_hostname);
			db.setDatabaseName(my_database);
			db.setUserName(my_username);
			db.setPassword(my_password);			
			bool ok = db.open();
			db = QSqlDatabase::database("01");		
			QSqlQuery query = QSqlQuery::QSqlQuery(db);

			QString idpro = ui_edt_idpro -> text();
			QString sqlvery = "Select * from estoque where pro_id="+idpro;

			query.exec(sqlvery);
			QString qtd_pro;
			while (query.next()) {
				qtd_pro = query.value(2).toString();					
			};
			int nraff = query.numRowsAffected();

			if (nraff > 0){
				QString qtdpro = ui_edt_qtdpro -> text();
				QString vlrpro = ui_edt_vlrpro -> text();
				QString vlrtotal = ui_edt_vlrtotal -> text();
				QString sqlcompras = "insert into compras (cmp_id,pro_id,pro_qtd,vlr_unit,vlr_total)Values(0,'"+idpro+"','"+qtdpro+"','"+vlrpro+"','"+vlrtotal+"')";

				int qtd1 = qtd_pro.toInt();
				int qtd2 = qtdpro.toInt();
				int qtdtotal = qtd1+qtd2;

				QVariant qtdUp;
				qtdUp = qtdtotal;
				QString qtdTotalUp = qtdUp.toString();

				QString sqlup = "UPDATE estoque SET pro_qtd = '"+qtdTotalUp+"' where pro_id ="+idpro;
				query.exec(sqlcompras);
				query.exec(sqlup);

				db.close();		
				QMessageBox::information(this, tr("Mensagem!"),
					"Compra Realizada com Sucesso!\n"
					"Produtos Adicionados no Estoque = "+qtdpro+"");			
				limpar_cmp();


			}else{
				QString qtdpro = ui_edt_qtdpro -> text();
				QString vlrpro = ui_edt_vlrpro -> text();
				QString vlrtotal = ui_edt_vlrtotal -> text();
				QString sqlcompras2 = "insert into compras (cmp_id,pro_id,pro_qtd,vlr_unit,vlr_total)Values(0,'"+idpro+"','"+qtdpro+"','"+vlrpro+"','"+vlrtotal+"')";

				QString sqlestoque = "insert into estoque (estq_id,pro_id,pro_qtd)Values(0,'"+idpro+"','"+qtdpro+"')";

				query.exec(sqlcompras2);
				query.exec(sqlestoque);
				db.close();		
				QMessageBox::information(this, tr("Mensagem!"),
					"Compra Realizada com Sucesso!\n"
					"Produtos Cadastrados no Estoque = "+qtdpro+"");			
				limpar_cmp();
			     }
	    	     }
	}
 
	 QSqlDatabase::removeDatabase("01"); // correct
	 


}

void FrmCompras_cls::on_btn_ok_clicked()
{
     QString str;
	str = "j fasjdf asdh fp4ewnfasdfasdhfaksjdf baksdfnasdf ";
	str.remove(QRegExp("[abcdefghijklmnopqrstuwxyz!��}:><M|Z$*%#%@B&)*&( $T&]."));
	qDebug()<<str;

}

void FrmCompras_cls::on_btn_calc_clicked()
{

	QString vlrpos;
	vlrpos =  soma(ui_edt_vlrpro ->text(),ui_edt_qtdpro -> text());
	if(vlrpos.count()==2){
	    vlrpos.prepend("0");
	  }
	if(vlrpos.count()==1){
	    vlrpos.prepend("00");
	  }
	  
	//vlrpos = Mascara(vlrpos);
 
	vlrpos = vlrpos.rightJustified(11, ' ');    // t == "...apple"
	ui_edt_vlrtotal->setInputMask("xxx.xxx.xxx,xx");
        ui_edt_vlrtotal  -> setText(vlrpos);

	vlrpos = ui_edt_vlrtotal ->text();
	
	ui_edt_vlrtotal->setInputMask("");
	vlrpos.remove(QRegExp(" "));

	int j = 0;

	while ((j = vlrpos.indexOf(".", j)) != -1) {
	  if (j==0){
		vlrpos.remove(j, 1);
		j=-1;
	  }
		++j;
	}	
	j=0;
	while ((j = vlrpos.indexOf(",", j)) != -1) {
	  if (j==0){
		vlrpos.remove(j, 1);
		j=-1;
	  }
		++j;
	}	
	
        ui_edt_vlrtotal  -> setText(vlrpos);
	
	
/*	local=1;
	int numb;
	QString vlrpro;
	QString vlrpos;

	QVariant z = Calcular(ui_edt_qtdpro ->text());
	double qtd = z.toDouble();
	z = Calcular(ui_edt_vlrpro->text());
	double vlr_unit = z.toDouble();

	double vlr_total= qtd*vlr_unit;

	z = vlr_total;
	vlrpro= z.toString();
	numb =vlrpro.indexOf(".");
	vlrpro.remove(numb, 1);	
	vlrpos =vlrpro.mid(numb,2);
	vlrpro = vlrpro.left(numb);	
	vlrpro = Mascara(vlrpro);
	vlrpro = vlrpro+","+vlrpos;
	
	ui_edt_vlrtotal -> setText(vlrpro);
*/
}
void FrmCompras_cls::on_btn_sair_clicked()
{
close();
}
