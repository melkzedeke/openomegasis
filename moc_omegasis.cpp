/****************************************************************************
** Meta object code from reading C++ file 'omegasis.h'
**
** Created: Fri Sep 24 15:53:45 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "omegasis.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'omegasis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_OmegaSis_cls[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      41,   13,   13,   13, 0x08,
      68,   13,   13,   13, 0x08,
      94,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OmegaSis_cls[] = {
    "OmegaSis_cls\0\0on_btnclientes_triggered()\0"
    "on_btnprodutos_triggered()\0"
    "on_btncompras_triggered()\0"
    "on_btnvendas_triggered()\0"
};

const QMetaObject OmegaSis_cls::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_OmegaSis_cls,
      qt_meta_data_OmegaSis_cls, 0 }
};

const QMetaObject *OmegaSis_cls::metaObject() const
{
    return &staticMetaObject;
}

void *OmegaSis_cls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OmegaSis_cls))
	return static_cast<void*>(const_cast< OmegaSis_cls*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int OmegaSis_cls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnclientes_triggered(); break;
        case 1: on_btnprodutos_triggered(); break;
        case 2: on_btncompras_triggered(); break;
        case 3: on_btnvendas_triggered(); break;
        }
        _id -= 4;
    }
    return _id;
}
