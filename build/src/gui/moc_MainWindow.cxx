/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   12,   11,   11, 0x0a,
      82,   70,   11,   11, 0x2a,
     121,  112,   11,   11, 0x2a,
     148,  143,   11,   11, 0x08,
     189,   11,   11,   11, 0x28,
     210,   11,   11,   11, 0x08,
     230,   11,   11,   11, 0x08,
     248,   11,   11,   11, 0x08,
     268,   11,   11,   11, 0x08,
     296,  287,   11,   11, 0x08,
     327,  320,   11,   11, 0x08,
     356,   11,   11,   11, 0x08,
     377,   11,   11,   11, 0x08,
     403,   11,   11,   11, 0x08,
     440,  430,   11,   11, 0x08,
     469,  430,   11,   11, 0x08,
     504,  498,   11,   11, 0x08,
     536,  527,   11,   11, 0x08,
     567,   11,   11,   11, 0x08,
     597,  590,   11,   11, 0x08,
     650,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0fileName,pw,keyFile\0"
    "openDatabase(QString,QString,QString)\0"
    "fileName,pw\0openDatabase(QString,QString)\0"
    "fileName\0openDatabase(QString)\0mode\0"
    "setMenuActionState(DatabaseWidget::Mode)\0"
    "setMenuActionState()\0updateWindowTitle()\0"
    "showAboutDialog()\0switchToDatabases()\0"
    "switchToSettings()\0tabIndex\0"
    "databaseTabChanged(int)\0action\0"
    "openRecentDatabase(QAction*)\0"
    "clearLastDatabases()\0updateLastDatabasesMenu()\0"
    "updateCopyAttributesMenu()\0globalPos\0"
    "showEntryContextMenu(QPoint)\0"
    "showGroupContextMenu(QPoint)\0value\0"
    "saveToolbarState(bool)\0filePath\0"
    "rememberOpenDatabases(QString)\0"
    "applySettingsChanges()\0reason\0"
    "trayIconTriggered(QSystemTrayIcon::ActivationReason)\0"
    "toggleWindow()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->openDatabase((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->openDatabase((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->openDatabase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setMenuActionState((*reinterpret_cast< DatabaseWidget::Mode(*)>(_a[1]))); break;
        case 4: _t->setMenuActionState(); break;
        case 5: _t->updateWindowTitle(); break;
        case 6: _t->showAboutDialog(); break;
        case 7: _t->switchToDatabases(); break;
        case 8: _t->switchToSettings(); break;
        case 9: _t->databaseTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->openRecentDatabase((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 11: _t->clearLastDatabases(); break;
        case 12: _t->updateLastDatabasesMenu(); break;
        case 13: _t->updateCopyAttributesMenu(); break;
        case 14: _t->showEntryContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 15: _t->showGroupContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 16: _t->saveToolbarState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->rememberOpenDatabases((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->applySettingsChanges(); break;
        case 19: _t->trayIconTriggered((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 20: _t->toggleWindow(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
