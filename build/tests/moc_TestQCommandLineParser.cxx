/****************************************************************************
** Meta object code from reading C++ file 'TestQCommandLineParser.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tests/TestQCommandLineParser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestQCommandLineParser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestQCommandLineParser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   38,   38,   38, 0x0a,
      39,   38,   38,   38, 0x08,
      59,   38,   38,   38, 0x08,
      80,   38,   38,   38, 0x08,
     106,   38,   38,   38, 0x08,
     131,   38,   38,   38, 0x08,
     151,   38,   38,   38, 0x08,
     176,   38,   38,   38, 0x08,
     196,   38,   38,   38, 0x08,
     225,   38,   38,   38, 0x08,
     249,   38,   38,   38, 0x08,
     267,   38,   38,   38, 0x08,
     294,   38,   38,   38, 0x08,
     332,   38,   38,   38, 0x08,
     365,   38,   38,   38, 0x08,
     387,   38,   38,   38, 0x08,
     404,   38,   38,   38, 0x08,
     423,   38,   38,   38, 0x08,
     446,   38,   38,   38, 0x08,
     466,   38,   38,   38, 0x08,
     491,   38,   38,   38, 0x08,
     516,   38,   38,   38, 0x08,
     536,   38,   38,   38, 0x08,
     573,   38,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestQCommandLineParser[] = {
    "TestQCommandLineParser\0initTestCase()\0"
    "\0parsingModes_data()\0testInvalidOptions()\0"
    "testPositionalArguments()\0"
    "testBooleanOption_data()\0testBooleanOption()\0"
    "testMultipleNames_data()\0testMultipleNames()\0"
    "testSingleValueOption_data()\0"
    "testSingleValueOption()\0testValueNotSet()\0"
    "testMultipleValuesOption()\0"
    "testUnknownOptionErrorHandling_data()\0"
    "testUnknownOptionErrorHandling()\0"
    "testDoubleDash_data()\0testDoubleDash()\0"
    "testDefaultValue()\0testProcessNotCalled()\0"
    "testEmptyArgsList()\0testMissingOptionValue()\0"
    "testStdinArgument_data()\0testStdinArgument()\0"
    "testSingleDashWordOptionModes_data()\0"
    "testSingleDashWordOptionModes()\0"
};

void TestQCommandLineParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TestQCommandLineParser *_t = static_cast<TestQCommandLineParser *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->parsingModes_data(); break;
        case 2: _t->testInvalidOptions(); break;
        case 3: _t->testPositionalArguments(); break;
        case 4: _t->testBooleanOption_data(); break;
        case 5: _t->testBooleanOption(); break;
        case 6: _t->testMultipleNames_data(); break;
        case 7: _t->testMultipleNames(); break;
        case 8: _t->testSingleValueOption_data(); break;
        case 9: _t->testSingleValueOption(); break;
        case 10: _t->testValueNotSet(); break;
        case 11: _t->testMultipleValuesOption(); break;
        case 12: _t->testUnknownOptionErrorHandling_data(); break;
        case 13: _t->testUnknownOptionErrorHandling(); break;
        case 14: _t->testDoubleDash_data(); break;
        case 15: _t->testDoubleDash(); break;
        case 16: _t->testDefaultValue(); break;
        case 17: _t->testProcessNotCalled(); break;
        case 18: _t->testEmptyArgsList(); break;
        case 19: _t->testMissingOptionValue(); break;
        case 20: _t->testStdinArgument_data(); break;
        case 21: _t->testStdinArgument(); break;
        case 22: _t->testSingleDashWordOptionModes_data(); break;
        case 23: _t->testSingleDashWordOptionModes(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TestQCommandLineParser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TestQCommandLineParser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestQCommandLineParser,
      qt_meta_data_TestQCommandLineParser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestQCommandLineParser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestQCommandLineParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestQCommandLineParser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestQCommandLineParser))
        return static_cast<void*>(const_cast< TestQCommandLineParser*>(this));
    return QObject::qt_metacast(_clname);
}

int TestQCommandLineParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
