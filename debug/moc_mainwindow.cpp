/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[381];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 55, 4), // "item"
QT_MOC_LITERAL(5, 60, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(6, 84, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(7, 108, 4), // "arg1"
QT_MOC_LITERAL(8, 113, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 135, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(10, 159, 10), // "updateText"
QT_MOC_LITERAL(11, 170, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(12, 194, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(13, 218, 7), // "setIcon"
QT_MOC_LITERAL(14, 226, 13), // "iconActivated"
QT_MOC_LITERAL(15, 240, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(16, 274, 6), // "reason"
QT_MOC_LITERAL(17, 281, 11), // "showMessage"
QT_MOC_LITERAL(18, 293, 14), // "messageClicked"
QT_MOC_LITERAL(19, 308, 25), // "on_newTitle_returnPressed"
QT_MOC_LITERAL(20, 334, 11), // "showminimum"
QT_MOC_LITERAL(21, 346, 10), // "shownormal"
QT_MOC_LITERAL(22, 357, 23) // "on_pushButton_4_clicked"

    },
    "MainWindow\0on_listWidget_itemClicked\0"
    "\0QListWidgetItem*\0item\0on_pushButton_2_clicked\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_pushButton_clicked\0on_pushButton_3_clicked\0"
    "updateText\0on_pushButton_6_clicked\0"
    "on_pushButton_5_clicked\0setIcon\0"
    "iconActivated\0QSystemTrayIcon::ActivationReason\0"
    "reason\0showMessage\0messageClicked\0"
    "on_newTitle_returnPressed\0showminimum\0"
    "shownormal\0on_pushButton_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    1,   98,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    0,  104,    2, 0x08 /* Private */,
      12,    0,  105,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    1,  107,    2, 0x08 /* Private */,
      17,    0,  110,    2, 0x08 /* Private */,
      18,    0,  111,    2, 0x08 /* Private */,
      19,    0,  112,    2, 0x08 /* Private */,
      20,    0,  113,    2, 0x08 /* Private */,
      21,    0,  114,    2, 0x08 /* Private */,
      22,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->updateText(); break;
        case 6: _t->on_pushButton_6_clicked(); break;
        case 7: _t->on_pushButton_5_clicked(); break;
        case 8: _t->setIcon(); break;
        case 9: _t->iconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 10: _t->showMessage(); break;
        case 11: _t->messageClicked(); break;
        case 12: _t->on_newTitle_returnPressed(); break;
        case 13: _t->showminimum(); break;
        case 14: _t->shownormal(); break;
        case 15: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
