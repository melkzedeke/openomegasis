/********************************************************************************
** Form generated from reading ui file 'frmprodutos.ui'
**
** Created: Fri Sep 24 15:53:15 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FRMPRODUTOS_H
#define UI_FRMPRODUTOS_H

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
    QLineEdit *edt_id;
    QLabel *label_6;
    QLineEdit *edt_codbarras;
    QLabel *label_2;
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
    label->setGeometry(QRect(110, 12, 128, 20));
    edt_id = new QLineEdit(tab_3);
    edt_id->setObjectName(QString::fromUtf8("edt_id"));
    edt_id->setGeometry(QRect(10, 30, 91, 23));
    edt_id->setReadOnly(true);
    label_6 = new QLabel(tab_3);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(10, 13, 21, 18));
    edt_codbarras = new QLineEdit(tab_3);
    edt_codbarras->setObjectName(QString::fromUtf8("edt_codbarras"));
    edt_codbarras->setGeometry(QRect(10, 76, 261, 25));
    label_2 = new QLabel(tab_3);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(10, 60, 131, 20));
    tabWidget->addTab(tab_3, QIcon(QString::fromUtf8("../../../opt/kde/share/icons/crystalsvg/48x48/apps/bluefish.png")), QString());
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
    label->setText(QApplication::translate("Form", "Nome do Produto:", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("Form", "ID:", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Form", "Codigo de Barras:", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Form", "Cadastro de Produtos (Omega Sistemas)", 0, QApplication::UnicodeUTF8));
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

#endif // UI_FRMPRODUTOS_H
