/****************************************************************************
** Meta object code from reading C++ file 'AutoTypeAssociationsModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/entry/AutoTypeAssociationsModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoTypeAssociationsModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AutoTypeAssociationsModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   49,   51,   51, 0x0a,
      52,   49,   51,   51, 0x0a,
      79,   51,   51,   51, 0x0a,
      96,   49,   51,   51, 0x0a,
     126,   51,   51,   51, 0x0a,
     146,   51,   51,   51, 0x0a,
     161,   51,   51,   51, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AutoTypeAssociationsModel[] = {
    "AutoTypeAssociationsModel\0"
    "associationChange(int)\0i\0\0"
    "associationAboutToAdd(int)\0associationAdd()\0"
    "associationAboutToRemove(int)\0"
    "associationRemove()\0aboutToReset()\0"
    "reset()\0"
};

void AutoTypeAssociationsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AutoTypeAssociationsModel *_t = static_cast<AutoTypeAssociationsModel *>(_o);
        switch (_id) {
        case 0: _t->associationChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->associationAboutToAdd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->associationAdd(); break;
        case 3: _t->associationAboutToRemove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->associationRemove(); break;
        case 5: _t->aboutToReset(); break;
        case 6: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AutoTypeAssociationsModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AutoTypeAssociationsModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_AutoTypeAssociationsModel,
      qt_meta_data_AutoTypeAssociationsModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AutoTypeAssociationsModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AutoTypeAssociationsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AutoTypeAssociationsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AutoTypeAssociationsModel))
        return static_cast<void*>(const_cast< AutoTypeAssociationsModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int AutoTypeAssociationsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
