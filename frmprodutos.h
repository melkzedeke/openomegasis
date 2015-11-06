 #ifndef DETAILSDIALOG_H
 #define DETAILSDIALOG_H

 #include <QDialog>
 #include <QList>
 #include <QPair>
 #include <QString>
 #include <QTableView>
 #include <QTableWidget>
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
 

 class FrmProdutos_cls : public QDialog
 {
     Q_OBJECT

 public:
     FrmProdutos_cls(QWidget *parent = 0);
     void pegadados_pro(QString x);     
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
     QLineEdit  * ui_edt_endereco;  
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
//     bool isFirstTime;
     
 };
 #endif
