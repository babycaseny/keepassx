/****************************************************************************
** Meta object code from reading C++ file 'EntryModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/entry/EntryModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntryModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EntryModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      38,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   60,   11,   11, 0x0a,
      89,   83,   11,   11, 0x08,
     113,   83,   11,   11, 0x08,
     132,   83,   11,   11, 0x08,
     159,   11,   11,   11, 0x08,
     174,   83,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EntryModel[] = {
    "EntryModel\0\0switchedToEntryListMode()\0"
    "switchedToGroupMode()\0group\0"
    "setGroup(Group*)\0entry\0entryAboutToAdd(Entry*)\0"
    "entryAdded(Entry*)\0entryAboutToRemove(Entry*)\0"
    "entryRemoved()\0entryDataChanged(Entry*)\0"
};

void EntryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EntryModel *_t = static_cast<EntryModel *>(_o);
        switch (_id) {
        case 0: _t->switchedToEntryListMode(); break;
        case 1: _t->switchedToGroupMode(); break;
        case 2: _t->setGroup((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 3: _t->entryAboutToAdd((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 4: _t->entryAdded((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 5: _t->entryAboutToRemove((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 6: _t->entryRemoved(); break;
        case 7: _t->entryDataChanged((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EntryModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EntryModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_EntryModel,
      qt_meta_data_EntryModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EntryModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EntryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EntryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EntryModel))
        return static_cast<void*>(const_cast< EntryModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int EntryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void EntryModel::switchedToEntryListMode()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void EntryModel::switchedToGroupMode()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
