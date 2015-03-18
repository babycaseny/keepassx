/****************************************************************************
** Meta object code from reading C++ file 'TestKeePass1Reader.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tests/TestKeePass1Reader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestKeePass1Reader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestKeePass1Reader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   34,   34,   34, 0x08,
      35,   34,   34,   34, 0x08,
      47,   34,   34,   34, 0x08,
      63,   34,   34,   34, 0x08,
      81,   34,   34,   34, 0x08,
     101,   34,   34,   34, 0x08,
     116,   34,   34,   34, 0x08,
     130,   34,   34,   34, 0x08,
     149,   34,   34,   34, 0x08,
     168,   34,   34,   34, 0x08,
     182,   34,   34,   34, 0x08,
     203,   34,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestKeePass1Reader[] = {
    "TestKeePass1Reader\0initTestCase()\0\0"
    "testBasic()\0testMasterKey()\0"
    "testCustomIcons()\0testGroupExpanded()\0"
    "testAutoType()\0testFileKey()\0"
    "testFileKey_data()\0testCompositeKey()\0"
    "testTwofish()\0testCP1252Password()\0"
    "cleanupTestCase()\0"
};

void TestKeePass1Reader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TestKeePass1Reader *_t = static_cast<TestKeePass1Reader *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testBasic(); break;
        case 2: _t->testMasterKey(); break;
        case 3: _t->testCustomIcons(); break;
        case 4: _t->testGroupExpanded(); break;
        case 5: _t->testAutoType(); break;
        case 6: _t->testFileKey(); break;
        case 7: _t->testFileKey_data(); break;
        case 8: _t->testCompositeKey(); break;
        case 9: _t->testTwofish(); break;
        case 10: _t->testCP1252Password(); break;
        case 11: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TestKeePass1Reader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TestKeePass1Reader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestKeePass1Reader,
      qt_meta_data_TestKeePass1Reader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestKeePass1Reader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestKeePass1Reader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestKeePass1Reader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestKeePass1Reader))
        return static_cast<void*>(const_cast< TestKeePass1Reader*>(this));
    return QObject::qt_metacast(_clname);
}

int TestKeePass1Reader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
