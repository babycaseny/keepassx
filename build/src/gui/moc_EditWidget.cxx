/****************************************************************************
** Meta object code from reading C++ file 'EditWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/EditWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   22,   22,   22, 0x05,
      23,   22,   22,   22, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_EditWidget[] = {
    "EditWidget\0accepted()\0\0rejected()\0"
};

void EditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditWidget *_t = static_cast<EditWidget *>(_o);
        switch (_id) {
        case 0: _t->accepted(); break;
        case 1: _t->rejected(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EditWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditWidget::staticMetaObject = {
    { &DialogyWidget::staticMetaObject, qt_meta_stringdata_EditWidget,
      qt_meta_data_EditWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditWidget))
        return static_cast<void*>(const_cast< EditWidget*>(this));
    return DialogyWidget::qt_metacast(_clname);
}

int EditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DialogyWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void EditWidget::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void EditWidget::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
