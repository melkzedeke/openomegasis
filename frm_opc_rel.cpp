#include "frm_opc_rel.h"
#include "ui_frm_opc_rel.h"

frm_opc_rel::frm_opc_rel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frm_opc_rel)
{
    ui->setupUi(this);
}

frm_opc_rel::~frm_opc_rel()
{
    delete ui;
}
