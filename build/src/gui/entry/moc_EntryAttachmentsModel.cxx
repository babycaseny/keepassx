/****************************************************************************
** Meta object code from reading C++ file 'EntryAttachmentsModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/entry/EntryAttachmentsModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntryAttachmentsModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EntryAttachmentsModel[] = {

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
      27,   23,   22,   22, 0x08,
      53,   23,   22,   22, 0x08,
      83,   22,   22,   22, 0x08,
      99,   23,   22,   22, 0x08,
     132,   22,   22,   22, 0x08,
     151,   22,   22,   22, 0x08,
     166,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EntryAttachmentsModel[] = {
    "EntryAttachmentsModel\0\0key\0"
    "attachmentChange(QString)\0"
    "attachmentAboutToAdd(QString)\0"
    "attachmentAdd()\0attachmentAboutToRemove(QString)\0"
    "attachmentRemove()\0aboutToReset()\0"
    "reset()\0"
};

void EntryAttachmentsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EntryAttachmentsModel *_t = static_cast<EntryAttachmentsModel *>(_o);
        switch (_id) {
        case 0: _t->attachmentChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->attachmentAboutToAdd((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->attachmentAdd(); break;
        case 3: _t->attachmentAboutToRemove((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->attachmentRemove(); break;
        case 5: _t->aboutToReset(); break;
        case 6: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EntryAttachmentsModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EntryAttachmentsModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_EntryAttachmentsModel,
      qt_meta_data_EntryAttachmentsModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EntryAttachmentsModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EntryAttachmentsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EntryAttachmentsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EntryAttachmentsModel))
        return static_cast<void*>(const_cast< EntryAttachmentsModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int EntryAttachmentsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
