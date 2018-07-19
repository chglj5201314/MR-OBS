/****************************************************************************
** Meta object code from reading C++ file 'window-basic-settings.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/window-basic-settings.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-settings.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SilentUpdateCheckBox_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SilentUpdateCheckBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SilentUpdateCheckBox_t qt_meta_stringdata_SilentUpdateCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SilentUpdateCheckBox"
QT_MOC_LITERAL(1, 21, 18), // "setCheckedSilently"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7) // "checked"

    },
    "SilentUpdateCheckBox\0setCheckedSilently\0"
    "\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SilentUpdateCheckBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void SilentUpdateCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SilentUpdateCheckBox *_t = static_cast<SilentUpdateCheckBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCheckedSilently((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SilentUpdateCheckBox::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_SilentUpdateCheckBox.data,
      qt_meta_data_SilentUpdateCheckBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SilentUpdateCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SilentUpdateCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SilentUpdateCheckBox.stringdata0))
        return static_cast<void*>(const_cast< SilentUpdateCheckBox*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int SilentUpdateCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_SilentUpdateSpinBox_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SilentUpdateSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SilentUpdateSpinBox_t qt_meta_stringdata_SilentUpdateSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SilentUpdateSpinBox"
QT_MOC_LITERAL(1, 20, 16), // "setValueSilently"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3) // "val"

    },
    "SilentUpdateSpinBox\0setValueSilently\0"
    "\0val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SilentUpdateSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void SilentUpdateSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SilentUpdateSpinBox *_t = static_cast<SilentUpdateSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValueSilently((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SilentUpdateSpinBox::staticMetaObject = {
    { &QSpinBox::staticMetaObject, qt_meta_stringdata_SilentUpdateSpinBox.data,
      qt_meta_data_SilentUpdateSpinBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SilentUpdateSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SilentUpdateSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SilentUpdateSpinBox.stringdata0))
        return static_cast<void*>(const_cast< SilentUpdateSpinBox*>(this));
    return QSpinBox::qt_metacast(_clname);
}

int SilentUpdateSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_OBSBasicSettings_t {
    QByteArrayData data[59];
    char stringdata0[1333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasicSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasicSettings_t qt_meta_stringdata_OBSBasicSettings = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OBSBasicSettings"
QT_MOC_LITERAL(1, 17, 11), // "select_path"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "scene_Switch"
QT_MOC_LITERAL(4, 43, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 60, 19), // "show_scenes_sources"
QT_MOC_LITERAL(6, 80, 4), // "item"
QT_MOC_LITERAL(7, 85, 19), // "again_update_scenes"
QT_MOC_LITERAL(8, 105, 9), // "open_file"
QT_MOC_LITERAL(9, 115, 18), // "on_theme_activated"
QT_MOC_LITERAL(10, 134, 3), // "idx"
QT_MOC_LITERAL(11, 138, 34), // "on_listWidget_itemSelectionCh..."
QT_MOC_LITERAL(12, 173, 20), // "on_buttonBox_clicked"
QT_MOC_LITERAL(13, 194, 16), // "QAbstractButton*"
QT_MOC_LITERAL(14, 211, 6), // "button"
QT_MOC_LITERAL(15, 218, 33), // "on_streamType_currentIndexCha..."
QT_MOC_LITERAL(16, 252, 29), // "on_simpleOutputBrowse_clicked"
QT_MOC_LITERAL(17, 282, 30), // "on_advOutRecPathBrowse_clicked"
QT_MOC_LITERAL(18, 313, 29), // "on_advOutFFPathBrowse_clicked"
QT_MOC_LITERAL(19, 343, 36), // "on_advOutEncoder_currentIndex..."
QT_MOC_LITERAL(20, 380, 39), // "on_advOutRecEncoder_currentIn..."
QT_MOC_LITERAL(21, 420, 36), // "on_advOutFFIgnoreCompat_state..."
QT_MOC_LITERAL(22, 457, 5), // "state"
QT_MOC_LITERAL(23, 463, 37), // "on_advOutFFFormat_currentInde..."
QT_MOC_LITERAL(24, 501, 39), // "on_advOutFFAEncoder_currentIn..."
QT_MOC_LITERAL(25, 541, 39), // "on_advOutFFVEncoder_currentIn..."
QT_MOC_LITERAL(26, 581, 35), // "on_advOutFFType_currentIndexC..."
QT_MOC_LITERAL(27, 617, 34), // "on_colorFormat_currentIndexCh..."
QT_MOC_LITERAL(28, 652, 4), // "text"
QT_MOC_LITERAL(29, 657, 32), // "on_filenameFormatting_textEdited"
QT_MOC_LITERAL(30, 690, 35), // "on_outputResolution_editTextC..."
QT_MOC_LITERAL(31, 726, 33), // "on_baseResolution_editTextCha..."
QT_MOC_LITERAL(32, 760, 26), // "on_disableOSXVSync_clicked"
QT_MOC_LITERAL(33, 787, 14), // "GeneralChanged"
QT_MOC_LITERAL(34, 802, 12), // "AudioChanged"
QT_MOC_LITERAL(35, 815, 19), // "AudioChangedRestart"
QT_MOC_LITERAL(36, 835, 18), // "ReloadAudioSources"
QT_MOC_LITERAL(37, 854, 15), // "SurroundWarning"
QT_MOC_LITERAL(38, 870, 20), // "SpeakerLayoutChanged"
QT_MOC_LITERAL(39, 891, 14), // "OutputsChanged"
QT_MOC_LITERAL(40, 906, 14), // "Stream1Changed"
QT_MOC_LITERAL(41, 921, 12), // "VideoChanged"
QT_MOC_LITERAL(42, 934, 22), // "VideoChangedResolution"
QT_MOC_LITERAL(43, 957, 19), // "VideoChangedRestart"
QT_MOC_LITERAL(44, 977, 14), // "HotkeysChanged"
QT_MOC_LITERAL(45, 992, 13), // "ReloadHotkeys"
QT_MOC_LITERAL(46, 1006, 13), // "obs_hotkey_id"
QT_MOC_LITERAL(47, 1020, 9), // "ignoreKey"
QT_MOC_LITERAL(48, 1030, 15), // "AdvancedChanged"
QT_MOC_LITERAL(49, 1046, 22), // "AdvancedChangedRestart"
QT_MOC_LITERAL(50, 1069, 25), // "UpdateStreamDelayEstimate"
QT_MOC_LITERAL(51, 1095, 37), // "UpdateAutomaticReplayBufferCh..."
QT_MOC_LITERAL(52, 1133, 22), // "AdvOutRecCheckWarnings"
QT_MOC_LITERAL(53, 1156, 29), // "SimpleRecordingQualityChanged"
QT_MOC_LITERAL(54, 1186, 29), // "SimpleRecordingEncoderChanged"
QT_MOC_LITERAL(55, 1216, 37), // "SimpleRecordingQualityLossles..."
QT_MOC_LITERAL(56, 1254, 25), // "SimpleReplayBufferChanged"
QT_MOC_LITERAL(57, 1280, 22), // "AdvReplayBufferChanged"
QT_MOC_LITERAL(58, 1303, 29) // "SimpleStreamingEncoderChanged"

    },
    "OBSBasicSettings\0select_path\0\0"
    "scene_Switch\0QListWidgetItem*\0"
    "show_scenes_sources\0item\0again_update_scenes\0"
    "open_file\0on_theme_activated\0idx\0"
    "on_listWidget_itemSelectionChanged\0"
    "on_buttonBox_clicked\0QAbstractButton*\0"
    "button\0on_streamType_currentIndexChanged\0"
    "on_simpleOutputBrowse_clicked\0"
    "on_advOutRecPathBrowse_clicked\0"
    "on_advOutFFPathBrowse_clicked\0"
    "on_advOutEncoder_currentIndexChanged\0"
    "on_advOutRecEncoder_currentIndexChanged\0"
    "on_advOutFFIgnoreCompat_stateChanged\0"
    "state\0on_advOutFFFormat_currentIndexChanged\0"
    "on_advOutFFAEncoder_currentIndexChanged\0"
    "on_advOutFFVEncoder_currentIndexChanged\0"
    "on_advOutFFType_currentIndexChanged\0"
    "on_colorFormat_currentIndexChanged\0"
    "text\0on_filenameFormatting_textEdited\0"
    "on_outputResolution_editTextChanged\0"
    "on_baseResolution_editTextChanged\0"
    "on_disableOSXVSync_clicked\0GeneralChanged\0"
    "AudioChanged\0AudioChangedRestart\0"
    "ReloadAudioSources\0SurroundWarning\0"
    "SpeakerLayoutChanged\0OutputsChanged\0"
    "Stream1Changed\0VideoChanged\0"
    "VideoChangedResolution\0VideoChangedRestart\0"
    "HotkeysChanged\0ReloadHotkeys\0obs_hotkey_id\0"
    "ignoreKey\0AdvancedChanged\0"
    "AdvancedChangedRestart\0UpdateStreamDelayEstimate\0"
    "UpdateAutomaticReplayBufferCheckboxes\0"
    "AdvOutRecCheckWarnings\0"
    "SimpleRecordingQualityChanged\0"
    "SimpleRecordingEncoderChanged\0"
    "SimpleRecordingQualityLosslessWarning\0"
    "SimpleReplayBufferChanged\0"
    "AdvReplayBufferChanged\0"
    "SimpleStreamingEncoderChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasicSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  259,    2, 0x08 /* Private */,
       3,    1,  260,    2, 0x08 /* Private */,
       5,    1,  263,    2, 0x08 /* Private */,
       7,    0,  266,    2, 0x08 /* Private */,
       8,    0,  267,    2, 0x08 /* Private */,
       9,    1,  268,    2, 0x08 /* Private */,
      11,    0,  271,    2, 0x08 /* Private */,
      12,    1,  272,    2, 0x08 /* Private */,
      15,    1,  275,    2, 0x08 /* Private */,
      16,    0,  278,    2, 0x08 /* Private */,
      17,    0,  279,    2, 0x08 /* Private */,
      18,    0,  280,    2, 0x08 /* Private */,
      19,    1,  281,    2, 0x08 /* Private */,
      20,    1,  284,    2, 0x08 /* Private */,
      21,    1,  287,    2, 0x08 /* Private */,
      23,    1,  290,    2, 0x08 /* Private */,
      24,    1,  293,    2, 0x08 /* Private */,
      25,    1,  296,    2, 0x08 /* Private */,
      26,    1,  299,    2, 0x08 /* Private */,
      27,    1,  302,    2, 0x08 /* Private */,
      29,    1,  305,    2, 0x08 /* Private */,
      30,    1,  308,    2, 0x08 /* Private */,
      31,    1,  311,    2, 0x08 /* Private */,
      32,    0,  314,    2, 0x08 /* Private */,
      33,    0,  315,    2, 0x08 /* Private */,
      34,    0,  316,    2, 0x08 /* Private */,
      35,    0,  317,    2, 0x08 /* Private */,
      36,    0,  318,    2, 0x08 /* Private */,
      37,    1,  319,    2, 0x08 /* Private */,
      38,    1,  322,    2, 0x08 /* Private */,
      39,    0,  325,    2, 0x08 /* Private */,
      40,    0,  326,    2, 0x08 /* Private */,
      41,    0,  327,    2, 0x08 /* Private */,
      42,    0,  328,    2, 0x08 /* Private */,
      43,    0,  329,    2, 0x08 /* Private */,
      44,    0,  330,    2, 0x08 /* Private */,
      45,    1,  331,    2, 0x08 /* Private */,
      45,    0,  334,    2, 0x28 /* Private | MethodCloned */,
      48,    0,  335,    2, 0x08 /* Private */,
      49,    0,  336,    2, 0x08 /* Private */,
      50,    0,  337,    2, 0x08 /* Private */,
      51,    0,  338,    2, 0x08 /* Private */,
      52,    0,  339,    2, 0x08 /* Private */,
      53,    0,  340,    2, 0x08 /* Private */,
      54,    0,  341,    2, 0x08 /* Private */,
      55,    1,  342,    2, 0x08 /* Private */,
      56,    0,  345,    2, 0x08 /* Private */,
      57,    0,  346,    2, 0x08 /* Private */,
      58,    0,  347,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OBSBasicSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSBasicSettings *_t = static_cast<OBSBasicSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->select_path(); break;
        case 1: _t->scene_Switch((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->show_scenes_sources((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->again_update_scenes(); break;
        case 4: _t->open_file(); break;
        case 5: _t->on_theme_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_listWidget_itemSelectionChanged(); break;
        case 7: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 8: _t->on_streamType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_simpleOutputBrowse_clicked(); break;
        case 10: _t->on_advOutRecPathBrowse_clicked(); break;
        case 11: _t->on_advOutFFPathBrowse_clicked(); break;
        case 12: _t->on_advOutEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_advOutRecEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_advOutFFIgnoreCompat_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_advOutFFFormat_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_advOutFFAEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_advOutFFVEncoder_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_advOutFFType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_colorFormat_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->on_filenameFormatting_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->on_outputResolution_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->on_baseResolution_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->on_disableOSXVSync_clicked(); break;
        case 24: _t->GeneralChanged(); break;
        case 25: _t->AudioChanged(); break;
        case 26: _t->AudioChangedRestart(); break;
        case 27: _t->ReloadAudioSources(); break;
        case 28: _t->SurroundWarning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->SpeakerLayoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->OutputsChanged(); break;
        case 31: _t->Stream1Changed(); break;
        case 32: _t->VideoChanged(); break;
        case 33: _t->VideoChangedResolution(); break;
        case 34: _t->VideoChangedRestart(); break;
        case 35: _t->HotkeysChanged(); break;
        case 36: _t->ReloadHotkeys((*reinterpret_cast< obs_hotkey_id(*)>(_a[1]))); break;
        case 37: _t->ReloadHotkeys(); break;
        case 38: _t->AdvancedChanged(); break;
        case 39: _t->AdvancedChangedRestart(); break;
        case 40: _t->UpdateStreamDelayEstimate(); break;
        case 41: _t->UpdateAutomaticReplayBufferCheckboxes(); break;
        case 42: _t->AdvOutRecCheckWarnings(); break;
        case 43: _t->SimpleRecordingQualityChanged(); break;
        case 44: _t->SimpleRecordingEncoderChanged(); break;
        case 45: _t->SimpleRecordingQualityLosslessWarning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->SimpleReplayBufferChanged(); break;
        case 47: _t->AdvReplayBufferChanged(); break;
        case 48: _t->SimpleStreamingEncoderChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject OBSBasicSettings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OBSBasicSettings.data,
      qt_meta_data_OBSBasicSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSBasicSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasicSettings.stringdata0))
        return static_cast<void*>(const_cast< OBSBasicSettings*>(this));
    return QDialog::qt_metacast(_clname);
}

int OBSBasicSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
