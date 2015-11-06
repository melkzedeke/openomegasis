/********************************************************************************
** Form generated from reading ui file 'frmlocpro.ui'
**
** Created: Fri Sep 24 15:53:15 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FRMLOCPRO_H
#define UI_FRMLOCPRO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

class Ui_Form
{
public:
    QPushButton *btn_localizar;
    QPushButton *btn_ok;
    QPushButton *btn_sair;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *edt_localizar;
    QLabel *label;
    QLineEdit *edt_nome;
    QLineEdit *edt_id;
    QLabel *label_2;
    QLabel *label_3;
    QTableWidget *grd_localizar;
    QWidget *tab_2;

    void setupUi(QWidget *Form)
    {
    if (Form->objectName().isEmpty())
        Form->setObjectName(QString::fromUtf8("Form"));
    Form->setWindowModality(Qt::NonModal);
    Form->resize(600, 300);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(240);
    sizePolicy.setVerticalStretch(162);
    sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
    Form->setSizePolicy(sizePolicy);
    Form->setMinimumSize(QSize(600, 300));
    Form->setMaximumSize(QSize(600, 300));
    Form->setSizeIncrement(QSize(0, 0));
    Form->setBaseSize(QSize(0, 0));
    Form->setFocusPolicy(Qt::NoFocus);
    btn_localizar = new QPushButton(Form);
    btn_localizar->setObjectName(QString::fromUtf8("btn_localizar"));
    btn_localizar->setGeometry(QRect(510, 30, 75, 27));
    btn_ok = new QPushButton(Form);
    btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
    btn_ok->setGeometry(QRect(510, 60, 75, 27));
    btn_sair = new QPushButton(Form);
    btn_sair->setObjectName(QString::fromUtf8("btn_sair"));
    btn_sair->setGeometry(QRect(510, 90, 75, 27));
    tabWidget = new QTabWidget(Form);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabWidget->setGeometry(QRect(10, 10, 491, 281));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    edt_localizar = new QLineEdit(tab);
    edt_localizar->setObjectName(QString::fromUtf8("edt_localizar"));
    edt_localizar->setGeometry(QRect(10, 30, 451, 23));
    label = new QLabel(tab);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 10, 311, 20));
    edt_nome = new QLineEdit(tab);
    edt_nome->setObjectName(QString::fromUtf8("edt_nome"));
    edt_nome->setGeometry(QRect(90, 70, 371, 23));
    edt_id = new QLineEdit(tab);
    edt_id->setObjectName(QString::fromUtf8("edt_id"));
    edt_id->setGeometry(QRect(10, 72, 71, 23));
    label_2 = new QLabel(tab);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(10, 55, 41, 20));
    label_3 = new QLabel(tab);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(90, 55, 101, 20));
    grd_localizar = new QTableWidget(tab);
    grd_localizar->setObjectName(QString::fromUtf8("grd_localizar"));
    grd_localizar->setGeometry(QRect(10, 100, 451, 141));
    grd_localizar->setContextMenuPolicy(Qt::NoContextMenu);
    grd_localizar->setFrameShape(QFrame::Box);
    grd_localizar->setFrameShadow(QFrame::Sunken);
    grd_localizar->setLineWidth(1);
    grd_localizar->setMidLineWidth(0);
    grd_localizar->setShowGrid(true);
    grd_localizar->setGridStyle(Qt::SolidLine);
    grd_localizar->setCornerButtonEnabled(false);
    tabWidget->addTab(tab, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    tabWidget->addTab(tab_2, QString());

    retranslateUi(Form);

    QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
    Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
    btn_localizar->setText(QApplication::translate("Form", "&Localizar", 0, QApplication::UnicodeUTF8));
    btn_ok->setText(QApplication::translate("Form", "&OK", 0, QApplication::UnicodeUTF8));
    btn_sair->setText(QApplication::translate("Form", "&Sair", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Form", "Digite O Nome do Produto a Ser Procurado:", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Form", "ID:", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Form", "Nome:", 0, QApplication::UnicodeUTF8));
    if (grd_localizar->columnCount() < 2)
        grd_localizar->setColumnCount(2);

    QTableWidgetItem *__colItem = new QTableWidgetItem();
    __colItem->setText(QApplication::translate("Form", "ID:", 0, QApplication::UnicodeUTF8));
    grd_localizar->setHorizontalHeaderItem(0, __colItem);

    QTableWidgetItem *__colItem1 = new QTableWidgetItem();
    __colItem1->setText(QApplication::translate("Form", "Nome:", 0, QApplication::UnicodeUTF8));
    grd_localizar->setHorizontalHeaderItem(1, __colItem1);
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Form", "Tab 1", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Form", "Tab 2", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Form);
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

#endif // UI_FRMLOCPRO_H
