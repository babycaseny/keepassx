/****************************************************************************
** Meta object code from reading C++ file 'TestKeys.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tests/TestKeys.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestKeys.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestKeys[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,   24,   24,   24, 0x08,
      25,   24,   24,   24, 0x08,
      41,   24,   24,   24, 0x08,
      55,   24,   24,   24, 0x08,
      74,   24,   24,   24, 0x08,
      94,   24,   24,   24, 0x08,
     113,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestKeys[] = {
    "TestKeys\0initTestCase()\0\0testComposite()\0"
    "testFileKey()\0testFileKey_data()\0"
    "testCreateFileKey()\0testFileKeyError()\0"
    "benchmarkTransformKey()\0"
};

void TestKeys::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TestKeys *_t = static_cast<TestKeys *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testComposite(); break;
        case 2: _t->testFileKey(); break;
        case 3: _t->testFileKey_data(); break;
        case 4: _t->testCreateFileKey(); break;
        case 5: _t->testFileKeyError(); break;
        case 6: _t->benchmarkTransformKey(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TestKeys::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TestKeys::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestKeys,
      qt_meta_data_TestKeys, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestKeys::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestKeys::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestKeys::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestKeys))
        return static_cast<void*>(const_cast< TestKeys*>(this));
    return QObject::qt_metacast(_clname);
}

int TestKeys::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
