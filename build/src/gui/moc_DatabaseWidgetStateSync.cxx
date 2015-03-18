/****************************************************************************
** Meta object code from reading C++ file 'DatabaseWidgetStateSync.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/DatabaseWidgetStateSync.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseWidgetStateSync.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DatabaseWidgetStateSync[] = {

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
      24,   51,   60,   60, 0x0a,
      61,   60,   60,   60, 0x0a,
      79,   60,   60,   60, 0x0a,
      99,   60,   60,   60, 0x08,
     114,   60,   60,   60, 0x08,
     136,   60,   60,   60, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DatabaseWidgetStateSync[] = {
    "DatabaseWidgetStateSync\0"
    "setActive(DatabaseWidget*)\0dbWidget\0"
    "\0restoreListView()\0restoreSearchView()\0"
    "blockUpdates()\0updateSplitterSizes()\0"
    "updateColumnSizes()\0"
};

void DatabaseWidgetStateSync::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DatabaseWidgetStateSync *_t = static_cast<DatabaseWidgetStateSync *>(_o);
        switch (_id) {
        case 0: _t->setActive((*reinterpret_cast< DatabaseWidget*(*)>(_a[1]))); break;
        case 1: _t->restoreListView(); break;
        case 2: _t->restoreSearchView(); break;
        case 3: _t->blockUpdates(); break;
        case 4: _t->updateSplitterSizes(); break;
        case 5: _t->updateColumnSizes(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DatabaseWidgetStateSync::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DatabaseWidgetStateSync::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DatabaseWidgetStateSync,
      qt_meta_data_DatabaseWidgetStateSync, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DatabaseWidgetStateSync::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DatabaseWidgetStateSync::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DatabaseWidgetStateSync::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseWidgetStateSync))
        return static_cast<void*>(const_cast< DatabaseWidgetStateSync*>(this));
    return QObject::qt_metacast(_clname);
}

int DatabaseWidgetStateSync::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
