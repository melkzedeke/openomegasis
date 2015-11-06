/********************************************************************************
** Form generated from reading ui file 'frmvendas.ui'
**
** Created: Fri Sep 24 15:53:15 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FRMVENDAS_H
#define UI_FRMVENDAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

class Ui_Form
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *edt_vlr_unit;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *edt_vlr_total;
    QToolButton *btn_incluir;
    QLabel *label_5;
    QToolButton *btn_excluir;
    QLineEdit *edt_qtd;
    QLineEdit *edt_idpro;
    QLineEdit *edt_nomepro;
    QLabel *label_8;
    QLabel *label_9;
    QToolButton *btn_findPro;
    QLabel *label_10;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QToolButton *btn_findCli;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QToolButton *toolButton;
    QTableWidget *grd_vendas;
    QLineEdit *lineEdit_9;
    QWidget *tab_2;
    QWidget *tab_3;

    void setupUi(QWidget *Form)
    {
    if (Form->objectName().isEmpty())
        Form->setObjectName(QString::fromUtf8("Form"));
    Form->resize(680, 543);
    Form->setMinimumSize(QSize(680, 543));
    Form->setMaximumSize(QSize(680, 543));
    tabWidget = new QTabWidget(Form);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabWidget->setGeometry(QRect(4, 7, 671, 531));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    edt_vlr_unit = new QLineEdit(tab);
    edt_vlr_unit->setObjectName(QString::fromUtf8("edt_vlr_unit"));
    edt_vlr_unit->setGeometry(QRect(75, 193, 113, 25));
    label_6 = new QLabel(tab);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(80, 134, 171, 20));
    label_7 = new QLabel(tab);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(6, 176, 31, 20));
    edt_vlr_total = new QLineEdit(tab);
    edt_vlr_total->setObjectName(QString::fromUtf8("edt_vlr_total"));
    edt_vlr_total->setGeometry(QRect(195, 193, 113, 25));
    btn_incluir = new QToolButton(tab);
    btn_incluir->setObjectName(QString::fromUtf8("btn_incluir"));
    btn_incluir->setGeometry(QRect(315, 191, 33, 28));
    btn_incluir->setIcon(QIcon(QString::fromUtf8("../../../../opt/kde/share/icons/crystalsvg/48x48/actions/down.png")));
    label_5 = new QLabel(tab);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(6, 135, 31, 20));
    btn_excluir = new QToolButton(tab);
    btn_excluir->setObjectName(QString::fromUtf8("btn_excluir"));
    btn_excluir->setGeometry(QRect(353, 191, 33, 28));
    btn_excluir->setIcon(QIcon(QString::fromUtf8("../../../../opt/kde/share/icons/crystalsvg/48x48/actions/up.png")));
    edt_qtd = new QLineEdit(tab);
    edt_qtd->setObjectName(QString::fromUtf8("edt_qtd"));
    edt_qtd->setGeometry(QRect(5, 193, 61, 25));
    edt_qtd->setFocusPolicy(Qt::StrongFocus);
    edt_idpro = new QLineEdit(tab);
    edt_idpro->setObjectName(QString::fromUtf8("edt_idpro"));
    edt_idpro->setGeometry(QRect(5, 150, 71, 25));
    edt_nomepro = new QLineEdit(tab);
    edt_nomepro->setObjectName(QString::fromUtf8("edt_nomepro"));
    edt_nomepro->setGeometry(QRect(80, 150, 251, 25));
    label_8 = new QLabel(tab);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(76, 177, 68, 20));
    label_9 = new QLabel(tab);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setGeometry(QRect(194, 176, 68, 20));
    btn_findPro = new QToolButton(tab);
    btn_findPro->setObjectName(QString::fromUtf8("btn_findPro"));
    btn_findPro->setGeometry(QRect(335, 150, 33, 24));
    btn_findPro->setIcon(QIcon(QString::fromUtf8("../../../../opt/kde/share/icons/crystalsvg/48x48/apps/kdvi.png")));
    label_10 = new QLabel(tab);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setGeometry(QRect(547, 177, 91, 20));
    lineEdit_3 = new QLineEdit(tab);
    lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
    lineEdit_3->setGeometry(QRect(11, 80, 446, 25));
    lineEdit = new QLineEdit(tab);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(86, 30, 371, 25));
    label_2 = new QLabel(tab);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(10, 10, 41, 20));
    comboBox = new QComboBox(tab);
    comboBox->setObjectName(QString::fromUtf8("comboBox"));
    comboBox->setGeometry(QRect(501, 30, 86, 24));
    comboBox->setMinimumContentsLength(0);
    btn_findCli = new QToolButton(tab);
    btn_findCli->setObjectName(QString::fromUtf8("btn_findCli"));
    btn_findCli->setGeometry(QRect(460, 30, 34, 25));
    btn_findCli->setIcon(QIcon(QString::fromUtf8("../../../../opt/kde/share/icons/crystalsvg/48x48/apps/kdvi.png")));
    label_3 = new QLabel(tab);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(501, 11, 81, 20));
    label = new QLabel(tab);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(86, 10, 131, 20));
    lineEdit_2 = new QLineEdit(tab);
    lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
    lineEdit_2->setGeometry(QRect(10, 30, 71, 25));
    label_4 = new QLabel(tab);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(11, 61, 101, 20));
    toolButton = new QToolButton(tab);
    toolButton->setObjectName(QString::fromUtf8("toolButton"));
    toolButton->setGeometry(QRect(598, 448, 61, 51));
    toolButton->setLayoutDirection(Qt::LeftToRight);
    toolButton->setIcon(QIcon(QString::fromUtf8("../../../../opt/kde/share/icons/crystalsvg/48x48/actions/forward.png")));
    toolButton->setIconSize(QSize(32, 32));
    grd_vendas = new QTableWidget(tab);
    grd_vendas->setObjectName(QString::fromUtf8("grd_vendas"));
    grd_vendas->setGeometry(QRect(0, 223, 661, 221));
    grd_vendas->setFrameShape(QFrame::StyledPanel);
    grd_vendas->setFrameShadow(QFrame::Sunken);
    grd_vendas->setGridStyle(Qt::SolidLine);
    lineEdit_9 = new QLineEdit(tab);
    lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
    lineEdit_9->setGeometry(QRect(541, 192, 113, 25));
    tabWidget->addTab(tab, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    tabWidget->addTab(tab_2, QString());
    tab_3 = new QWidget();
    tab_3->setObjectName(QString::fromUtf8("tab_3"));
    tabWidget->addTab(tab_3, QString());
    QWidget::setTabOrder(tabWidget, lineEdit_2);
    QWidget::setTabOrder(lineEdit_2, lineEdit);
    QWidget::setTabOrder(lineEdit, btn_findCli);
    QWidget::setTabOrder(btn_findCli, comboBox);
    QWidget::setTabOrder(comboBox, lineEdit_3);
    QWidget::setTabOrder(lineEdit_3, edt_idpro);
    QWidget::setTabOrder(edt_idpro, edt_nomepro);
    QWidget::setTabOrder(edt_nomepro, btn_findPro);
    QWidget::setTabOrder(btn_findPro, edt_qtd);
    QWidget::setTabOrder(edt_qtd, edt_vlr_unit);
    QWidget::setTabOrder(edt_vlr_unit, edt_vlr_total);
    QWidget::setTabOrder(edt_vlr_total, btn_incluir);
    QWidget::setTabOrder(btn_incluir, btn_excluir);
    QWidget::setTabOrder(btn_excluir, lineEdit_9);
    QWidget::setTabOrder(lineEdit_9, grd_vendas);
    QWidget::setTabOrder(grd_vendas, toolButton);

    retranslateUi(Form);

    tabWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
    Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("Form", "Descri\303\247\303\243o do Produto", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("Form", "Qtd", 0, QApplication::UnicodeUTF8));
    btn_incluir->setText(QString());
    btn_incluir->setShortcut(QApplication::translate("Form", "Ins", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("Form", "ID:", 0, QApplication::UnicodeUTF8));
    btn_excluir->setStatusTip(QString());
    btn_excluir->setText(QApplication::translate("Form", "...", 0, QApplication::UnicodeUTF8));
    btn_excluir->setShortcut(QApplication::translate("Form", "Del", 0, QApplication::UnicodeUTF8));
    edt_idpro->setWhatsThis(QApplication::translate("Form", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    edt_nomepro->setInputMask(QString());
    edt_nomepro->setText(QString());
    label_8->setText(QApplication::translate("Form", "Vlr_Unit", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("Form", "Vlr_Total", 0, QApplication::UnicodeUTF8));
    btn_findPro->setText(QApplication::translate("Form", "...", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("Form", "Vlr_T_Cmp", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("Form", "ID:", 0, QApplication::UnicodeUTF8));
    comboBox->clear();
    comboBox->insertItems(0, QStringList()
     << QApplication::translate("Form", "A Vista", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("Form", "A Prazo", 0, QApplication::UnicodeUTF8)
    );
    btn_findCli->setText(QApplication::translate("Form", "...", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("Form", "Venda Tipo", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Form", "Nome do Cliente:", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("Form", "Endere\303\247o:", 0, QApplication::UnicodeUTF8));
    toolButton->setText(QApplication::translate("Form", "Avancar", 0, QApplication::UnicodeUTF8));
    if (grd_vendas->columnCount() < 5)
        grd_vendas->setColumnCount(5);

    QTableWidgetItem *__colItem = new QTableWidgetItem();
    __colItem->setText(QApplication::translate("Form", "idpro", 0, QApplication::UnicodeUTF8));
    grd_vendas->setHorizontalHeaderItem(0, __colItem);

    QTableWidgetItem *__colItem1 = new QTableWidgetItem();
    __colItem1->setText(QApplication::translate("Form", "NomeProduto", 0, QApplication::UnicodeUTF8));
    grd_vendas->setHorizontalHeaderItem(1, __colItem1);

    QTableWidgetItem *__colItem2 = new QTableWidgetItem();
    __colItem2->setText(QApplication::translate("Form", "qtd", 0, QApplication::UnicodeUTF8));
    grd_vendas->setHorizontalHeaderItem(2, __colItem2);

    QTableWidgetItem *__colItem3 = new QTableWidgetItem();
    __colItem3->setText(QApplication::translate("Form", "vlr_unit", 0, QApplication::UnicodeUTF8));
    grd_vendas->setHorizontalHeaderItem(3, __colItem3);

    QTableWidgetItem *__colItem4 = new QTableWidgetItem();
    __colItem4->setText(QApplication::translate("Form", "vlr_total", 0, QApplication::UnicodeUTF8));
    grd_vendas->setHorizontalHeaderItem(4, __colItem4);
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Form", "Vendas", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Form", "Credi\303\241rio/ Parcelamento", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Form", "Concluir Vendas", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Form);
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

#endif // UI_FRMVENDAS_H
