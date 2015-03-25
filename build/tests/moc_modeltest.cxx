/****************************************************************************
** Meta object code from reading C++ file 'modeltest.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tests/modeltest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modeltest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModelTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      37,   10,   10,   10, 0x08,
      48,   10,   10,   10, 0x08,
      62,   10,   10,   10, 0x08,
      73,   10,   10,   10, 0x08,
      81,   10,   10,   10, 0x08,
      90,   10,   10,   10, 0x08,
      97,   10,   10,   10, 0x09,
     111,   10,   10,   10, 0x09,
     136,   10,   10,   10, 0x09,
     169,  152,   10,   10, 0x09,
     212,  152,   10,   10, 0x09,
     246,  152,   10,   10, 0x09,
     288,  152,   10,   10, 0x09,
     367,  321,   10,   10, 0x09,
     423,  321,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ModelTest[] = {
    "ModelTest\0\0nonDestructiveBasicTest()\0"
    "rowCount()\0columnCount()\0hasIndex()\0"
    "index()\0parent()\0data()\0runAllTests()\0"
    "layoutAboutToBeChanged()\0layoutChanged()\0"
    "parent,start,end\0"
    "rowsAboutToBeInserted(QModelIndex,int,int)\0"
    "rowsInserted(QModelIndex,int,int)\0"
    "rowsAboutToBeRemoved(QModelIndex,int,int)\0"
    "rowsRemoved(QModelIndex,int,int)\0"
    "srcParent,start,end,destParent,destinationRow\0"
    "rowsAboutToBeMoved(QModelIndex,int,int,QModelIndex,int)\0"
    "rowsMoved(QModelIndex,int,int,QModelIndex,int)\0"
};

void ModelTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModelTest *_t = static_cast<ModelTest *>(_o);
        switch (_id) {
        case 0: _t->nonDestructiveBasicTest(); break;
        case 1: _t->rowCount(); break;
        case 2: _t->columnCount(); break;
        case 3: _t->hasIndex(); break;
        case 4: _t->index(); break;
        case 5: _t->parent(); break;
        case 6: _t->data(); break;
        case 7: _t->runAllTests(); break;
        case 8: _t->layoutAboutToBeChanged(); break;
        case 9: _t->layoutChanged(); break;
        case 10: _t->rowsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->rowsAboutToBeMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 15: _t->rowsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ModelTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModelTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModelTest,
      qt_meta_data_ModelTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModelTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModelTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModelTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModelTest))
        return static_cast<void*>(const_cast< ModelTest*>(this));
    return QObject::qt_metacast(_clname);
}

int ModelTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
