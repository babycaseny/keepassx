/****************************************************************************
** Meta object code from reading C++ file 'Group.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/Group.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Group.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Group[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    7,    6,    6, 0x05,
      45,   33,    6,    6, 0x05,
      68,    6,    6,    6, 0x05,
      76,    7,    6,    6, 0x05,
      98,    6,    6,    6, 0x05,
     128,  108,    6,    6, 0x05,
     159,    6,    6,    6, 0x05,
     173,  167,    6,    6, 0x05,
     197,  167,    6,    6, 0x05,
     216,  167,    6,    6, 0x05,
     243,  167,    6,    6, 0x05,
     264,  167,    6,    6, 0x05,
     289,    6,    6,    6, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Group[] = {
    "Group\0\0group\0dataChanged(Group*)\0"
    "group,index\0aboutToAdd(Group*,int)\0"
    "added()\0aboutToRemove(Group*)\0removed()\0"
    "group,toGroup,index\0aboutToMove(Group*,Group*,int)\0"
    "moved()\0entry\0entryAboutToAdd(Entry*)\0"
    "entryAdded(Entry*)\0entryAboutToRemove(Entry*)\0"
    "entryRemoved(Entry*)\0entryDataChanged(Entry*)\0"
    "modified()\0"
};

void Group::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Group *_t = static_cast<Group *>(_o);
        switch (_id) {
        case 0: _t->dataChanged((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 1: _t->aboutToAdd((*reinterpret_cast< Group*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->added(); break;
        case 3: _t->aboutToRemove((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 4: _t->removed(); break;
        case 5: _t->aboutToMove((*reinterpret_cast< Group*(*)>(_a[1])),(*reinterpret_cast< Group*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->moved(); break;
        case 7: _t->entryAboutToAdd((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 8: _t->entryAdded((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 9: _t->entryAboutToRemove((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 10: _t->entryRemoved((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 11: _t->entryDataChanged((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 12: _t->modified(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Group::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Group::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Group,
      qt_meta_data_Group, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Group::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Group::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Group::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Group))
        return static_cast<void*>(const_cast< Group*>(this));
    return QObject::qt_metacast(_clname);
}

int Group::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Group::dataChanged(Group * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Group::aboutToAdd(Group * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Group::added()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Group::aboutToRemove(Group * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Group::removed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Group::aboutToMove(Group * _t1, Group * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Group::moved()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void Group::entryAboutToAdd(Entry * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Group::entryAdded(Entry * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Group::entryAboutToRemove(Entry * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Group::entryRemoved(Entry * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Group::entryDataChanged(Entry * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Group::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}
QT_END_MOC_NAMESPACE
