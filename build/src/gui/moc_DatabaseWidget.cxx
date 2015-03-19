/****************************************************************************
** Meta object code from reading C++ file 'DatabaseWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/DatabaseWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DatabaseWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   30,   30,   30, 0x05,
      31,   72,   30,   30, 0x05,
      77,   30,   30,   30, 0x05,
      92,   30,   30,   30, 0x05,
     116,  143,   30,   30, 0x05,
     149,  183,   30,   30, 0x05,
     193,  183,   30,   30, 0x05,
     227,   30,   30,   30, 0x05,
     246,   30,   30,   30, 0x05,
     272,   30,   30,   30, 0x05,
     292,   30,   30,   30, 0x05,
     320,   30,   30,   30, 0x05,
     342,   30,   30,   30, 0x05,
     365,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
     391,   30,   30,   30, 0x0a,
     405,   30,   30,   30, 0x0a,
     418,   30,   30,   30, 0x0a,
     434,   30,   30,   30, 0x0a,
     446,   30,   30,   30, 0x0a,
     461,   30,   30,   30, 0x0a,
     476,   30,   30,   30, 0x0a,
     486,   30,   30,   30, 0x0a,
     498,  522,   30,   30, 0x0a,
     529,   30,   30,   30, 0x0a,
     547,   30,   30,   30, 0x0a,
     557,  581,   30,   30, 0x0a,
     587,   30,   30,   30, 0x0a,
     601,   30,   30,   30, 0x0a,
     615,   30,   30,   30, 0x0a,
     635,   30,   30,   30, 0x0a,
     655,   30,   30,   30, 0x0a,
     681,   30,   30,   30, 0x0a,
     708,  738,   30,   30, 0x0a,
     747,  793,   30,   30, 0x0a,
     819,  738,   30,   30, 0x0a,
     851,   30,   30,   30, 0x0a,
     864,  926,   30,   30, 0x08,
     939,   30,   30,   30, 0x08,
     963,  982,   30,   30, 0x08,
     991,  581,   30,   30, 0x08,
    1019,  581,   30,   30, 0x08,
    1045, 1076,   30,   30, 0x08,
    1089, 1076,   30,   30, 0x08,
    1120, 1158,   30,   30, 0x08,
    1162, 1158,   30,   30, 0x08,
    1200,  982,   30,   30, 0x08,
    1222,  982,   30,   30, 0x08,
    1241,  982,   30,   30, 0x08,
    1262,   30,   30,   30, 0x08,
    1287, 1310,   30,   30, 0x08,
    1316,   30,   30,   30, 0x08,
    1325,   30,   30,   30, 0x08,
    1339,   30,   30,   30, 0x08,
    1358,   30,   30,   30, 0x08,
    1371,   30,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DatabaseWidget[] = {
    "DatabaseWidget\0closeRequest()\0\0"
    "currentModeChanged(DatabaseWidget::Mode)\0"
    "mode\0groupChanged()\0entrySelectionChanged()\0"
    "databaseChanged(Database*)\0newDb\0"
    "groupContextMenuRequested(QPoint)\0"
    "globalPos\0entryContextMenuRequested(QPoint)\0"
    "unlockedDatabase()\0listModeAboutToActivate()\0"
    "listModeActivated()\0searchModeAboutToActivate()\0"
    "searchModeActivated()\0splitterSizesChanged()\0"
    "entryColumnSizesChanged()\0createEntry()\0"
    "cloneEntry()\0deleteEntries()\0copyTitle()\0"
    "copyUsername()\0copyPassword()\0copyURL()\0"
    "copyNotes()\0copyAttribute(QAction*)\0"
    "action\0performAutoType()\0openUrl()\0"
    "openUrlForEntry(Entry*)\0entry\0"
    "createGroup()\0deleteGroup()\0"
    "switchToEntryEdit()\0switchToGroupEdit()\0"
    "switchToMasterKeyChange()\0"
    "switchToDatabaseSettings()\0"
    "switchToOpenDatabase(QString)\0fileName\0"
    "switchToOpenDatabase(QString,QString,QString)\0"
    "fileName,password,keyFile\0"
    "switchToImportKeepass1(QString)\0"
    "openSearch()\0"
    "entryActivationSignalReceived(Entry*,EntryModel::ModelColumn)\0"
    "entry,column\0switchBackToEntryEdit()\0"
    "switchToView(bool)\0accepted\0"
    "switchToHistoryView(Entry*)\0"
    "switchToEntryEdit(Entry*)\0"
    "switchToEntryEdit(Entry*,bool)\0"
    "entry,create\0switchToGroupEdit(Group*,bool)\0"
    "emitGroupContextMenuRequested(QPoint)\0"
    "pos\0emitEntryContextMenuRequested(QPoint)\0"
    "updateMasterKey(bool)\0openDatabase(bool)\0"
    "unlockDatabase(bool)\0emitCurrentModeChanged()\0"
    "clearLastGroup(Group*)\0group\0search()\0"
    "startSearch()\0startSearchTimer()\0"
    "showSearch()\0closeSearch()\0"
};

void DatabaseWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DatabaseWidget *_t = static_cast<DatabaseWidget *>(_o);
        switch (_id) {
        case 0: _t->closeRequest(); break;
        case 1: _t->currentModeChanged((*reinterpret_cast< DatabaseWidget::Mode(*)>(_a[1]))); break;
        case 2: _t->groupChanged(); break;
        case 3: _t->entrySelectionChanged(); break;
        case 4: _t->databaseChanged((*reinterpret_cast< Database*(*)>(_a[1]))); break;
        case 5: _t->groupContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->entryContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: _t->unlockedDatabase(); break;
        case 8: _t->listModeAboutToActivate(); break;
        case 9: _t->listModeActivated(); break;
        case 10: _t->searchModeAboutToActivate(); break;
        case 11: _t->searchModeActivated(); break;
        case 12: _t->splitterSizesChanged(); break;
        case 13: _t->entryColumnSizesChanged(); break;
        case 14: _t->createEntry(); break;
        case 15: _t->cloneEntry(); break;
        case 16: _t->deleteEntries(); break;
        case 17: _t->copyTitle(); break;
        case 18: _t->copyUsername(); break;
        case 19: _t->copyPassword(); break;
        case 20: _t->copyURL(); break;
        case 21: _t->copyNotes(); break;
        case 22: _t->copyAttribute((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 23: _t->performAutoType(); break;
        case 24: _t->openUrl(); break;
        case 25: _t->openUrlForEntry((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 26: _t->createGroup(); break;
        case 27: _t->deleteGroup(); break;
        case 28: _t->switchToEntryEdit(); break;
        case 29: _t->switchToGroupEdit(); break;
        case 30: _t->switchToMasterKeyChange(); break;
        case 31: _t->switchToDatabaseSettings(); break;
        case 32: _t->switchToOpenDatabase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->switchToOpenDatabase((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 34: _t->switchToImportKeepass1((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->openSearch(); break;
        case 36: _t->entryActivationSignalReceived((*reinterpret_cast< Entry*(*)>(_a[1])),(*reinterpret_cast< EntryModel::ModelColumn(*)>(_a[2]))); break;
        case 37: _t->switchBackToEntryEdit(); break;
        case 38: _t->switchToView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->switchToHistoryView((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 40: _t->switchToEntryEdit((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 41: _t->switchToEntryEdit((*reinterpret_cast< Entry*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->switchToGroupEdit((*reinterpret_cast< Group*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 43: _t->emitGroupContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 44: _t->emitEntryContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 45: _t->updateMasterKey((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->openDatabase((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->unlockDatabase((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->emitCurrentModeChanged(); break;
        case 49: _t->clearLastGroup((*reinterpret_cast< Group*(*)>(_a[1]))); break;
        case 50: _t->search(); break;
        case 51: _t->startSearch(); break;
        case 52: _t->startSearchTimer(); break;
        case 53: _t->showSearch(); break;
        case 54: _t->closeSearch(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DatabaseWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DatabaseWidget::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_DatabaseWidget,
      qt_meta_data_DatabaseWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DatabaseWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DatabaseWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DatabaseWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseWidget))
        return static_cast<void*>(const_cast< DatabaseWidget*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int DatabaseWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    return _id;
}

// SIGNAL 0
void DatabaseWidget::closeRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DatabaseWidget::currentModeChanged(DatabaseWidget::Mode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DatabaseWidget::groupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void DatabaseWidget::entrySelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void DatabaseWidget::databaseChanged(Database * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DatabaseWidget::groupContextMenuRequested(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DatabaseWidget::entryContextMenuRequested(const QPoint & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DatabaseWidget::unlockedDatabase()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void DatabaseWidget::listModeAboutToActivate()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void DatabaseWidget::listModeActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void DatabaseWidget::searchModeAboutToActivate()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void DatabaseWidget::searchModeActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void DatabaseWidget::splitterSizesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void DatabaseWidget::entryColumnSizesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}
QT_END_MOC_NAMESPACE
