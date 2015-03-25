/****************************************************************************
** Meta object code from reading C++ file 'EntryAttributes.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/EntryAttributes.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntryAttributes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EntryAttributes[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      28,   16,   16,   16, 0x05,
      53,   49,   16,   16, 0x05,
      80,   49,   16,   16, 0x05,
     104,   49,   16,   16, 0x05,
     119,   49,   16,   16, 0x05,
     145,   49,   16,   16, 0x05,
     176,  162,   16,   16, 0x05,
     207,  162,   16,   16, 0x05,
     232,   16,   16,   16, 0x05,
     249,   16,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_EntryAttributes[] = {
    "EntryAttributes\0\0modified()\0"
    "defaultKeyModified()\0key\0"
    "customKeyModified(QString)\0"
    "aboutToBeAdded(QString)\0added(QString)\0"
    "aboutToBeRemoved(QString)\0removed(QString)\0"
    "oldKey,newKey\0aboutToRename(QString,QString)\0"
    "renamed(QString,QString)\0aboutToBeReset()\0"
    "reset()\0"
};

void EntryAttributes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EntryAttributes *_t = static_cast<EntryAttributes *>(_o);
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->defaultKeyModified(); break;
        case 2: _t->customKeyModified((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->aboutToBeAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->added((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->aboutToBeRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->removed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->aboutToRename((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->renamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->aboutToBeReset(); break;
        case 10: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EntryAttributes::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EntryAttributes::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EntryAttributes,
      qt_meta_data_EntryAttributes, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EntryAttributes::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EntryAttributes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EntryAttributes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EntryAttributes))
        return static_cast<void*>(const_cast< EntryAttributes*>(this));
    return QObject::qt_metacast(_clname);
}

int EntryAttributes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EntryAttributes::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void EntryAttributes::defaultKeyModified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void EntryAttributes::customKeyModified(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EntryAttributes::aboutToBeAdded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void EntryAttributes::added(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void EntryAttributes::aboutToBeRemoved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void EntryAttributes::removed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void EntryAttributes::aboutToRename(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void EntryAttributes::renamed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void EntryAttributes::aboutToBeReset()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void EntryAttributes::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}
QT_END_MOC_NAMESPACE
