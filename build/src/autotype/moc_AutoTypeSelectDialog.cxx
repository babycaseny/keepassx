/****************************************************************************
** Meta object code from reading C++ file 'AutoTypeSelectDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/autotype/AutoTypeSelectDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoTypeSelectDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AutoTypeSelectDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   52,   67,   67, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,  100,   67,   67, 0x08,
     106,   67,   67,   67, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AutoTypeSelectDialog[] = {
    "AutoTypeSelectDialog\0"
    "entryActivated(Entry*,QString)\0"
    "entry,sequence\0\0emitEntryActivated(QModelIndex)\0"
    "index\0entryRemoved()\0"
};

void AutoTypeSelectDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AutoTypeSelectDialog *_t = static_cast<AutoTypeSelectDialog *>(_o);
        switch (_id) {
        case 0: _t->entryActivated((*reinterpret_cast< Entry*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->emitEntryActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->entryRemoved(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AutoTypeSelectDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AutoTypeSelectDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AutoTypeSelectDialog,
      qt_meta_data_AutoTypeSelectDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AutoTypeSelectDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AutoTypeSelectDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AutoTypeSelectDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AutoTypeSelectDialog))
        return static_cast<void*>(const_cast< AutoTypeSelectDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AutoTypeSelectDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AutoTypeSelectDialog::entryActivated(Entry * _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
