/****************************************************************************
** Meta object code from reading C++ file 'DatabaseSettingsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/DatabaseSettingsWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseSettingsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DatabaseSettingsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   23,   23,   23, 0x08,
      59,   23,   23,   23, 0x08,
      68,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DatabaseSettingsWidget[] = {
    "DatabaseSettingsWidget\0\0accepted\0"
    "editFinished(bool)\0save()\0reject()\0"
    "transformRoundsBenchmark()\0"
};

void DatabaseSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DatabaseSettingsWidget *_t = static_cast<DatabaseSettingsWidget *>(_o);
        switch (_id) {
        case 0: _t->editFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->save(); break;
        case 2: _t->reject(); break;
        case 3: _t->transformRoundsBenchmark(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DatabaseSettingsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DatabaseSettingsWidget::staticMetaObject = {
    { &DialogyWidget::staticMetaObject, qt_meta_stringdata_DatabaseSettingsWidget,
      qt_meta_data_DatabaseSettingsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DatabaseSettingsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DatabaseSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DatabaseSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseSettingsWidget))
        return static_cast<void*>(const_cast< DatabaseSettingsWidget*>(this));
    return DialogyWidget::qt_metacast(_clname);
}

int DatabaseSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DialogyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DatabaseSettingsWidget::editFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
