/****************************************************************************
** Meta object code from reading C++ file 'TestKeePass2Writer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tests/TestKeePass2Writer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestKeePass2Writer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestKeePass2Writer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      35,   19,   19,   19, 0x08,
      47,   19,   19,   19, 0x08,
      73,   19,   19,   19, 0x08,
      91,   19,   19,   19, 0x08,
     115,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestKeePass2Writer[] = {
    "TestKeePass2Writer\0\0initTestCase()\0"
    "testBasic()\0testProtectedAttributes()\0"
    "testAttachments()\0testNonAsciiPasswords()\0"
    "cleanupTestCase()\0"
};

void TestKeePass2Writer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TestKeePass2Writer *_t = static_cast<TestKeePass2Writer *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testBasic(); break;
        case 2: _t->testProtectedAttributes(); break;
        case 3: _t->testAttachments(); break;
        case 4: _t->testNonAsciiPasswords(); break;
        case 5: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TestKeePass2Writer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TestKeePass2Writer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestKeePass2Writer,
      qt_meta_data_TestKeePass2Writer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestKeePass2Writer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestKeePass2Writer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestKeePass2Writer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestKeePass2Writer))
        return static_cast<void*>(const_cast< TestKeePass2Writer*>(this));
    return QObject::qt_metacast(_clname);
}

int TestKeePass2Writer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
