/****************************************************************************
** Meta object code from reading C++ file 'TestRandom.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tests/TestRandom.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestRandom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestRandom[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   26,   26,   26, 0x08,
      27,   26,   26,   26, 0x08,
      38,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestRandom[] = {
    "TestRandom\0initTestCase()\0\0testUInt()\0"
    "testUIntRange()\0"
};

void TestRandom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TestRandom *_t = static_cast<TestRandom *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testUInt(); break;
        case 2: _t->testUIntRange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TestRandom::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TestRandom::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestRandom,
      qt_meta_data_TestRandom, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestRandom::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestRandom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestRandom::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestRandom))
        return static_cast<void*>(const_cast< TestRandom*>(this));
    return QObject::qt_metacast(_clname);
}

int TestRandom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
