/****************************************************************************
** Meta object code from reading C++ file 'TestEntryModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tests/TestEntryModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestEntryModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestEntryModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   30,   30,   30, 0x08,
      31,   30,   30,   30, 0x08,
      38,   30,   30,   30, 0x08,
      61,   30,   30,   30, 0x08,
      83,   30,   30,   30, 0x08,
     106,   30,   30,   30, 0x08,
     128,   30,   30,   30, 0x08,
     160,   30,   30,   30, 0x08,
     177,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestEntryModel[] = {
    "TestEntryModel\0initTestCase()\0\0test()\0"
    "testAttachmentsModel()\0testAttributesModel()\0"
    "testDefaultIconModel()\0testCustomIconModel()\0"
    "testAutoTypeAssociationsModel()\0"
    "testProxyModel()\0testDatabaseDelete()\0"
};

void TestEntryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TestEntryModel *_t = static_cast<TestEntryModel *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->test(); break;
        case 2: _t->testAttachmentsModel(); break;
        case 3: _t->testAttributesModel(); break;
        case 4: _t->testDefaultIconModel(); break;
        case 5: _t->testCustomIconModel(); break;
        case 6: _t->testAutoTypeAssociationsModel(); break;
        case 7: _t->testProxyModel(); break;
        case 8: _t->testDatabaseDelete(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TestEntryModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TestEntryModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestEntryModel,
      qt_meta_data_TestEntryModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestEntryModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestEntryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestEntryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestEntryModel))
        return static_cast<void*>(const_cast< TestEntryModel*>(this));
    return QObject::qt_metacast(_clname);
}

int TestEntryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
