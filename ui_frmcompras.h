/********************************************************************************
** Form generated from reading ui file 'frmcompras.ui'
**
** Created: Fri Sep 24 15:53:15 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FRMCOMPRAS_H
#define UI_FRMCOMPRAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

class Ui_Form
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *edt_idpro;
    QLineEdit *edt_nomepro;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *edt_qtdpro;
    QLabel *label_4;
    QLineEdit *edt_vlrpro;
    QLabel *label_5;
    QLineEdit *edt_vlrtotal;
    QPushButton *btn_localizar;
    QPushButton *btn_comprar;
    QPushButton *btn_sair;
    QPushButton *btn_ok;
    QToolButton *btn_calc;
    QWidget *tab_2;
    QWidget *tab_3;

    void setupUi(QWidget *Form)
    {
    if (Form->objectName().isEmpty())
        Form->setObjectName(QString::fromUtf8("Form"));
    Form->setWindowModality(Qt::NonModal);
    Form->resize(500, 200);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(240);
    sizePolicy.setVerticalStretch(162);
    sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
    Form->setSizePolicy(sizePolicy);
    Form->setMinimumSize(QSize(500, 200));
    Form->setMaximumSize(QSize(500, 200));
    Form->setSizeIncrement(QSize(0, 0));
    Form->setBaseSize(QSize(0, 0));
    Form->setFocusPolicy(Qt::NoFocus);
    tabWidget = new QTabWidget(Form);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabWidget->setGeometry(QRect(0, 0, 481, 181));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    edt_idpro = new QLineEdit(tab);
    edt_idpro->setObjectName(QString::fromUtf8("edt_idpro"));
    edt_idpro->setGeometry(QRect(10, 27, 71, 23));
    edt_idpro->setReadOnly(true);
    edt_nomepro = new QLineEdit(tab);
    edt_nomepro->setObjectName(QString::fromUtf8("edt_nomepro"));
    edt_nomepro->setGeometry(QRect(90, 27, 371, 23));
    edt_nomepro->setReadOnly(true);
    label = new QLabel(tab);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 10, 56, 18));
    label_2 = new QLabel(tab);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(90, 10, 91, 20));
    label_3 = new QLabel(tab);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(10, 63, 61, 20));
    edt_qtdpro = new QLineEdit(tab);
    edt_qtdpro->setObjectName(QString::fromUtf8("edt_qtdpro"));
    edt_qtdpro->setGeometry(QRect(10, 80, 71, 23));
    label_4 = new QLabel(tab);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(93, 63, 61, 20));
    edt_vlrpro = new QLineEdit(tab);
    edt_vlrpro->setObjectName(QString::fromUtf8("edt_vlrpro"));
    edt_vlrpro->setGeometry(QRect(90, 80, 91, 23));
    edt_vlrpro->setLayoutDirection(Qt::LeftToRight);
    label_5 = new QLabel(tab);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(232, 63, 71, 20));
    edt_vlrtotal = new QLineEdit(tab);
    edt_vlrtotal->setObjectName(QString::fromUtf8("edt_vlrtotal"));
    edt_vlrtotal->setGeometry(QRect(230, 80, 113, 23));
    edt_vlrtotal->setReadOnly(true);
    btn_localizar = new QPushButton(tab);
    btn_localizar->setObjectName(QString::fromUtf8("btn_localizar"));
    btn_localizar->setGeometry(QRect(10, 120, 75, 27));
    btn_comprar = new QPushButton(tab);
    btn_comprar->setObjectName(QString::fromUtf8("btn_comprar"));
    btn_comprar->setGeometry(QRect(100, 120, 75, 27));
    btn_sair = new QPushButton(tab);
    btn_sair->setObjectName(QString::fromUtf8("btn_sair"));
    btn_sair->setGeometry(QRect(190, 120, 75, 27));
    btn_ok = new QPushButton(tab);
    btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
    btn_ok->setGeometry(QRect(280, 120, 75, 27));
    btn_calc = new QToolButton(tab);
    btn_calc->setObjectName(QString::fromUtf8("btn_calc"));
    btn_calc->setGeometry(QRect(188, 76, 33, 28));
    btn_calc->setIcon(QIcon(QString::fromUtf8("../../../../../opt/kde/share/icons/crystalsvg/48x48/actions/forward.png")));
    tabWidget->addTab(tab, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    tabWidget->addTab(tab_2, QString());
    tab_3 = new QWidget();
    tab_3->setObjectName(QString::fromUtf8("tab_3"));
    tabWidget->addTab(tab_3, QString());

    retranslateUi(Form);

    tabWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
    Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Form", "id_pro", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Form", "nome_pro", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Form", "qtd_pro", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Form", "vlr_unit", 0, QApplication::UnicodeUTF8));
    edt_vlrpro->setInputMask(QString());
    edt_vlrpro->setText(QString());
    label_5->setText(QApplication::translate("Form", "vlr_total", 0, QApplication::UnicodeUTF8));
    btn_localizar->setText(QApplication::translate("Form", "&Localizar", 0, QApplication::UnicodeUTF8));
    btn_comprar->setText(QApplication::translate("Form", "&Comprar", 0, QApplication::UnicodeUTF8));
    btn_sair->setText(QApplication::translate("Form", "&Sair", 0, QApplication::UnicodeUTF8));
    btn_ok->setText(QApplication::translate("Form", "OK", 0, QApplication::UnicodeUTF8));
    btn_calc->setText(QApplication::translate("Form", "...", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Form", "Compras", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Form", "Tab 2", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Form", "Page", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Form);
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

#endif // UI_FRMCOMPRAS_H
