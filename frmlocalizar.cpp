 #include <QtGui>
 #include <QtUiTools>
 #include "subforms.h"
 #include <QSqlError>
 #include <QSqlQuery>
 #include <QtSql>
 #include <QSqlResult>
 #include <QString>
 #include <QSqlQueryModel>
 #include <QWorkspace>
 #include <Qt>
 #include <QTableView> 
 #include <QTableWidget>
 #include <QHeaderView>

  FrmLocalizar_cls::FrmLocalizar_cls(const QString &title, QWidget *parent)
     : QDialog(parent)
 {
	QWidget *formWidget = loadUiFile();
        frmClientes_cls = new FrmClientes_cls(tr("Clientes"),this);
        ui_btn_sair = qFindChild<QPushButton*>(this, "btn_sair");
	ui_btn_ok = qFindChild<QPushButton*>(this, "btn_ok");
	ui_btn_localizar = qFindChild<QPushButton*>(this, "btn_localizar");	
	ui_grd_localizar = qFindChild<QTableWidget*>(this, "grd_localizar");
        ui_edt_localizar = qFindChild<QLineEdit*>(this, "edt_localizar");	
        ui_edt_id = qFindChild<QLineEdit*>(this, "edt_id");
        ui_edt_nome = qFindChild<QLineEdit*>(this, "edt_nome");
	QMetaObject::connectSlotsByName(this);
	
	//setConfigDB();
	//QVBoxLayout *layout = new QVBoxLayout;
	QGridLayout *layout = new QGridLayout;
	layout->setHorizontalSpacing (0);
	layout->setSizeConstraint(QLayout::SetMinAndMaxSize);
	
	layout->addWidget(formWidget);
	setLayout(layout);	
	setWindowTitle(title);
//        ui_grd_localizar-> resizeSection ( 1,100 );

        ui_grd_localizar->setRowCount(1);
        ui_grd_localizar->setColumnCount(2);
        ui_grd_localizar->horizontalHeader()->setResizeMode(1,  QHeaderView::Stretch);
	ui_grd_localizar->verticalHeader()->hide();
//	ui_grd_localizar->setShowGrid(false);
	
 }

 QWidget* FrmLocalizar_cls::loadUiFile()
 {
     QUiLoader loader;

     QFile file(":/forms/frmlocalizar.ui");
     file.open(QFile::ReadOnly);

     QWidget *formWidget = loader.load(&file, this);
     file.close();

     return formWidget;
 }
void FrmLocalizar_cls::on_btn_ok_clicked()
{
	{
		close();
		FrmClientes_cls dialog(tr("Clientes"),this);
		dialog.setGeometry(100,200,100,100);
		dialog.pegadados(ui_edt_id->text());
		if (dialog.exec() == QDialog::Accepted);	
	}
}
void FrmLocalizar_cls::on_btn_localizar_clicked()
{

   {


	QSqlDatabase db ;		
	db = QSqlDatabase::addDatabase("QMYSQL","02");
	db.setHostName("localhost");
	db.setDatabaseName("Omega");
	db.setUserName("root");
	db.setPassword("");
	bool ok = db.open();
	db = QSqlDatabase::database("02");
	
	QSqlQuery query = QSqlQuery::QSqlQuery(db);


	QString sql = "SELECT * FROM `Cliente` where Nome like '"+ui_edt_localizar->text()+"%' limit 20";
	
	query.exec(sql);
		//funcionou
		int contador =0;
		while (query.next()) {
		
			QString id = query.value(0).toString();		
			QString name = query.value(1).toString();
		        QTableWidgetItem *item_id = new QTableWidgetItem((id));
		        QTableWidgetItem *item_name = new QTableWidgetItem((name));
                        ui_grd_localizar->setRowCount(contador+1);
   			ui_grd_localizar->setItem(contador,0,item_id)	;		
   			ui_grd_localizar->setItem(contador,1, item_name);		
			contador++;
		};

	db.close();   
   }
 QSqlDatabase::removeDatabase("02"); // correct	
	
}


void FrmLocalizar_cls::on_grd_localizar_clicked()
{

}

void FrmLocalizar_cls::on_grd_localizar_cellClicked(int row, int column)
{
		QTableWidgetItem *item_id;
		QTableWidgetItem *item_nome;	

	if(column==0){
		item_id = ui_grd_localizar->item(row, column);
		item_nome = ui_grd_localizar->item(row, column+1);	
	}else{
		item_id = ui_grd_localizar->item(row, column-1);
		item_nome = ui_grd_localizar->item(row, column);		
	}
	
	ui_edt_id ->setText(item_id -> text());    
	ui_edt_nome ->setText(item_nome -> text());
}
void FrmLocalizar_cls::on_btn_sair_clicked()
{
	{
		close();
		FrmClientes_cls dialog(tr("Clientes"),this);
  	        dialog.setGeometry(100,200,100,100);
//  	        dialog.pegadados(ui_edt_id->text());
		if (dialog.exec() == QDialog::Accepted);	

	}
}
