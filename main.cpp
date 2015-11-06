#include <QApplication>
#include "omegasis.h"
#include <Qt>
#include <QWidget>
#include <QIcon>
 int main(int argc, char *argv[])
 {
     Q_INIT_RESOURCE(omegasis_res);
     QApplication app(argc, argv);

     OmegaSis_cls * omegasis_obj = new OmegaSis_cls;
     omegasis_obj -> setWindowState(Qt::WindowMaximized);   
     omegasis_obj ->show();

     return app.exec();
 } 
 
