/****************************************************************************
** Meta object code from reading C++ file 'source-tree.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/source-tree.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'source-tree.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SourceTreeSubItemCheckBox_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SourceTreeSubItemCheckBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SourceTreeSubItemCheckBox_t qt_meta_stringdata_SourceTreeSubItemCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 25) // "SourceTreeSubItemCheckBox"

    },
    "SourceTreeSubItemCheckBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SourceTreeSubItemCheckBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SourceTreeSubItemCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SourceTreeSubItemCheckBox::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_SourceTreeSubItemCheckBox.data,
      qt_meta_data_SourceTreeSubItemCheckBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SourceTreeSubItemCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTreeSubItemCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SourceTreeSubItemCheckBox.stringdata0))
        return static_cast<void*>(const_cast< SourceTreeSubItemCheckBox*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int SourceTreeSubItemCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_SourceTreeItem_t {
    QByteArrayData data[11];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SourceTreeItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SourceTreeItem_t qt_meta_stringdata_SourceTreeItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SourceTreeItem"
QT_MOC_LITERAL(1, 15, 13), // "EnterEditMode"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "ExitEditMode"
QT_MOC_LITERAL(4, 43, 4), // "save"
QT_MOC_LITERAL(5, 48, 17), // "VisibilityChanged"
QT_MOC_LITERAL(6, 66, 7), // "visible"
QT_MOC_LITERAL(7, 74, 7), // "Renamed"
QT_MOC_LITERAL(8, 82, 4), // "name"
QT_MOC_LITERAL(9, 87, 13), // "ExpandClicked"
QT_MOC_LITERAL(10, 101, 7) // "checked"

    },
    "SourceTreeItem\0EnterEditMode\0\0"
    "ExitEditMode\0save\0VisibilityChanged\0"
    "visible\0Renamed\0name\0ExpandClicked\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SourceTreeItem[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       7,    1,   46,    2, 0x08 /* Private */,
       9,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void SourceTreeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SourceTreeItem *_t = static_cast<SourceTreeItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->EnterEditMode(); break;
        case 1: _t->ExitEditMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->VisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->Renamed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->ExpandClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SourceTreeItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SourceTreeItem.data,
      qt_meta_data_SourceTreeItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SourceTreeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTreeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SourceTreeItem.stringdata0))
        return static_cast<void*>(const_cast< SourceTreeItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int SourceTreeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SourceTreeModel_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SourceTreeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SourceTreeModel_t qt_meta_stringdata_SourceTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 15) // "SourceTreeModel"

    },
    "SourceTreeModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SourceTreeModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SourceTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SourceTreeModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_SourceTreeModel.data,
      qt_meta_data_SourceTreeModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SourceTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SourceTreeModel.stringdata0))
        return static_cast<void*>(const_cast< SourceTreeModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int SourceTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_SourceTree_t {
    QByteArrayData data[7];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SourceTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SourceTree_t qt_meta_stringdata_SourceTree = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SourceTree"
QT_MOC_LITERAL(1, 11, 18), // "GroupSelectedItems"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 21), // "UngroupSelectedGroups"
QT_MOC_LITERAL(4, 53, 8), // "AddGroup"
QT_MOC_LITERAL(5, 62, 4), // "Edit"
QT_MOC_LITERAL(6, 67, 3) // "idx"

    },
    "SourceTree\0GroupSelectedItems\0\0"
    "UngroupSelectedGroups\0AddGroup\0Edit\0"
    "idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SourceTree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void SourceTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SourceTree *_t = static_cast<SourceTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GroupSelectedItems(); break;
        case 1: _t->UngroupSelectedGroups(); break;
        case 2: _t->AddGroup(); break;
        case 3: _t->Edit((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SourceTree::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_SourceTree.data,
      qt_meta_data_SourceTree,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SourceTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceTree::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SourceTree.stringdata0))
        return static_cast<void*>(const_cast< SourceTree*>(this));
    return QListView::qt_metacast(_clname);
}

int SourceTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
