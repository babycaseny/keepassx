/****************************************************************************
** Meta object code from reading C++ file 'DatabaseOpenWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/DatabaseOpenWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseOpenWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DatabaseOpenWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   19,   19,   19, 0x09,
      63,   19,   19,   19, 0x09,
      72,   19,   19,   19, 0x08,
      91,   19,   19,   19, 0x08,
     109,   19,   19,   19, 0x08,
     130,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DatabaseOpenWidget[] = {
    "DatabaseOpenWidget\0\0accepted\0"
    "editFinished(bool)\0openDatabase()\0"
    "reject()\0activatePassword()\0"
    "activateKeyFile()\0setOkButtonEnabled()\0"
    "browseKeyFile()\0"
};

void DatabaseOpenWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DatabaseOpenWidget *_t = static_cast<DatabaseOpenWidget *>(_o);
        switch (_id) {
        case 0: _t->editFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->openDatabase(); break;
        case 2: _t->reject(); break;
        case 3: _t->activatePassword(); break;
        case 4: _t->activateKeyFile(); break;
        case 5: _t->setOkButtonEnabled(); break;
        case 6: _t->browseKeyFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DatabaseOpenWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DatabaseOpenWidget::staticMetaObject = {
    { &DialogyWidget::staticMetaObject, qt_meta_stringdata_DatabaseOpenWidget,
      qt_meta_data_DatabaseOpenWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DatabaseOpenWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DatabaseOpenWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DatabaseOpenWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseOpenWidget))
        return static_cast<void*>(const_cast< DatabaseOpenWidget*>(this));
    return DialogyWidget::qt_metacast(_clname);
}

int DatabaseOpenWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DialogyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DatabaseOpenWidget::editFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
