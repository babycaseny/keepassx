/****************************************************************************
** Meta object code from reading C++ file 'TestAutoType.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tests/TestAutoType.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestAutoType.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestAutoType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      29,   13,   13,   13, 0x08,
      36,   13,   13,   13, 0x08,
      46,   13,   13,   13, 0x08,
      61,   13,   13,   13, 0x08,
      91,   13,   13,   13, 0x08,
     118,   13,   13,   13, 0x08,
     150,   13,   13,   13, 0x08,
     183,   13,   13,   13, 0x08,
     214,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestAutoType[] = {
    "TestAutoType\0\0initTestCase()\0init()\0"
    "cleanup()\0testInternal()\0"
    "testAutoTypeWithoutSequence()\0"
    "testAutoTypeWithSequence()\0"
    "testGlobalAutoTypeWithNoMatch()\0"
    "testGlobalAutoTypeWithOneMatch()\0"
    "testGlobalAutoTypeTitleMatch()\0"
    "testGlobalAutoTypeTitleMatchDisabled()\0"
};

void TestAutoType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TestAutoType *_t = static_cast<TestAutoType *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->init(); break;
        case 2: _t->cleanup(); break;
        case 3: _t->testInternal(); break;
        case 4: _t->testAutoTypeWithoutSequence(); break;
        case 5: _t->testAutoTypeWithSequence(); break;
        case 6: _t->testGlobalAutoTypeWithNoMatch(); break;
        case 7: _t->testGlobalAutoTypeWithOneMatch(); break;
        case 8: _t->testGlobalAutoTypeTitleMatch(); break;
        case 9: _t->testGlobalAutoTypeTitleMatchDisabled(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TestAutoType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TestAutoType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestAutoType,
      qt_meta_data_TestAutoType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestAutoType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestAutoType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestAutoType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestAutoType))
        return static_cast<void*>(const_cast< TestAutoType*>(this));
    return QObject::qt_metacast(_clname);
}

int TestAutoType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
