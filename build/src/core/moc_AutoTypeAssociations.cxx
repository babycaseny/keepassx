/****************************************************************************
** Meta object code from reading C++ file 'AutoTypeAssociations.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/AutoTypeAssociations.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoTypeAssociations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AutoTypeAssociations[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   32,   32,   32, 0x05,
      33,   50,   32,   32, 0x05,
      56,   50,   32,   32, 0x05,
      72,   50,   32,   32, 0x05,
      83,   50,   32,   32, 0x05,
     102,   50,   32,   32, 0x05,
     115,   32,   32,   32, 0x05,
     130,   32,   32,   32, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_AutoTypeAssociations[] = {
    "AutoTypeAssociations\0modified()\0\0"
    "dataChanged(int)\0index\0aboutToAdd(int)\0"
    "added(int)\0aboutToRemove(int)\0"
    "removed(int)\0aboutToReset()\0reset()\0"
};

void AutoTypeAssociations::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AutoTypeAssociations *_t = static_cast<AutoTypeAssociations *>(_o);
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->dataChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->aboutToAdd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->added((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->aboutToRemove((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->removed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->aboutToReset(); break;
        case 7: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AutoTypeAssociations::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AutoTypeAssociations::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AutoTypeAssociations,
      qt_meta_data_AutoTypeAssociations, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AutoTypeAssociations::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AutoTypeAssociations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AutoTypeAssociations::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AutoTypeAssociations))
        return static_cast<void*>(const_cast< AutoTypeAssociations*>(this));
    return QObject::qt_metacast(_clname);
}

int AutoTypeAssociations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void AutoTypeAssociations::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AutoTypeAssociations::dataChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AutoTypeAssociations::aboutToAdd(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AutoTypeAssociations::added(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AutoTypeAssociations::aboutToRemove(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AutoTypeAssociations::removed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AutoTypeAssociations::aboutToReset()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void AutoTypeAssociations::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
