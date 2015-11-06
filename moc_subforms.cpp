/****************************************************************************
** Meta object code from reading C++ file 'subforms.h'
**
** Created: Fri Sep 24 15:53:46 2010
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "subforms.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subforms.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_FrmClientes_cls[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      39,   16,   16,   16, 0x0a,
      63,   16,   16,   16, 0x0a,
      90,   16,   16,   16, 0x0a,
     117,   16,   16,   16, 0x0a,
     142,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FrmClientes_cls[] = {
    "FrmClientes_cls\0\0on_btn_novo_clicked()\0"
    "on_btn_salvar_clicked()\0"
    "on_btn_localizar_clicked()\0"
    "on_btn_atualizar_clicked()\0"
    "on_btn_excluir_clicked()\0on_btn_sair_clicked()\0"
};

const QMetaObject FrmClientes_cls::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FrmClientes_cls,
      qt_meta_data_FrmClientes_cls, 0 }
};

const QMetaObject *FrmClientes_cls::metaObject() const
{
    return &staticMetaObject;
}

void *FrmClientes_cls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrmClientes_cls))
	return static_cast<void*>(const_cast< FrmClientes_cls*>(this));
    return QDialog::qt_metacast(_clname);
}

int FrmClientes_cls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btn_novo_clicked(); break;
        case 1: on_btn_salvar_clicked(); break;
        case 2: on_btn_localizar_clicked(); break;
        case 3: on_btn_atualizar_clicked(); break;
        case 4: on_btn_excluir_clicked(); break;
        case 5: on_btn_sair_clicked(); break;
        }
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_FrmLocalizar_cls[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      40,   17,   17,   17, 0x0a,
      60,   17,   17,   17, 0x0a,
      87,   17,   17,   17, 0x0a,
     125,  114,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FrmLocalizar_cls[] = {
    "FrmLocalizar_cls\0\0on_btn_sair_clicked()\0"
    "on_btn_ok_clicked()\0on_btn_localizar_clicked()\0"
    "on_grd_localizar_clicked()\0row,column\0"
    "on_grd_localizar_cellClicked(int,int)\0"
};

const QMetaObject FrmLocalizar_cls::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FrmLocalizar_cls,
      qt_meta_data_FrmLocalizar_cls, 0 }
};

const QMetaObject *FrmLocalizar_cls::metaObject() const
{
    return &staticMetaObject;
}

void *FrmLocalizar_cls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrmLocalizar_cls))
	return static_cast<void*>(const_cast< FrmLocalizar_cls*>(this));
    return QDialog::qt_metacast(_clname);
}

int FrmLocalizar_cls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btn_sair_clicked(); break;
        case 1: on_btn_ok_clicked(); break;
        case 2: on_btn_localizar_clicked(); break;
        case 3: on_grd_localizar_clicked(); break;
        case 4: on_grd_localizar_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        }
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_FrmCompras_cls[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   15,   15,   15, 0x0a,
      68,   15,   15,   15, 0x0a,
      85,   15,   15,   15, 0x0a,
     107,   15,   15,   15, 0x0a,
     127,   15,   15,   15, 0x0a,
     154,   15,   15,   15, 0x0a,
     179,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FrmCompras_cls[] = {
    "FrmCompras_cls\0\0textChanged(QString)\0"
    "ui_edt_vlrpro_setText(QString)\0"
    "setText(QString)\0on_btn_sair_clicked()\0"
    "on_btn_ok_clicked()\0on_btn_localizar_clicked()\0"
    "on_btn_comprar_clicked()\0on_btn_calc_clicked()\0"
};

const QMetaObject FrmCompras_cls::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FrmCompras_cls,
      qt_meta_data_FrmCompras_cls, 0 }
};

const QMetaObject *FrmCompras_cls::metaObject() const
{
    return &staticMetaObject;
}

void *FrmCompras_cls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrmCompras_cls))
	return static_cast<void*>(const_cast< FrmCompras_cls*>(this));
    return QDialog::qt_metacast(_clname);
}

int FrmCompras_cls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: ui_edt_vlrpro_setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: on_btn_sair_clicked(); break;
        case 4: on_btn_ok_clicked(); break;
        case 5: on_btn_localizar_clicked(); break;
        case 6: on_btn_comprar_clicked(); break;
        case 7: on_btn_calc_clicked(); break;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FrmCompras_cls::textChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_FrmProdutos_cls[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      39,   16,   16,   16, 0x0a,
      63,   16,   16,   16, 0x0a,
      90,   16,   16,   16, 0x0a,
     117,   16,   16,   16, 0x0a,
     142,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FrmProdutos_cls[] = {
    "FrmProdutos_cls\0\0on_btn_novo_clicked()\0"
    "on_btn_salvar_clicked()\0"
    "on_btn_localizar_clicked()\0"
    "on_btn_atualizar_clicked()\0"
    "on_btn_excluir_clicked()\0on_btn_sair_clicked()\0"
};

const QMetaObject FrmProdutos_cls::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FrmProdutos_cls,
      qt_meta_data_FrmProdutos_cls, 0 }
};

const QMetaObject *FrmProdutos_cls::metaObject() const
{
    return &staticMetaObject;
}

void *FrmProdutos_cls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrmProdutos_cls))
	return static_cast<void*>(const_cast< FrmProdutos_cls*>(this));
    return QDialog::qt_metacast(_clname);
}

int FrmProdutos_cls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btn_novo_clicked(); break;
        case 1: on_btn_salvar_clicked(); break;
        case 2: on_btn_localizar_clicked(); break;
        case 3: on_btn_atualizar_clicked(); break;
        case 4: on_btn_excluir_clicked(); break;
        case 5: on_btn_sair_clicked(); break;
        }
        _id -= 6;
    }
    return _id;
}
static const uint qt_meta_data_FrmLocPro_cls[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      37,   14,   14,   14, 0x0a,
      57,   14,   14,   14, 0x0a,
      84,   14,   14,   14, 0x0a,
     122,  111,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FrmLocPro_cls[] = {
    "FrmLocPro_cls\0\0on_btn_sair_clicked()\0"
    "on_btn_ok_clicked()\0on_btn_localizar_clicked()\0"
    "on_grd_localizar_clicked()\0row,column\0"
    "on_grd_localizar_cellClicked(int,int)\0"
};

const QMetaObject FrmLocPro_cls::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FrmLocPro_cls,
      qt_meta_data_FrmLocPro_cls, 0 }
};

const QMetaObject *FrmLocPro_cls::metaObject() const
{
    return &staticMetaObject;
}

void *FrmLocPro_cls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrmLocPro_cls))
	return static_cast<void*>(const_cast< FrmLocPro_cls*>(this));
    return QDialog::qt_metacast(_clname);
}

int FrmLocPro_cls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btn_sair_clicked(); break;
        case 1: on_btn_ok_clicked(); break;
        case 2: on_btn_localizar_clicked(); break;
        case 3: on_grd_localizar_clicked(); break;
        case 4: on_grd_localizar_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        }
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_FrmVendas_cls[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   14,   14,   14, 0x0a,
      56,   14,   14,   14, 0x0a,
      81,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FrmVendas_cls[] = {
    "FrmVendas_cls\0\0returnPressed()\0"
    "on_btn_findPro_clicked()\0"
    "on_btn_incluir_clicked()\0"
    "on_btn_excluir_clicked()\0"
};

const QMetaObject FrmVendas_cls::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FrmVendas_cls,
      qt_meta_data_FrmVendas_cls, 0 }
};

const QMetaObject *FrmVendas_cls::metaObject() const
{
    return &staticMetaObject;
}

void *FrmVendas_cls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrmVendas_cls))
	return static_cast<void*>(const_cast< FrmVendas_cls*>(this));
    return QDialog::qt_metacast(_clname);
}

int FrmVendas_cls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: returnPressed(); break;
        case 1: on_btn_findPro_clicked(); break;
        case 2: on_btn_incluir_clicked(); break;
        case 3: on_btn_excluir_clicked(); break;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FrmVendas_cls::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
