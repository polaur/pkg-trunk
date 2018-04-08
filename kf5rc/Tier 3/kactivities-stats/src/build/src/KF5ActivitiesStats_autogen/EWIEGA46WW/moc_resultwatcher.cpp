/****************************************************************************
** Meta object code from reading C++ file 'resultwatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../kactivities-stats-v5.45.0-rc1/src/resultwatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resultwatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KActivities__Stats__ResultWatcher_t {
    QByteArrayData data[15];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KActivities__Stats__ResultWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KActivities__Stats__ResultWatcher_t qt_meta_stringdata_KActivities__Stats__ResultWatcher = {
    {
QT_MOC_LITERAL(0, 0, 33), // "KActivities::Stats::ResultWat..."
QT_MOC_LITERAL(1, 34, 18), // "resultScoreUpdated"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 8), // "resource"
QT_MOC_LITERAL(4, 63, 5), // "score"
QT_MOC_LITERAL(5, 69, 10), // "lastUpdate"
QT_MOC_LITERAL(6, 80, 11), // "firstUpdate"
QT_MOC_LITERAL(7, 92, 13), // "resultRemoved"
QT_MOC_LITERAL(8, 106, 12), // "resultLinked"
QT_MOC_LITERAL(9, 119, 14), // "resultUnlinked"
QT_MOC_LITERAL(10, 134, 20), // "resourceTitleChanged"
QT_MOC_LITERAL(11, 155, 5), // "title"
QT_MOC_LITERAL(12, 161, 23), // "resourceMimetypeChanged"
QT_MOC_LITERAL(13, 185, 8), // "mimetype"
QT_MOC_LITERAL(14, 194, 18) // "resultsInvalidated"

    },
    "KActivities::Stats::ResultWatcher\0"
    "resultScoreUpdated\0\0resource\0score\0"
    "lastUpdate\0firstUpdate\0resultRemoved\0"
    "resultLinked\0resultUnlinked\0"
    "resourceTitleChanged\0title\0"
    "resourceMimetypeChanged\0mimetype\0"
    "resultsInvalidated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KActivities__Stats__ResultWatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   49,    2, 0x06 /* Public */,
       7,    1,   58,    2, 0x06 /* Public */,
       8,    1,   61,    2, 0x06 /* Public */,
       9,    1,   64,    2, 0x06 /* Public */,
      10,    2,   67,    2, 0x06 /* Public */,
      12,    2,   72,    2, 0x06 /* Public */,
      14,    0,   77,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::UInt, QMetaType::UInt,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   13,
    QMetaType::Void,

       0        // eod
};

void KActivities::Stats::ResultWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResultWatcher *_t = static_cast<ResultWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultScoreUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 1: _t->resultRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->resultLinked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->resultUnlinked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->resourceTitleChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->resourceMimetypeChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->resultsInvalidated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ResultWatcher::*)(const QString & , double , uint , uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResultWatcher::resultScoreUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ResultWatcher::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResultWatcher::resultRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ResultWatcher::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResultWatcher::resultLinked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ResultWatcher::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResultWatcher::resultUnlinked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ResultWatcher::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResultWatcher::resourceTitleChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ResultWatcher::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResultWatcher::resourceMimetypeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ResultWatcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResultWatcher::resultsInvalidated)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KActivities::Stats::ResultWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KActivities__Stats__ResultWatcher.data,
      qt_meta_data_KActivities__Stats__ResultWatcher,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *KActivities::Stats::ResultWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KActivities::Stats::ResultWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KActivities__Stats__ResultWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KActivities::Stats::ResultWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void KActivities::Stats::ResultWatcher::resultScoreUpdated(const QString & _t1, double _t2, uint _t3, uint _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KActivities::Stats::ResultWatcher::resultRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KActivities::Stats::ResultWatcher::resultLinked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KActivities::Stats::ResultWatcher::resultUnlinked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KActivities::Stats::ResultWatcher::resourceTitleChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KActivities::Stats::ResultWatcher::resourceMimetypeChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KActivities::Stats::ResultWatcher::resultsInvalidated()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
