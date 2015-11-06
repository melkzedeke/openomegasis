/********************************************************************************
** Form generated from reading ui file 'frmclientes.ui'
**
** Created: Fri Sep 24 15:53:15 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FRMCLIENTES_H
#define UI_FRMCLIENTES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

class Ui_Form
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLineEdit *edt_nome;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *edt_endereco;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLineEdit *edt_id;
    QLabel *label_6;
    QWidget *tab;
    QWidget *tab_2;
    QPushButton *btn_novo;
    QPushButton *btn_atualizar;
    QPushButton *btn_excluir;
    QPushButton *btn_relatorio;
    QPushButton *btn_sair;
    QPushButton *btn_localizar;
    QPushButton *btn_salvar;

    void setupUi(QWidget *Form)
    {
    if (Form->objectName().isEmpty())
        Form->setObjectName(QString::fromUtf8("Form"));
    Form->setWindowModality(Qt::NonModal);
    Form->resize(500, 450);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(240);
    sizePolicy.setVerticalStretch(162);
    sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
    Form->setSizePolicy(sizePolicy);
    Form->setMinimumSize(QSize(500, 450));
    Form->setMaximumSize(QSize(500, 460));
    Form->setSizeIncrement(QSize(0, 0));
    Form->setBaseSize(QSize(0, 0));
    Form->setWindowIcon(QIcon());
    tabWidget = new QTabWidget(Form);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabWidget->setWindowModality(Qt::WindowModal);
    tabWidget->setGeometry(QRect(0, 10, 491, 381));
    tabWidget->setMinimumSize(QSize(491, 381));
    tab_3 = new QWidget();
    tab_3->setObjectName(QString::fromUtf8("tab_3"));
    edt_nome = new QLineEdit(tab_3);
    edt_nome->setObjectName(QString::fromUtf8("edt_nome"));
    edt_nome->setGeometry(QRect(110, 30, 361, 23));
    label = new QLabel(tab_3);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(110, 12, 56, 18));
    label_2 = new QLabel(tab_3);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(10, 59, 81, 20));
    edt_endereco = new QLineEdit(tab_3);
    edt_endereco->setObjectName(QString::fromUtf8("edt_endereco"));
    edt_endereco->setGeometry(QRect(10, 76, 461, 23));
    lineEdit_3 = new QLineEdit(tab_3);
    lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
    lineEdit_3->setGeometry(QRect(180, 130, 141, 23));
    label_3 = new QLabel(tab_3);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(180, 110, 81, 20));
    label_4 = new QLabel(tab_3);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(10, 110, 56, 18));
    lineEdit_4 = new QLineEdit(tab_3);
    lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
    lineEdit_4->setGeometry(QRect(10, 130, 161, 23));
    edt_id = new QLineEdit(tab_3);
    edt_id->setObjectName(QString::fromUtf8("edt_id"));
    edt_id->setGeometry(QRect(10, 30, 91, 23));
    edt_id->setReadOnly(true);
    label_6 = new QLabel(tab_3);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(10, 13, 21, 18));
    tabWidget->addTab(tab_3, QIcon(QString::fromUtf8("../../../opt/kde/share/icons/crystalsvg/48x48/apps/bluefish.png")), QString());
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    tabWidget->addTab(tab, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    tabWidget->addTab(tab_2, QString());
    btn_novo = new QPushButton(Form);
    btn_novo->setObjectName(QString::fromUtf8("btn_novo"));
    btn_novo->setGeometry(QRect(2, 400, 68, 50));
    btn_atualizar = new QPushButton(Form);
    btn_atualizar->setObjectName(QString::fromUtf8("btn_atualizar"));
    btn_atualizar->setGeometry(QRect(138, 400, 68, 50));
    btn_excluir = new QPushButton(Form);
    btn_excluir->setObjectName(QString::fromUtf8("btn_excluir"));
    btn_excluir->setGeometry(QRect(206, 400, 68, 50));
    btn_relatorio = new QPushButton(Form);
    btn_relatorio->setObjectName(QString::fromUtf8("btn_relatorio"));
    btn_relatorio->setGeometry(QRect(274, 400, 68, 50));
    btn_sair = new QPushButton(Form);
    btn_sair->setObjectName(QString::fromUtf8("btn_sair"));
    btn_sair->setGeometry(QRect(410, 400, 68, 50));
    btn_localizar = new QPushButton(Form);
    btn_localizar->setObjectName(QString::fromUtf8("btn_localizar"));
    btn_localizar->setGeometry(QRect(342, 400, 68, 50));
    btn_salvar = new QPushButton(Form);
    btn_salvar->setObjectName(QString::fromUtf8("btn_salvar"));
    btn_salvar->setGeometry(QRect(70, 400, 68, 50));

    retranslateUi(Form);

    tabWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
    Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Form", "Nome:", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Form", "Endere\303\247o:", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Form", "Telefone:", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Form", "Bairro:", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("Form", "ID:", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Form", "Clientes", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Form", "Op\303\247\303\265es 1", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Form", "Op\303\247\303\265es 2", 0, QApplication::UnicodeUTF8));
    btn_novo->setText(QApplication::translate("Form", "&Novo", 0, QApplication::UnicodeUTF8));
    btn_atualizar->setText(QApplication::translate("Form", "&Atualizar", 0, QApplication::UnicodeUTF8));
    btn_excluir->setText(QApplication::translate("Form", "&Excluir", 0, QApplication::UnicodeUTF8));
    btn_relatorio->setText(QApplication::translate("Form", "&Relatorio", 0, QApplication::UnicodeUTF8));
    btn_sair->setText(QApplication::translate("Form", "&Sair", 0, QApplication::UnicodeUTF8));
    btn_localizar->setText(QApplication::translate("Form", "&Localizar", 0, QApplication::UnicodeUTF8));
    btn_salvar->setText(QApplication::translate("Form", "&Salvar", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Form);
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

#endif // UI_FRMCLIENTES_H
