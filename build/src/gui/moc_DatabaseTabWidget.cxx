/****************************************************************************
** Meta object code from reading C++ file 'DatabaseTabWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/DatabaseTabWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseTabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DatabaseTabWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,
      45,   36,   18,   18, 0x05,
      86,   77,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     127,   18,   18,   18, 0x0a,
     141,   18,   18,   18, 0x0a,
     156,   18,   18,   18, 0x0a,
     187,  181,   18,   18, 0x0a,
     205,   18,   18,   18, 0x2a,
     220,  181,   18,   18, 0x0a,
     240,   18,   18,   18, 0x2a,
     262,  181,  257,   18, 0x0a,
     281,   18,  257,   18, 0x2a,
     297,   18,   18,   18, 0x0a,
     323,   18,  257,   18, 0x0a,
     343,   18,   18,   18, 0x0a,
     361,   18,   18,   18, 0x0a,
     386,  181,  257,   18, 0x0a,
     400,   18,  257,   18, 0x2a,
     411,   18,   18,   18, 0x0a,
     435,   18,   18,   18, 0x0a,
     454,  451,   18,   18, 0x08,
     479,   18,   18,   18, 0x08,
     507,   18,   18,   18, 0x08,
     541,   18,   18,   18, 0x08,
     552,   18,   18,   18, 0x08,
     573,  567,   18,   18, 0x08,
     599,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DatabaseTabWidget[] = {
    "DatabaseTabWidget\0\0tabNameChanged()\0"
    "filePath\0databaseWithFileClosed(QString)\0"
    "dbWidget\0activateDatabaseChanged(DatabaseWidget*)\0"
    "newDatabase()\0openDatabase()\0"
    "importKeePass1Database()\0index\0"
    "saveDatabase(int)\0saveDatabase()\0"
    "saveDatabaseAs(int)\0saveDatabaseAs()\0"
    "bool\0closeDatabase(int)\0closeDatabase()\0"
    "closeDatabaseFromSender()\0closeAllDatabases()\0"
    "changeMasterKey()\0changeDatabaseSettings()\0"
    "readOnly(int)\0readOnly()\0"
    "performGlobalAutoType()\0lockDatabases()\0"
    "db\0updateTabName(Database*)\0"
    "updateTabNameFromDbSender()\0"
    "updateTabNameFromDbWidgetSender()\0"
    "modified()\0toggleTabbar()\0newDb\0"
    "changeDatabase(Database*)\0"
    "emitActivateDatabaseChanged()\0"
};

void DatabaseTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DatabaseTabWidget *_t = static_cast<DatabaseTabWidget *>(_o);
        switch (_id) {
        case 0: _t->tabNameChanged(); break;
        case 1: _t->databaseWithFileClosed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->activateDatabaseChanged((*reinterpret_cast< DatabaseWidget*(*)>(_a[1]))); break;
        case 3: _t->newDatabase(); break;
        case 4: _t->openDatabase(); break;
        case 5: _t->importKeePass1Database(); break;
        case 6: _t->saveDatabase((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->saveDatabase(); break;
        case 8: _t->saveDatabaseAs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->saveDatabaseAs(); break;
        case 10: { bool _r = _t->closeDatabase((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->closeDatabase();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->closeDatabaseFromSender(); break;
        case 13: { bool _r = _t->closeAllDatabases();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->changeMasterKey(); break;
        case 15: _t->changeDatabaseSettings(); break;
        case 16: { bool _r = _t->readOnly((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->readOnly();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->performGlobalAutoType(); break;
        case 19: _t->lockDatabases(); break;
        case 20: _t->updateTabName((*reinterpret_cast< Database*(*)>(_a[1]))); break;
        case 21: _t->updateTabNameFromDbSender(); break;
        case 22: _t->updateTabNameFromDbWidgetSender(); break;
        case 23: _t->modified(); break;
        case 24: _t->toggleTabbar(); break;
        case 25: _t->changeDatabase((*reinterpret_cast< Database*(*)>(_a[1]))); break;
        case 26: _t->emitActivateDatabaseChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DatabaseTabWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DatabaseTabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_DatabaseTabWidget,
      qt_meta_data_DatabaseTabWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DatabaseTabWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DatabaseTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DatabaseTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseTabWidget))
        return static_cast<void*>(const_cast< DatabaseTabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int DatabaseTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void DatabaseTabWidget::tabNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DatabaseTabWidget::databaseWithFileClosed(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DatabaseTabWidget::activateDatabaseChanged(DatabaseWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
