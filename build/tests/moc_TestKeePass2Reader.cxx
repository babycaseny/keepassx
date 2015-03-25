/****************************************************************************
** Meta object code from reading C++ file 'TestKeePass2Reader.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tests/TestKeePass2Reader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestKeePass2Reader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestKeePass2Reader[] = {

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
      20,   19,   19,   19, 0x08,
      35,   19,   19,   19, 0x08,
      50,   19,   19,   19, 0x08,
      67,   19,   19,   19, 0x08,
      90,   19,   19,   19, 0x08,
     113,   19,   19,   19, 0x08,
     129,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestKeePass2Reader[] = {
    "TestKeePass2Reader\0\0initTestCase()\0"
    "testNonAscii()\0testCompressed()\0"
    "testProtectedStrings()\0testBrokenHeaderHash()\0"
    "testFormat200()\0testFormat300()\0"
};

void TestKeePass2Reader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TestKeePass2Reader *_t = static_cast<TestKeePass2Reader *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testNonAscii(); break;
        case 2: _t->testCompressed(); break;
        case 3: _t->testProtectedStrings(); break;
        case 4: _t->testBrokenHeaderHash(); break;
        case 5: _t->testFormat200(); break;
        case 6: _t->testFormat300(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TestKeePass2Reader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TestKeePass2Reader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestKeePass2Reader,
      qt_meta_data_TestKeePass2Reader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestKeePass2Reader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestKeePass2Reader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestKeePass2Reader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestKeePass2Reader))
        return static_cast<void*>(const_cast< TestKeePass2Reader*>(this));
    return QObject::qt_metacast(_clname);
}

int TestKeePass2Reader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
