/****************************************************************************
** Meta object code from reading C++ file 'EntryAttributesModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/entry/EntryAttributesModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntryAttributesModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EntryAttributesModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   22,   21,   21, 0x08,
      51,   22,   21,   21, 0x08,
      80,   21,   21,   21, 0x08,
      95,   22,   21,   21, 0x08,
     127,   21,   21,   21, 0x08,
     159,  145,   21,   21, 0x08,
     199,  145,   21,   21, 0x08,
     232,   21,   21,   21, 0x08,
     247,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EntryAttributesModel[] = {
    "EntryAttributesModel\0\0key\0"
    "attributeChange(QString)\0"
    "attributeAboutToAdd(QString)\0"
    "attributeAdd()\0attributeAboutToRemove(QString)\0"
    "attributeRemove()\0oldKey,newKey\0"
    "attributeAboutToRename(QString,QString)\0"
    "attributeRename(QString,QString)\0"
    "aboutToReset()\0reset()\0"
};

void EntryAttributesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EntryAttributesModel *_t = static_cast<EntryAttributesModel *>(_o);
        switch (_id) {
        case 0: _t->attributeChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->attributeAboutToAdd((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->attributeAdd(); break;
        case 3: _t->attributeAboutToRemove((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->attributeRemove(); break;
        case 5: _t->attributeAboutToRename((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->attributeRename((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->aboutToReset(); break;
        case 8: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EntryAttributesModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EntryAttributesModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_EntryAttributesModel,
      qt_meta_data_EntryAttributesModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EntryAttributesModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EntryAttributesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EntryAttributesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EntryAttributesModel))
        return static_cast<void*>(const_cast< EntryAttributesModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int EntryAttributesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
