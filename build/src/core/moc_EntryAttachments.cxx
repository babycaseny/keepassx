/****************************************************************************
** Meta object code from reading C++ file 'EntryAttachments.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/core/EntryAttachments.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntryAttachments.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EntryAttachments[] = {

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
      18,   17,   17,   17, 0x05,
      33,   29,   17,   17, 0x05,
      54,   29,   17,   17, 0x05,
      78,   29,   17,   17, 0x05,
      93,   29,   17,   17, 0x05,
     119,   29,   17,   17, 0x05,
     136,   17,   17,   17, 0x05,
     153,   17,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_EntryAttachments[] = {
    "EntryAttachments\0\0modified()\0key\0"
    "keyModified(QString)\0aboutToBeAdded(QString)\0"
    "added(QString)\0aboutToBeRemoved(QString)\0"
    "removed(QString)\0aboutToBeReset()\0"
    "reset()\0"
};

void EntryAttachments::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EntryAttachments *_t = static_cast<EntryAttachments *>(_o);
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->keyModified((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->aboutToBeAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->added((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->aboutToBeRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->removed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->aboutToBeReset(); break;
        case 7: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EntryAttachments::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EntryAttachments::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EntryAttachments,
      qt_meta_data_EntryAttachments, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EntryAttachments::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EntryAttachments::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EntryAttachments::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EntryAttachments))
        return static_cast<void*>(const_cast< EntryAttachments*>(this));
    return QObject::qt_metacast(_clname);
}

int EntryAttachments::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EntryAttachments::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void EntryAttachments::keyModified(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EntryAttachments::aboutToBeAdded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EntryAttachments::added(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void EntryAttachments::aboutToBeRemoved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void EntryAttachments::removed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void EntryAttachments::aboutToBeReset()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void EntryAttachments::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
