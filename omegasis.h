 #ifndef OMEGASIS_H
 #define OMEGASIS_H

 #include <QWidget>
 #include <QLineEdit>
 
 #include <QMainWindow>
 #include <QPair>
 #include <QToolBar>
 class QPushButton;
 class QAction;
 class QTabWidget;
 class QToolBar;
 class QToolButton;
 class QAbstractButton;
 
 class OmegaSis_cls : public QMainWindow
 {
     Q_OBJECT

 public:
     OmegaSis_cls(QWidget *parent = 0);
 private slots:
 void on_btnclientes_triggered();     
 void on_btnprodutos_triggered();
 void on_btncompras_triggered();
 void on_btnvendas_triggered();

 
 private:
     QWidget* loadUiFile();
     void createLetter();
     QAction * ui_btnclientes;
     QAction * ui_btnprodutos;
     QAction * ui_btncompras;
     QAction * ui_btnvendas;
     QAction * printAction;
     QTabWidget * letters;
     QLineEdit  * ui_EdtNome;
     bool isFirstTime;
 };

 #endif 
