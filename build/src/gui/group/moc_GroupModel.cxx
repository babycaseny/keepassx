/****************************************************************************
** Meta object code from reading C++ file 'GroupModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/group/GroupModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GroupModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GroupModel[] = {

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
      18,   12,   11,   11, 0x08,
      43,   12,   11,   11, 0x08,
      70,   11,   11,   11, 0x08,
      97,   85,   11,   11, 0x08,
     125,   11,   11,   11, 0x08,
     156,  138,   11,   11, 0x08,
     192,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GroupModel[] = {
    "GroupModel\0\0group\0groupDataChanged(Group*)\0"
    "groupAboutToRemove(Group*)\0groupRemoved()\0"
    "group,index\0groupAboutToAdd(Group*,int)\0"
    "groupAdded()\0group,toGroup,pos\0"
    "groupAboutToMove(Group*,Group*,int)\0"
    "groupMoved()\0"
};

void GroupModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GroupModel *_t = static_cast<GroupModel *>(_o);
        switch (_id) {
        case 0: _t->groupDataChanged((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 1: _t->groupAboutToRemove((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 2: _t->groupRemoved(); break;
        case 3: _t->groupAboutToAdd((*reinterpret_cast< Group*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->groupAdded(); break;
        case 5: _t->groupAboutToMove((*reinterpret_cast< Group*(*)>(_a[1])),(*reinterpret_cast< Group*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->groupMoved(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GroupModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GroupModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_GroupModel,
      qt_meta_data_GroupModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GroupModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GroupModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GroupModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GroupModel))
        return static_cast<void*>(const_cast< GroupModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int GroupModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
