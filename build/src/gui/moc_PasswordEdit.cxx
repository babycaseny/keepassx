/****************************************************************************
** Meta object code from reading C++ file 'PasswordEdit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/PasswordEdit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PasswordEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PasswordEdit[] = {

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
      19,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   14,   13,   13, 0x0a,
      67,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PasswordEdit[] = {
    "PasswordEdit\0\0show\0showPasswordChanged(bool)\0"
    "setShowPassword(bool)\0updateStylesheet()\0"
};

void PasswordEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PasswordEdit *_t = static_cast<PasswordEdit *>(_o);
        switch (_id) {
        case 0: _t->showPasswordChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setShowPassword((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateStylesheet(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PasswordEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PasswordEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_PasswordEdit,
      qt_meta_data_PasswordEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PasswordEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PasswordEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PasswordEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PasswordEdit))
        return static_cast<void*>(const_cast< PasswordEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int PasswordEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
void PasswordEdit::showPasswordChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
