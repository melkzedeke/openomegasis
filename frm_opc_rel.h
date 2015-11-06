#ifndef FRM_OPC_REL_H
#define FRM_OPC_REL_H

#include <QDialog>

namespace Ui {
    class frm_opc_rel;
}

class frm_opc_rel : public QDialog
{
    Q_OBJECT

public:
    explicit frm_opc_rel(QWidget *parent = 0);
    ~frm_opc_rel();

private:
    Ui::frm_opc_rel *ui;
};

#endif // FRM_OPC_REL_H
