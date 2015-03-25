/****************************************************************************
** Meta object code from reading C++ file 'GroupView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/group/GroupView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GroupView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GroupView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   38,   10,   10, 0x08,
      73,   38,   10,   10, 0x08,
     103,   10,   10,   10, 0x08,
     139,  122,   10,   10, 0x08,
     178,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GroupView[] = {
    "GroupView\0\0group\0groupChanged(Group*)\0"
    "index\0expandedChanged(QModelIndex)\0"
    "emitGroupChanged(QModelIndex)\0"
    "emitGroupChanged()\0parent,start,end\0"
    "syncExpandedState(QModelIndex,int,int)\0"
    "modelReset()\0"
};

void GroupView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GroupView *_t = static_cast<GroupView *>(_o);
        switch (_id) {
        case 0: _t->groupChanged((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 1: _t->expandedChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->emitGroupChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->emitGroupChanged(); break;
        case 4: _t->syncExpandedState((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->modelReset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GroupView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GroupView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_GroupView,
      qt_meta_data_GroupView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GroupView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GroupView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GroupView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GroupView))
        return static_cast<void*>(const_cast< GroupView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int GroupView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GroupView::groupChanged(Group * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
