/****************************************************************************
** Meta object code from reading C++ file 'tvruiwidget.h'
**
** Created: Thu Apr 21 14:50:45 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../srv/tvruiwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tvruiwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TvrUiWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      41,   12,   12,   12, 0x08,
      66,   12,   12,   12, 0x08,
      92,   12,   12,   12, 0x08,
     120,   12,   12,   12, 0x08,
     147,   12,   12,   12, 0x08,
     173,   12,   12,   12, 0x08,
     199,   12,   12,   12, 0x08,
     227,   12,   12,   12, 0x08,
     253,   12,   12,   12, 0x08,
     279,   12,   12,   12, 0x08,
     307,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TvrUiWidget[] = {
    "TvrUiWidget\0\0on_actionVolume_triggered()\0"
    "on_actionNew_triggered()\0"
    "on_actionSave_triggered()\0"
    "on_actionSaveAs_triggered()\0"
    "on_actionAbout_triggered()\0"
    "on_actionOpen_triggered()\0"
    "on_actionExit_triggered()\0"
    "on_actionRecord_triggered()\0"
    "on_actionStop_triggered()\0"
    "on_actionPlay_triggered()\0"
    "on_actionPaused_triggered()\0"
    "updateProgressBar()\0"
};

const QMetaObject TvrUiWidget::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TvrUiWidget,
      qt_meta_data_TvrUiWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TvrUiWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TvrUiWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TvrUiWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TvrUiWidget))
        return static_cast<void*>(const_cast< TvrUiWidget*>(this));
    if (!strcmp(_clname, "Ui::tvrWindow"))
        return static_cast< Ui::tvrWindow*>(const_cast< TvrUiWidget*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TvrUiWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_actionVolume_triggered(); break;
        case 1: on_actionNew_triggered(); break;
        case 2: on_actionSave_triggered(); break;
        case 3: on_actionSaveAs_triggered(); break;
        case 4: on_actionAbout_triggered(); break;
        case 5: on_actionOpen_triggered(); break;
        case 6: on_actionExit_triggered(); break;
        case 7: on_actionRecord_triggered(); break;
        case 8: on_actionStop_triggered(); break;
        case 9: on_actionPlay_triggered(); break;
        case 10: on_actionPaused_triggered(); break;
        case 11: updateProgressBar(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
