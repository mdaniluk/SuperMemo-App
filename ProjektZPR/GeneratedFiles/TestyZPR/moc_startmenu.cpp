/****************************************************************************
** Meta object code from reading C++ file 'startmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../startmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StartMenu_t {
    QByteArrayData data[15];
    char stringdata[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_StartMenu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_StartMenu_t qt_meta_stringdata_StartMenu = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 15),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 6),
QT_MOC_LITERAL(4, 34, 11),
QT_MOC_LITERAL(5, 46, 14),
QT_MOC_LITERAL(6, 61, 10),
QT_MOC_LITERAL(7, 72, 12),
QT_MOC_LITERAL(8, 85, 17),
QT_MOC_LITERAL(9, 103, 25),
QT_MOC_LITERAL(10, 129, 23),
QT_MOC_LITERAL(11, 153, 16),
QT_MOC_LITERAL(12, 170, 24),
QT_MOC_LITERAL(13, 195, 11),
QT_MOC_LITERAL(14, 207, 11)
    },
    "StartMenu\0showListOfFiles\0\0choose\0"
    "std::string\0chooseContinue\0closeStart\0"
    "deleteCourse\0on_choose_clicked\0"
    "on_continueButton_clicked\0"
    "on_deleteButton_clicked\0setListOfCourses\0"
    "std::vector<std::string>\0listOfFiles\0"
    "closeWindow\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StartMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x05,
       3,    2,   65,    2, 0x05,
       5,    1,   70,    2, 0x05,
       6,    0,   73,    2, 0x05,
       7,    1,   74,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       8,    0,   77,    2, 0x08,
       9,    0,   78,    2, 0x08,
      10,    0,   79,    2, 0x08,
      11,    1,   80,    2, 0x0a,
      14,    0,   83,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

       0        // eod
};

void StartMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StartMenu *_t = static_cast<StartMenu *>(_o);
        switch (_id) {
        case 0: _t->showListOfFiles(); break;
        case 1: _t->choose((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->chooseContinue((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 3: _t->closeStart(); break;
        case 4: _t->deleteCourse((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 5: _t->on_choose_clicked(); break;
        case 6: _t->on_continueButton_clicked(); break;
        case 7: _t->on_deleteButton_clicked(); break;
        case 8: _t->setListOfCourses((*reinterpret_cast< std::vector<std::string>(*)>(_a[1]))); break;
        case 9: _t->closeWindow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StartMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StartMenu::showListOfFiles)) {
                *result = 0;
            }
        }
        {
            typedef void (StartMenu::*_t)(std::string , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StartMenu::choose)) {
                *result = 1;
            }
        }
        {
            typedef void (StartMenu::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StartMenu::chooseContinue)) {
                *result = 2;
            }
        }
        {
            typedef void (StartMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StartMenu::closeStart)) {
                *result = 3;
            }
        }
        {
            typedef void (StartMenu::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StartMenu::deleteCourse)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject StartMenu::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_StartMenu.data,
      qt_meta_data_StartMenu,  qt_static_metacall, 0, 0}
};


const QMetaObject *StartMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StartMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StartMenu.stringdata))
        return static_cast<void*>(const_cast< StartMenu*>(this));
    if (!strcmp(_clname, "Ui::StartMenu"))
        return static_cast< Ui::StartMenu*>(const_cast< StartMenu*>(this));
    return QDialog::qt_metacast(_clname);
}

int StartMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void StartMenu::showListOfFiles()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void StartMenu::choose(std::string _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StartMenu::chooseContinue(std::string _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StartMenu::closeStart()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void StartMenu::deleteCourse(std::string _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
