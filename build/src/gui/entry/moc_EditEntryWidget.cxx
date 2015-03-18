/****************************************************************************
** Meta object code from reading C++ file 'EditEntryWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gui/entry/EditEntryWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditEntryWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditEntryWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   35,   44,   44, 0x05,
      45,   75,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
      81,   44,   44,   44, 0x08,
      93,   44,   44,   44, 0x08,
     102,  138,   44,   44, 0x08,
     146,  176,   44,   44, 0x08,
     185,   44,   44,   44, 0x08,
     203,   44,   44,   44, 0x08,
     226,   44,   44,   44, 0x08,
     251,   44,   44,   44, 0x08,
     276,   44,   44,   44, 0x08,
     295,   44,   44,   44, 0x08,
     319,  347,   44,   44, 0x08,
     353,   44,   44,   44, 0x08,
     377,   44,   44,   44, 0x08,
     403,   44,   44,   44, 0x08,
     427,   44,   44,   44, 0x08,
     449,   44,   44,   44, 0x08,
     471,  501,   44,   44, 0x08,
     509,   44,   44,   44, 0x08,
     529,   44,   44,   44, 0x08,
     549,   44,   44,   44, 0x08,
     568,   44,   44,   44, 0x08,
     590,   44,   44,   44, 0x08,
     611,   44,   44,   44, 0x08,
     637,  347,   44,   44, 0x08,
     676,  347,   44,   44, 0x08,
     708,  754,   44,   44, 0x08,
     771,  797,   44,   44, 0x08,
     804,  501,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditEntryWidget[] = {
    "EditEntryWidget\0editFinished(bool)\0"
    "accepted\0\0historyEntryActivated(Entry*)\0"
    "entry\0saveEntry()\0cancel()\0"
    "togglePasswordGeneratorButton(bool)\0"
    "checked\0setGeneratedPassword(QString)\0"
    "password\0insertAttribute()\0"
    "editCurrentAttribute()\0removeCurrentAttribute()\0"
    "updateCurrentAttribute()\0insertAttachment()\0"
    "saveCurrentAttachment()\0"
    "openAttachment(QModelIndex)\0index\0"
    "openCurrentAttachment()\0"
    "removeCurrentAttachment()\0"
    "updateAutoTypeEnabled()\0insertAutoTypeAssoc()\0"
    "removeAutoTypeAssoc()\0"
    "loadCurrentAssoc(QModelIndex)\0current\0"
    "clearCurrentAssoc()\0applyCurrentAssoc()\0"
    "showHistoryEntry()\0restoreHistoryEntry()\0"
    "deleteHistoryEntry()\0deleteAllHistoryEntries()\0"
    "emitHistoryEntryActivated(QModelIndex)\0"
    "histEntryActivated(QModelIndex)\0"
    "updateHistoryButtons(QModelIndex,QModelIndex)\0"
    "current,previous\0useExpiryPreset(QAction*)\0"
    "action\0updateAttachmentButtonsEnabled(QModelIndex)\0"
};

void EditEntryWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditEntryWidget *_t = static_cast<EditEntryWidget *>(_o);
        switch (_id) {
        case 0: _t->editFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->historyEntryActivated((*reinterpret_cast< Entry*(*)>(_a[1]))); break;
        case 2: _t->saveEntry(); break;
        case 3: _t->cancel(); break;
        case 4: _t->togglePasswordGeneratorButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setGeneratedPassword((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->insertAttribute(); break;
        case 7: _t->editCurrentAttribute(); break;
        case 8: _t->removeCurrentAttribute(); break;
        case 9: _t->updateCurrentAttribute(); break;
        case 10: _t->insertAttachment(); break;
        case 11: _t->saveCurrentAttachment(); break;
        case 12: _t->openAttachment((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->openCurrentAttachment(); break;
        case 14: _t->removeCurrentAttachment(); break;
        case 15: _t->updateAutoTypeEnabled(); break;
        case 16: _t->insertAutoTypeAssoc(); break;
        case 17: _t->removeAutoTypeAssoc(); break;
        case 18: _t->loadCurrentAssoc((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 19: _t->clearCurrentAssoc(); break;
        case 20: _t->applyCurrentAssoc(); break;
        case 21: _t->showHistoryEntry(); break;
        case 22: _t->restoreHistoryEntry(); break;
        case 23: _t->deleteHistoryEntry(); break;
        case 24: _t->deleteAllHistoryEntries(); break;
        case 25: _t->emitHistoryEntryActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 26: _t->histEntryActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 27: _t->updateHistoryButtons((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 28: _t->useExpiryPreset((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 29: _t->updateAttachmentButtonsEnabled((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditEntryWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditEntryWidget::staticMetaObject = {
    { &EditWidget::staticMetaObject, qt_meta_stringdata_EditEntryWidget,
      qt_meta_data_EditEntryWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditEntryWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditEntryWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditEntryWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditEntryWidget))
        return static_cast<void*>(const_cast< EditEntryWidget*>(this));
    return EditWidget::qt_metacast(_clname);
}

int EditEntryWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EditWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void EditEntryWidget::editFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EditEntryWidget::historyEntryActivated(Entry * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
