/****************************************************************************
** Meta object code from reading C++ file 'resultmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kactivities-stats-v5.45.0-rc1/src/resultmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resultmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KActivities__Stats__ResultModel_t {
    QByteArrayData data[11];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KActivities__Stats__ResultModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KActivities__Stats__ResultModel_t qt_meta_stringdata_KActivities__Stats__ResultModel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "KActivities::Stats::ResultModel"
QT_MOC_LITERAL(1, 32, 14), // "forgetResource"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 8), // "resource"
QT_MOC_LITERAL(4, 57, 3), // "row"
QT_MOC_LITERAL(5, 61, 18), // "forgetAllResources"
QT_MOC_LITERAL(6, 80, 17), // "setResultPosition"
QT_MOC_LITERAL(7, 98, 8), // "position"
QT_MOC_LITERAL(8, 107, 9), // "sortItems"
QT_MOC_LITERAL(9, 117, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(10, 131, 9) // "sortOrder"

    },
    "KActivities::Stats::ResultModel\0"
    "forgetResource\0\0resource\0row\0"
    "forgetAllResources\0setResultPosition\0"
    "position\0sortItems\0Qt::SortOrder\0"
    "sortOrder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KActivities__Stats__ResultModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       1,    1,   42,    2, 0x0a /* Public */,
       5,    0,   45,    2, 0x0a /* Public */,
       6,    2,   46,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void KActivities::Stats::ResultModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResultModel *_t = static_cast<ResultModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->forgetResource((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->forgetResource((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->forgetAllResources(); break;
        case 3: _t->setResultPosition((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->sortItems((*reinterpret_cast< Qt::SortOrder(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KActivities::Stats::ResultModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_KActivities__Stats__ResultModel.data,
      qt_meta_data_KActivities__Stats__ResultModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *KActivities::Stats::ResultModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KActivities::Stats::ResultModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KActivities__Stats__ResultModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int KActivities::Stats::ResultModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
