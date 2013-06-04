/****************************************************************************
** Meta object code from reading C++ file 'createtest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../createtest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CreateTest_t {
    QByteArrayData data[20];
    char stringdata[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CreateTest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CreateTest_t qt_meta_stringdata_CreateTest = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 11),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 2),
QT_MOC_LITERAL(4, 27, 11),
QT_MOC_LITERAL(5, 39, 8),
QT_MOC_LITERAL(6, 48, 6),
QT_MOC_LITERAL(7, 55, 11),
QT_MOC_LITERAL(8, 67, 11),
QT_MOC_LITERAL(9, 79, 10),
QT_MOC_LITERAL(10, 90, 12),
QT_MOC_LITERAL(11, 103, 15),
QT_MOC_LITERAL(12, 119, 15),
QT_MOC_LITERAL(13, 135, 15),
QT_MOC_LITERAL(14, 151, 15),
QT_MOC_LITERAL(15, 167, 11),
QT_MOC_LITERAL(16, 179, 6),
QT_MOC_LITERAL(17, 186, 18),
QT_MOC_LITERAL(18, 205, 5),
QT_MOC_LITERAL(19, 211, 11)
    },
    "CreateTest\0setTaskNext\0\0id\0std::string\0"
    "question\0answer\0setTaskBack\0setLastTask\0"
    "saveCourse\0closeCreator\0on_next_clicked\0"
    "on_back_clicked\0on_save_clicked\0"
    "on_help_clicked\0refreshTask\0number\0"
    "currentChangedSlot\0index\0closeWindow\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x05,
       7,    3,   81,    2, 0x05,
       8,    3,   88,    2, 0x05,
       9,    1,   95,    2, 0x05,
      10,    0,   98,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      11,    0,   99,    2, 0x08,
      12,    0,  100,    2, 0x08,
      13,    0,  101,    2, 0x08,
      14,    0,  102,    2, 0x08,
      15,    3,  103,    2, 0x0a,
      17,    1,  110,    2, 0x0a,
      19,    0,  113,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, 0x80000000 | 4,    3,    5,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, 0x80000000 | 4,    3,    5,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, 0x80000000 | 4,    3,    5,    6,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, 0x80000000 | 4,   16,    5,    6,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,

       0        // eod
};

void CreateTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CreateTest *_t = static_cast<CreateTest *>(_o);
        switch (_id) {
        case 0: _t->setTaskNext((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        case 1: _t->setTaskBack((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        case 2: _t->setLastTask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        case 3: _t->saveCourse((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 4: _t->closeCreator(); break;
        case 5: _t->on_next_clicked(); break;
        case 6: _t->on_back_clicked(); break;
        case 7: _t->on_save_clicked(); break;
        case 8: _t->on_help_clicked(); break;
        case 9: _t->refreshTask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        case 10: _t->currentChangedSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->closeWindow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CreateTest::*_t)(int , std::string , std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CreateTest::setTaskNext)) {
                *result = 0;
            }
        }
        {
            typedef void (CreateTest::*_t)(int , std::string , std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CreateTest::setTaskBack)) {
                *result = 1;
            }
        }
        {
            typedef void (CreateTest::*_t)(int , std::string , std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CreateTest::setLastTask)) {
                *result = 2;
            }
        }
        {
            typedef void (CreateTest::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CreateTest::saveCourse)) {
                *result = 3;
            }
        }
        {
            typedef void (CreateTest::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CreateTest::closeCreator)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject CreateTest::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CreateTest.data,
      qt_meta_data_CreateTest,  qt_static_metacall, 0, 0}
};


const QMetaObject *CreateTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreateTest.stringdata))
        return static_cast<void*>(const_cast< CreateTest*>(this));
    if (!strcmp(_clname, "Ui::CreateTest"))
        return static_cast< Ui::CreateTest*>(const_cast< CreateTest*>(this));
    return QDialog::qt_metacast(_clname);
}

int CreateTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CreateTest::setTaskNext(int _t1, std::string _t2, std::string _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CreateTest::setTaskBack(int _t1, std::string _t2, std::string _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CreateTest::setLastTask(int _t1, std::string _t2, std::string _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CreateTest::saveCourse(std::string _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CreateTest::closeCreator()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
