/****************************************************************************
** Meta object code from reading C++ file 'AutoTypeTest.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/autotype/test/AutoTypeTest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoTypeTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AutoTypePlatformTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_AutoTypePlatformTest[] = {
    "AutoTypePlatformTest\0\0globalShortcutTriggered()\0"
};

void AutoTypePlatformTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AutoTypePlatformTest *_t = static_cast<AutoTypePlatformTest *>(_o);
        switch (_id) {
        case 0: _t->globalShortcutTriggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AutoTypePlatformTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AutoTypePlatformTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AutoTypePlatformTest,
      qt_meta_data_AutoTypePlatformTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AutoTypePlatformTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AutoTypePlatformTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AutoTypePlatformTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AutoTypePlatformTest))
        return static_cast<void*>(const_cast< AutoTypePlatformTest*>(this));
    if (!strcmp(_clname, "AutoTypePlatformInterface"))
        return static_cast< AutoTypePlatformInterface*>(const_cast< AutoTypePlatformTest*>(this));
    if (!strcmp(_clname, "AutoTypeTestInterface"))
        return static_cast< AutoTypeTestInterface*>(const_cast< AutoTypePlatformTest*>(this));
    if (!strcmp(_clname, "org.keepassx.AutoTypePlatformInterface/1"))
        return static_cast< AutoTypePlatformInterface*>(const_cast< AutoTypePlatformTest*>(this));
    if (!strcmp(_clname, "org.keepassx.AutoTypeTestInterface/1"))
        return static_cast< AutoTypeTestInterface*>(const_cast< AutoTypePlatformTest*>(this));
    return QObject::qt_metacast(_clname);
}

int AutoTypePlatformTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void AutoTypePlatformTest::globalShortcutTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
