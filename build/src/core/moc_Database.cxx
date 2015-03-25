/****************************************************************************
** Meta object code from reading C++ file 'Database.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/Database.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Database.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Database[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   10,    9,    9, 0x05,
      53,   41,    9,    9, 0x05,
      81,    9,    9,    9, 0x05,
      94,   10,    9,    9, 0x05,
     121,    9,    9,    9, 0x05,
     156,  136,    9,    9, 0x05,
     192,    9,    9,    9, 0x05,
     205,    9,    9,    9, 0x05,
     223,    9,    9,    9, 0x05,
     234,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     254,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Database[] = {
    "Database\0\0group\0groupDataChanged(Group*)\0"
    "group,index\0groupAboutToAdd(Group*,int)\0"
    "groupAdded()\0groupAboutToRemove(Group*)\0"
    "groupRemoved()\0group,toGroup,index\0"
    "groupAboutToMove(Group*,Group*,int)\0"
    "groupMoved()\0nameTextChanged()\0"
    "modified()\0modifiedImmediate()\0"
    "startModifiedTimer()\0"
};

void Database::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Database *_t = static_cast<Database *>(_o);
        switch (_id) {
        case 0: _t->groupDataChanged((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 1: _t->groupAboutToAdd((*reinterpret_cast< Group*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->groupAdded(); break;
        case 3: _t->groupAboutToRemove((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 4: _t->groupRemoved(); break;
        case 5: _t->groupAboutToMove((*reinterpret_cast< Group*(*)>(_a[1])),(*reinterpret_cast< Group*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->groupMoved(); break;
        case 7: _t->nameTextChanged(); break;
        case 8: _t->modified(); break;
        case 9: _t->modifiedImmediate(); break;
        case 10: _t->startModifiedTimer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Database::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Database::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Database,
      qt_meta_data_Database, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Database::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Database::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Database::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Database))
        return static_cast<void*>(const_cast< Database*>(this));
    return QObject::qt_metacast(_clname);
}

int Database::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Database::groupDataChanged(Group * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Database::groupAboutToAdd(Group * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Database::groupAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Database::groupAboutToRemove(Group * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Database::groupRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Database::groupAboutToMove(Group * _t1, Group * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Database::groupMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void Database::nameTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void Database::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void Database::modifiedImmediate()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
