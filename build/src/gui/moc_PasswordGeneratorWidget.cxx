/****************************************************************************
** Meta object code from reading C++ file 'PasswordGeneratorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/PasswordGeneratorWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PasswordGeneratorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PasswordGeneratorWidget[] = {

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
      34,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   25,   24,   24, 0x08,
      83,   24,   24,   24, 0x08,
     101,   24,   24,   24, 0x08,
     116,   24,   24,   24, 0x08,
     130,   24,   24,   24, 0x08,
     147,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PasswordGeneratorWidget[] = {
    "PasswordGeneratorWidget\0\0password\0"
    "newPassword(QString)\0updateApplyEnabled(QString)\0"
    "emitNewPassword()\0saveSettings()\0"
    "sliderMoved()\0spinBoxChanged()\0"
    "updateGenerator()\0"
};

void PasswordGeneratorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PasswordGeneratorWidget *_t = static_cast<PasswordGeneratorWidget *>(_o);
        switch (_id) {
        case 0: _t->newPassword((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateApplyEnabled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->emitNewPassword(); break;
        case 3: _t->saveSettings(); break;
        case 4: _t->sliderMoved(); break;
        case 5: _t->spinBoxChanged(); break;
        case 6: _t->updateGenerator(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PasswordGeneratorWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PasswordGeneratorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PasswordGeneratorWidget,
      qt_meta_data_PasswordGeneratorWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PasswordGeneratorWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PasswordGeneratorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PasswordGeneratorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PasswordGeneratorWidget))
        return static_cast<void*>(const_cast< PasswordGeneratorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PasswordGeneratorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void PasswordGeneratorWidget::newPassword(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
