/****************************************************************************
** Meta object code from reading C++ file 'TestKeePass2XmlReader.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tests/TestKeePass2XmlReader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestKeePass2XmlReader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestKeePass2XmlReader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      38,   22,   22,   22, 0x08,
      53,   22,   22,   22, 0x08,
      71,   22,   22,   22, 0x08,
      88,   22,   22,   22, 0x08,
     104,   22,   22,   22, 0x08,
     117,   22,   22,   22, 0x08,
     130,   22,   22,   22, 0x08,
     143,   22,   22,   22, 0x08,
     156,   22,   22,   22, 0x08,
     175,   22,   22,   22, 0x08,
     196,   22,   22,   22, 0x08,
     209,   22,   22,   22, 0x08,
     227,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestKeePass2XmlReader[] = {
    "TestKeePass2XmlReader\0\0initTestCase()\0"
    "testMetadata()\0testCustomIcons()\0"
    "testCustomData()\0testGroupRoot()\0"
    "testGroup1()\0testGroup2()\0testEntry1()\0"
    "testEntry2()\0testEntryHistory()\0"
    "testDeletedObjects()\0testBroken()\0"
    "testBroken_data()\0cleanupTestCase()\0"
};

void TestKeePass2XmlReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TestKeePass2XmlReader *_t = static_cast<TestKeePass2XmlReader *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testMetadata(); break;
        case 2: _t->testCustomIcons(); break;
        case 3: _t->testCustomData(); break;
        case 4: _t->testGroupRoot(); break;
        case 5: _t->testGroup1(); break;
        case 6: _t->testGroup2(); break;
        case 7: _t->testEntry1(); break;
        case 8: _t->testEntry2(); break;
        case 9: _t->testEntryHistory(); break;
        case 10: _t->testDeletedObjects(); break;
        case 11: _t->testBroken(); break;
        case 12: _t->testBroken_data(); break;
        case 13: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TestKeePass2XmlReader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TestKeePass2XmlReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestKeePass2XmlReader,
      qt_meta_data_TestKeePass2XmlReader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestKeePass2XmlReader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestKeePass2XmlReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestKeePass2XmlReader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestKeePass2XmlReader))
        return static_cast<void*>(const_cast< TestKeePass2XmlReader*>(this));
    return QObject::qt_metacast(_clname);
}

int TestKeePass2XmlReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
