/****************************************************************************
** Meta object code from reading C++ file 'EntryView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/entry/EntryView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntryView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EntryView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   57,   70,   70, 0x05,
      71,   70,   70,   70, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,  112,   70,   70, 0x0a,
     118,  150,   70,   70, 0x08,
     156,   70,   70,   70, 0x08,
     180,   70,   70,   70, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EntryView[] = {
    "EntryView\0entryActivated(Entry*,EntryModel::ModelColumn)\0"
    "entry,column\0\0entrySelectionChanged()\0"
    "setGroup(Group*)\0group\0"
    "emitEntryActivated(QModelIndex)\0index\0"
    "switchToEntryListMode()\0switchToGroupMode()\0"
};

void EntryView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EntryView *_t = static_cast<EntryView *>(_o);
        switch (_id) {
        case 0: _t->entryActivated((*reinterpret_cast< Entry*(*)>(_a[1])),(*reinterpret_cast< EntryModel::ModelColumn(*)>(_a[2]))); break;
        case 1: _t->entrySelectionChanged(); break;
        case 2: _t->setGroup((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 3: _t->emitEntryActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->switchToEntryListMode(); break;
        case 5: _t->switchToGroupMode(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EntryView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EntryView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_EntryView,
      qt_meta_data_EntryView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EntryView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EntryView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EntryView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EntryView))
        return static_cast<void*>(const_cast< EntryView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int EntryView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void EntryView::entryActivated(Entry * _t1, EntryModel::ModelColumn _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EntryView::entrySelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
