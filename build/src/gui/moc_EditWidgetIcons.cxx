/****************************************************************************
** Meta object code from reading C++ file 'EditWidgetIcons.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/EditWidgetIcons.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditWidgetIcons.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditWidgetIcons[] = {

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
      16,   32,   32,   32, 0x08,
      33,   32,   32,   32, 0x08,
      52,   84,   32,   32, 0x08,
      92,   84,   32,   32, 0x08,
     123,   32,   32,   32, 0x08,
     155,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditWidgetIcons[] = {
    "EditWidgetIcons\0addCustomIcon()\0\0"
    "removeCustomIcon()\0updateWidgetsDefaultIcons(bool)\0"
    "checked\0updateWidgetsCustomIcons(bool)\0"
    "updateRadioButtonDefaultIcons()\0"
    "updateRadioButtonCustomIcons()\0"
};

void EditWidgetIcons::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditWidgetIcons *_t = static_cast<EditWidgetIcons *>(_o);
        switch (_id) {
        case 0: _t->addCustomIcon(); break;
        case 1: _t->removeCustomIcon(); break;
        case 2: _t->updateWidgetsDefaultIcons((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->updateWidgetsCustomIcons((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateRadioButtonDefaultIcons(); break;
        case 5: _t->updateRadioButtonCustomIcons(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditWidgetIcons::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditWidgetIcons::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EditWidgetIcons,
      qt_meta_data_EditWidgetIcons, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditWidgetIcons::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditWidgetIcons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditWidgetIcons::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditWidgetIcons))
        return static_cast<void*>(const_cast< EditWidgetIcons*>(this));
    return QWidget::qt_metacast(_clname);
}

int EditWidgetIcons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
