 #ifndef DETAILSDIALOG_H
 #define DETAILSDIALOG_H
 #include <QSqlDatabase>
 #include <QString>
 #include <QDialog>
 #include <QList>
 #include <QPair>
 #include <QString>
 #include "omegasis.h" 
 #include "frm_opc_rel.h"
 #include <QVariant>

 class QCheckBox;
 class QDialogButtonBox;
 class QLabel;
 class QLineEdit;
 class QTableWidget;
 class QTableView;
 class QTextEdit;
 class QWidget;
 class QGridLayout;
 class QString;

 class FrmClientes_cls : public QDialog
 {
     Q_OBJECT

 public:
     FrmClientes_cls(const QString &title, QWidget *parent = 0);
     void pegadados(QString x);
     QLineEdit  * ui_edt_endereco;

 public slots:

     void on_btn_novo_clicked();
     void on_btn_salvar_clicked();     
     void on_btn_localizar_clicked();
     void on_btn_atualizar_clicked();     
     void on_btn_excluir_clicked();
     void on_btn_sair_clicked();
//      PreviewWindow(QWidget *parent = 0);

 private:
     QString my_hostname;
     QString my_database;
     QString my_username;
     QString my_password;
     void setConfigDB();
     void setupItemsTable();
     QWidget* loadUiFile();
     QLabel *nameLabel;
     QLabel *addressLabel;
     QCheckBox *offersCheckBox;
     QLineEdit *nameEdit;
     QStringList items;
     QTableWidget *itemsTable;
     QTextEdit *addressEdit;
     QDialogButtonBox *buttonBox;
     QPushButton * ui_btn_novo;
     QPushButton * ui_btn_sair;
     QPushButton * ui_btn_salvar;
     QPushButton * ui_btn_atualizar;
     QPushButton * ui_btn_excluir;
     QLineEdit  * ui_edt_id;          
     QLineEdit  * ui_edt_nome;     
     //OmegaSis_cls * omegaSis_cls;

//     bool isFirstTime;
     
 };
 class FrmLocalizar_cls : public QDialog
 {
     Q_OBJECT

 public:
     FrmLocalizar_cls(const QString &title, QWidget *parent=0);
 public slots:
     void on_btn_sair_clicked();
     void on_btn_ok_clicked();
     void on_btn_localizar_clicked();     
     void on_grd_localizar_clicked();
     void on_grd_localizar_cellClicked(int row, int column);
 private:
     QWidget* loadUiFile();

     QPushButton * ui_btn_sair;
     QPushButton * ui_btn_ok;
     QPushButton * ui_btn_localizar;     
     QLineEdit  * ui_edt_localizar;
     QLineEdit  * ui_edt_id;     
     QLineEdit  * ui_edt_nome;     
     QTableWidget * ui_grd_localizar;
     FrmClientes_cls * frmClientes_cls;
//     bool isFirstTime;
     
 };
 
class FrmCompras_cls : public QDialog
 {
     Q_OBJECT

 public:
	FrmCompras_cls(const QString &title, QWidget *parent=0);
	void pegadados_cmp(QString x);
	void limpar_cmp();
	int local;
	
  signals:
     void textChanged(const QString&);

 public slots:
     void ui_edt_vlrpro_setText ( const QString & );
     void setText ( const QString & );
     void on_btn_sair_clicked();
     void on_btn_ok_clicked();
     void on_btn_localizar_clicked();
     void on_btn_comprar_clicked();
     void on_btn_calc_clicked();
     //void key_PressEvent(QKeyEvent *event);
    //void on_edt_vlrpro_key_PressEvent(QKeyEvent *event);

 private:	
     QString my_hostname;
     QString my_database;
     QString my_username;
     QString my_password;   
     void setConfigDB();
     QWidget* loadUiFile();
     QPushButton * ui_btn_calc;
     QPushButton * ui_btn_sair;
     QPushButton * ui_btn_ok;
     QPushButton * ui_btn_localizar;
     QPushButton * ui_btn_comprar;
     QLineEdit  * ui_edt_idpro;
     QLineEdit  * ui_edt_nomepro;
     QLineEdit  * ui_edt_qtdpro;
     QLineEdit  * ui_edt_vlrpro;
     QLineEdit  * edt_mask;  
     QLineEdit  * ui_edt_vlrtotal;
//     bool isFirstTime;
     
 };

class FrmProdutos_cls : public QDialog
 {
     Q_OBJECT

 public:
     FrmProdutos_cls(QWidget *parent = 0);
     void pegadados_pro(QString x);     
     QString my_hostname;
     QString my_database;
     QString my_username;
     QString my_password;
 public slots:
     void on_btn_novo_clicked();
     void on_btn_salvar_clicked();     
     void on_btn_localizar_clicked();
     void on_btn_atualizar_clicked();     
     void on_btn_excluir_clicked();
     void on_btn_sair_clicked();
//      PreviewWindow(QWidget *parent = 0);

 private:
     void setupItemsTable();
     void setConfigDB();
     QWidget* loadUiFile();
     QLabel *nameLabel;
     QLabel *addressLabel;
     QCheckBox *offersCheckBox;
     QLineEdit *nameEdit;
     QStringList items;
     QTableWidget *itemsTable;
     QTextEdit *addressEdit;
     QDialogButtonBox *buttonBox;
     QPushButton * ui_btn_novo;
     QPushButton * ui_btn_sair;
     QPushButton * ui_btn_salvar;
     QPushButton * ui_btn_atualizar;
     QPushButton * ui_btn_excluir;
     QPushButton * ui_btn_localizar;
     QLineEdit  * ui_edt_id;          
     QLineEdit  * ui_edt_nome;   
     QLineEdit  * ui_edt_codbarras;  
//     OmegaSis_cls * omegaSis_cls;

//     bool isFirstTime;
     
 };


 class FrmLocPro_cls : public QDialog
 {
     Q_OBJECT

 public:
     FrmLocPro_cls(const QString &title, QWidget *parent=0);
 public slots:
     void on_btn_sair_clicked();
     void on_btn_ok_clicked();
     void on_btn_localizar_clicked();     
     void on_grd_localizar_clicked();
     void on_grd_localizar_cellClicked(int row, int column);

 private:
     QWidget* loadUiFile();

     QPushButton * ui_btn_sair;
     QPushButton * ui_btn_ok;
     QPushButton * ui_btn_localizar;     
     QLineEdit  * ui_edt_localizar;
     QLineEdit  * ui_edt_id;     
     QLineEdit  * ui_edt_nome;     
     QTableWidget * ui_grd_localizar;
     FrmProdutos_cls * frmProdutos_cls;
     FrmCompras_cls * frmCompras_cls;
//     bool isFirstTime;
     
 };


class FrmVendas_cls : public QDialog
 {
     Q_OBJECT

 public:
     FrmVendas_cls(const QString &title, QWidget *parent=0);
//     FrmCompras_cls(QWidget *parent = 0);
     void pegadados_vnd(QString x);
     void limpar_vnd();
     void limpa_grd_vnd();
     void preenche_grd_vnd();
  signals:
     //void textChanged(const QString&);
     void returnPressed ();
 public slots:
/*     void on_btn_sair_clicked();
     void on_btn_ok_clicked();
     void on_btn_localizar_clicked();*/
     void on_btn_findPro_clicked();
     void on_btn_incluir_clicked();
     void on_btn_excluir_clicked();

 private:
     QWidget* loadUiFile();
     QTableWidget * ui_grd_vendas;
     QPushButton * ui_btn_findPro;
     QPushButton * ui_btn_incluir;
     QPushButton * ui_btn_excluir;
     QLineEdit  * ui_edt_idpro;
     QLineEdit  * ui_edt_nomepro;
     QLineEdit  * ui_edt_qtd;
     QLineEdit  * ui_edt_vlr_unit;
     QLineEdit  * ui_edt_vlr_total;

   /*  QPushButton * ui_btn_sair;
     QPushButton * ui_btn_ok;
     QPushButton * ui_btn_localizar;
     QPushButton * ui_btn_comprar;
     QLineEdit  * ui_edt_idpro;
     QLineEdit  * ui_edt_nomepro;
     QLineEdit  * ui_edt_qtdpro;
     QLineEdit  * ui_edt_vlrpro;
     QLineEdit  * ui_edt_vlrtotal;
*/
//     bool isFirstTime;
     
 };

 #endif
 

