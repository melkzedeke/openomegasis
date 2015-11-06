 #include <QtUiTools>
 #include <QtGui>
 #include "omegasis.h"
 #include "subforms.h"
 #include "database.h"
 #include <QSqlDatabase>
 #include <QSqlError>
 #include <QSqlQuery>
 #include <QtSql>
 #include <QSqlResult>
 #include <QString>
 #include <QSqlQueryModel>
 #include <QMainWindow>
 #include <QToolBar>
 #include <QMessageBox>
 #include <Qt>
 #include <QRect>

  OmegaSis_cls::OmegaSis_cls(QWidget *parent)
     : QMainWindow(parent)
 {
     QWidget *formWidget = loadUiFile();

     ui_btnclientes = qFindChild<QAction*>(this, "btnclientes");
     ui_btnprodutos = qFindChild<QAction*>(this, "btnprodutos");
     ui_btncompras = qFindChild<QAction*>(this, "btncompras");
     ui_EdtNome = qFindChild<QLineEdit*>(this, "EdtNome");

     QMetaObject::connectSlotsByName(this);
          
//     newAct = new QAction(QIcon(":/images/new.png"), tr("&New"), this);
     //connect(ui_bntclientes, SIGNAL(triggered()), this, SLOT(on_bntclientes_clicked()));

     QVBoxLayout *layout = new QVBoxLayout;
     layout->addWidget(formWidget);
//     setWindowIcon(QIcon("icons/omegasis.png"));
   
//     setLayout(layout);

     QWidget *widget = new QWidget;
     setCentralWidget(widget);
     widget->setLayout(layout);
     setWindowTitle(tr("Omega Sistemas Corporation"));
     setWindowIcon(QIcon("/home/Melk/Omega/icons/omegasis.png"));
     isFirstTime = true;
 }

 
 QWidget* OmegaSis_cls::loadUiFile()
 {
     QUiLoader loader;

     QFile file(":/forms/frmprincipal.ui");
     file.open(QFile::ReadOnly);

  //   connect(btnclientes, SIGNAL(triggered()),
    //         this, SLOT(saveAct()));
// 	connect(buttonBox, SIGNAL(accepted()), this, SLOT(verify()));

     QWidget *formWidget = loader.load(&file, this);
     file.close();

     return formWidget;
 }

 void OmegaSis_cls::on_btnclientes_triggered()
 {
     FrmClientes_cls dialog(tr("Clientes"),this);
        dialog.setGeometry(100,200,100,100);
     if (dialog.exec() == QDialog::Accepted);	
 }
 void OmegaSis_cls::on_btncompras_triggered()
 {
    FrmCompras_cls dialog(tr("Compras"),this);
    dialog.setGeometry(100,200,100,100);
    if (dialog.exec() == QDialog::Accepted);	
 }
 void OmegaSis_cls::on_btnprodutos_triggered()
 {
     FrmProdutos_cls dialog(this);
        dialog.setGeometry(100,200,100,100);
     if (dialog.exec() == QDialog::Accepted);	

 }

void OmegaSis_cls::on_btnvendas_triggered()
 {
     FrmVendas_cls dialog(tr("Vendas"),this);
        dialog.setGeometry(100,200,100,100);
     if (dialog.exec() == QDialog::Accepted);	

 }


 /*void OmegaSis_cls::btnclientesClicked(QAbstractButton *button);
 {
     FrmClientes_cls dialog(tr("Cadastro de Clientes"), this);
     if (dialog.exec() == QDialog::Accepted);	

 }
*/
