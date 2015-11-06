/********************************************************************************
** Form generated from reading ui file 'frmprincipal.ui'
**
** Created: Fri Sep 24 15:53:15 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FRMPRINCIPAL_H
#define UI_FRMPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

class Ui_frmprincipal
{
public:
    QAction *btnclientes;
    QAction *btnprodutos;
    QAction *btnvendas;
    QAction *btncompras;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_Op_es;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *frmprincipal)
    {
    if (frmprincipal->objectName().isEmpty())
        frmprincipal->setObjectName(QString::fromUtf8("frmprincipal"));
    frmprincipal->resize(800, 600);
    frmprincipal->setMinimumSize(QSize(800, 600));
    frmprincipal->setSizeIncrement(QSize(0, 0));
    frmprincipal->setBaseSize(QSize(0, 0));
    frmprincipal->setWindowIcon(QIcon(QString::fromUtf8("../../../../opt/kde/share/icons/crystalsvg/48x48/apps/clock.png")));
    frmprincipal->setIconSize(QSize(48, 48));
    frmprincipal->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    btnclientes = new QAction(frmprincipal);
    btnclientes->setObjectName(QString::fromUtf8("btnclientes"));
    btnclientes->setIcon(QIcon(QString::fromUtf8("../../../../usr/local/omega/icons/clientes.png")));
    btnprodutos = new QAction(frmprincipal);
    btnprodutos->setObjectName(QString::fromUtf8("btnprodutos"));
    btnprodutos->setIcon(QIcon(QString::fromUtf8("../../../../usr/local/omega/icons/omegasis.png")));
    btnvendas = new QAction(frmprincipal);
    btnvendas->setObjectName(QString::fromUtf8("btnvendas"));
    btnvendas->setIcon(QIcon(QString::fromUtf8("../../../../opt/kde/share/icons/crystalsvg/48x48/apps/randr.png")));
    btncompras = new QAction(frmprincipal);
    btncompras->setObjectName(QString::fromUtf8("btncompras"));
    btncompras->setIcon(QIcon(QString::fromUtf8("../../../../opt/kde/share/icons/crystalsvg/48x48/apps/kpovmodeler.png")));
    centralwidget = new QWidget(frmprincipal);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    frmprincipal->setCentralWidget(centralwidget);
    menubar = new QMenuBar(frmprincipal);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 800, 22));
    menu_Op_es = new QMenu(menubar);
    menu_Op_es->setObjectName(QString::fromUtf8("menu_Op_es"));
    frmprincipal->setMenuBar(menubar);
    statusbar = new QStatusBar(frmprincipal);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    frmprincipal->setStatusBar(statusbar);
    toolBar = new QToolBar(frmprincipal);
    toolBar->setObjectName(QString::fromUtf8("toolBar"));
    toolBar->setIconSize(QSize(32, 32));
    toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    frmprincipal->addToolBar(Qt::TopToolBarArea, toolBar);

    menubar->addAction(menu_Op_es->menuAction());
    toolBar->addAction(btnclientes);
    toolBar->addSeparator();
    toolBar->addAction(btnprodutos);
    toolBar->addSeparator();
    toolBar->addAction(btnvendas);
    toolBar->addSeparator();
    toolBar->addAction(btncompras);
    toolBar->addSeparator();

    retranslateUi(frmprincipal);

    QMetaObject::connectSlotsByName(frmprincipal);
    } // setupUi

    void retranslateUi(QMainWindow *frmprincipal)
    {
    frmprincipal->setWindowTitle(QApplication::translate("frmprincipal", "Omega Sistemas ", 0, QApplication::UnicodeUTF8));
    btnclientes->setText(QApplication::translate("frmprincipal", "&Clientes", 0, QApplication::UnicodeUTF8));
    btnclientes->setIconText(QApplication::translate("frmprincipal", "Clientes      ", 0, QApplication::UnicodeUTF8));
    btnclientes->setToolTip(QApplication::translate("frmprincipal", "Clientes", 0, QApplication::UnicodeUTF8));
    btnprodutos->setText(QApplication::translate("frmprincipal", "&Produtos", 0, QApplication::UnicodeUTF8));
    btnvendas->setText(QApplication::translate("frmprincipal", "&Vendas", 0, QApplication::UnicodeUTF8));
    btncompras->setText(QApplication::translate("frmprincipal", "Compras", 0, QApplication::UnicodeUTF8));
    menu_Op_es->setTitle(QApplication::translate("frmprincipal", "&Op\303\247\303\265es", 0, QApplication::UnicodeUTF8));
    toolBar->setWindowTitle(QApplication::translate("frmprincipal", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frmprincipal: public Ui_frmprincipal {};
} // namespace Ui

#endif // UI_FRMPRINCIPAL_H
