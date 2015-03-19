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
      18,   35,   35,   35, 0x05,
      36,   68,   35,   35, 0x05,
      77,  118,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
     127,   35,   35,   35, 0x0a,
     141,   35,   35,   35, 0x0a,
     156,   35,   35,   35, 0x0a,
     181,  199,   35,   35, 0x0a,
     205,   35,   35,   35, 0x2a,
     220,  199,   35,   35, 0x0a,
     240,   35,   35,   35, 0x2a,
     257,  199,  276,   35, 0x0a,
     281,   35,  276,   35, 0x2a,
     297,   35,   35,   35, 0x0a,
     323,   35,  276,   35, 0x0a,
     343,   35,   35,   35, 0x0a,
     361,   35,   35,   35, 0x0a,
     386,  199,  276,   35, 0x0a,
     400,   35,  276,   35, 0x2a,
     411,   35,   35,   35, 0x0a,
     435,   35,   35,   35, 0x0a,
     451,  476,   35,   35, 0x08,
     479,   35,   35,   35, 0x08,
     507,   35,   35,   35, 0x08,
     541,   35,   35,   35, 0x08,
     552,   35,   35,   35, 0x08,
     567,  593,   35,   35, 0x08,
     599,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DatabaseTabWidget[] = {
    "DatabaseTabWidget\0tabNameChanged()\0\0"
    "databaseWithFileClosed(QString)\0"
    "filePath\0activateDatabaseChanged(DatabaseWidget*)\0"
    "dbWidget\0newDatabase()\0openDatabase()\0"
    "importKeePass1Database()\0saveDatabase(int)\0"
    "index\0saveDatabase()\0saveDatabaseAs(int)\0"
    "saveDatabaseAs()\0closeDatabase(int)\0"
    "bool\0closeDatabase()\0closeDatabaseFromSender()\0"
    "closeAllDatabases()\0changeMasterKey()\0"
    "changeDatabaseSettings()\0readOnly(int)\0"
    "readOnly()\0performGlobalAutoType()\0"
    "lockDatabases()\0updateTabName(Database*)\0"
    "db\0updateTabNameFromDbSender()\0"
    "updateTabNameFromDbWidgetSender()\0"
    "modified()\0toggleTabbar()\0"
    "changeDatabase(Database*)\0newDb\0"
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
