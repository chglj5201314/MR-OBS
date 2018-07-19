/****************************************************************************
** Meta object code from reading C++ file 'window-basic-main.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/window-basic-main.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-main.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OBSBasic_t {
    QByteArrayData data[223];
    char stringdata0[4801];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasic_t qt_meta_stringdata_OBSBasic = {
    {
QT_MOC_LITERAL(0, 0, 8), // "OBSBasic"
QT_MOC_LITERAL(1, 9, 13), // "update_scenes"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "DeferSaveBegin"
QT_MOC_LITERAL(4, 39, 12), // "DeferSaveEnd"
QT_MOC_LITERAL(5, 52, 7), // "setting"
QT_MOC_LITERAL(6, 60, 11), // "sceneSwitch"
QT_MOC_LITERAL(7, 72, 26), // "on_pushButton_save_clicked"
QT_MOC_LITERAL(8, 99, 27), // "on_pushButton_reset_clicked"
QT_MOC_LITERAL(9, 127, 14), // "StartStreaming"
QT_MOC_LITERAL(10, 142, 13), // "StopStreaming"
QT_MOC_LITERAL(11, 156, 18), // "ForceStopStreaming"
QT_MOC_LITERAL(12, 175, 19), // "StreamDelayStarting"
QT_MOC_LITERAL(13, 195, 3), // "sec"
QT_MOC_LITERAL(14, 199, 19), // "StreamDelayStopping"
QT_MOC_LITERAL(15, 219, 14), // "StreamingStart"
QT_MOC_LITERAL(16, 234, 14), // "StreamStopping"
QT_MOC_LITERAL(17, 249, 13), // "StreamingStop"
QT_MOC_LITERAL(18, 263, 9), // "errorcode"
QT_MOC_LITERAL(19, 273, 10), // "last_error"
QT_MOC_LITERAL(20, 284, 14), // "StartRecording"
QT_MOC_LITERAL(21, 299, 13), // "StopRecording"
QT_MOC_LITERAL(22, 313, 14), // "RecordingStart"
QT_MOC_LITERAL(23, 328, 14), // "RecordStopping"
QT_MOC_LITERAL(24, 343, 13), // "RecordingStop"
QT_MOC_LITERAL(25, 357, 4), // "code"
QT_MOC_LITERAL(26, 362, 17), // "StartReplayBuffer"
QT_MOC_LITERAL(27, 380, 16), // "StopReplayBuffer"
QT_MOC_LITERAL(28, 397, 17), // "ReplayBufferStart"
QT_MOC_LITERAL(29, 415, 16), // "ReplayBufferSave"
QT_MOC_LITERAL(30, 432, 20), // "ReplayBufferStopping"
QT_MOC_LITERAL(31, 453, 16), // "ReplayBufferStop"
QT_MOC_LITERAL(32, 470, 19), // "SaveProjectDeferred"
QT_MOC_LITERAL(33, 490, 11), // "SaveProject"
QT_MOC_LITERAL(34, 502, 13), // "SetTransition"
QT_MOC_LITERAL(35, 516, 9), // "OBSSource"
QT_MOC_LITERAL(36, 526, 10), // "transition"
QT_MOC_LITERAL(37, 537, 17), // "TransitionToScene"
QT_MOC_LITERAL(38, 555, 8), // "OBSScene"
QT_MOC_LITERAL(39, 564, 5), // "scene"
QT_MOC_LITERAL(40, 570, 5), // "force"
QT_MOC_LITERAL(41, 576, 6), // "direct"
QT_MOC_LITERAL(42, 583, 15), // "quickTransition"
QT_MOC_LITERAL(43, 599, 15), // "SetCurrentScene"
QT_MOC_LITERAL(44, 615, 18), // "AddSceneCollection"
QT_MOC_LITERAL(45, 634, 10), // "create_new"
QT_MOC_LITERAL(46, 645, 4), // "name"
QT_MOC_LITERAL(47, 650, 12), // "AddSceneItem"
QT_MOC_LITERAL(48, 663, 12), // "OBSSceneItem"
QT_MOC_LITERAL(49, 676, 4), // "item"
QT_MOC_LITERAL(50, 681, 15), // "RemoveSceneItem"
QT_MOC_LITERAL(51, 697, 8), // "AddScene"
QT_MOC_LITERAL(52, 706, 6), // "source"
QT_MOC_LITERAL(53, 713, 11), // "RemoveScene"
QT_MOC_LITERAL(54, 725, 13), // "RenameSources"
QT_MOC_LITERAL(55, 739, 7), // "newName"
QT_MOC_LITERAL(56, 747, 8), // "prevName"
QT_MOC_LITERAL(57, 756, 15), // "SelectSceneItem"
QT_MOC_LITERAL(58, 772, 6), // "select"
QT_MOC_LITERAL(59, 779, 19), // "ActivateAudioSource"
QT_MOC_LITERAL(60, 799, 21), // "DeactivateAudioSource"
QT_MOC_LITERAL(61, 821, 22), // "DuplicateSelectedScene"
QT_MOC_LITERAL(62, 844, 19), // "RemoveSelectedScene"
QT_MOC_LITERAL(63, 864, 23), // "RemoveSelectedSceneItem"
QT_MOC_LITERAL(64, 888, 17), // "ToggleAlwaysOnTop"
QT_MOC_LITERAL(65, 906, 14), // "ReorderSources"
QT_MOC_LITERAL(66, 921, 13), // "ProcessHotkey"
QT_MOC_LITERAL(67, 935, 13), // "obs_hotkey_id"
QT_MOC_LITERAL(68, 949, 2), // "id"
QT_MOC_LITERAL(69, 952, 7), // "pressed"
QT_MOC_LITERAL(70, 960, 13), // "AddTransition"
QT_MOC_LITERAL(71, 974, 16), // "RenameTransition"
QT_MOC_LITERAL(72, 991, 17), // "TransitionClicked"
QT_MOC_LITERAL(73, 1009, 17), // "TransitionStopped"
QT_MOC_LITERAL(74, 1027, 22), // "TransitionFullyStopped"
QT_MOC_LITERAL(75, 1050, 22), // "TriggerQuickTransition"
QT_MOC_LITERAL(76, 1073, 20), // "SetDeinterlacingMode"
QT_MOC_LITERAL(77, 1094, 21), // "SetDeinterlacingOrder"
QT_MOC_LITERAL(78, 1116, 14), // "SetScaleFilter"
QT_MOC_LITERAL(79, 1131, 13), // "IconActivated"
QT_MOC_LITERAL(80, 1145, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(81, 1179, 6), // "reason"
QT_MOC_LITERAL(82, 1186, 10), // "SetShowing"
QT_MOC_LITERAL(83, 1197, 7), // "showing"
QT_MOC_LITERAL(84, 1205, 14), // "ToggleShowHide"
QT_MOC_LITERAL(85, 1220, 16), // "HideAudioControl"
QT_MOC_LITERAL(86, 1237, 22), // "UnhideAllAudioControls"
QT_MOC_LITERAL(87, 1260, 15), // "ToggleHideMixer"
QT_MOC_LITERAL(88, 1276, 17), // "MixerRenameSource"
QT_MOC_LITERAL(89, 1294, 46), // "on_vMixerScrollArea_customCon..."
QT_MOC_LITERAL(90, 1341, 46), // "on_hMixerScrollArea_customCon..."
QT_MOC_LITERAL(91, 1388, 29), // "on_actionCopySource_triggered"
QT_MOC_LITERAL(92, 1418, 27), // "on_actionPasteRef_triggered"
QT_MOC_LITERAL(93, 1446, 27), // "on_actionPasteDup_triggered"
QT_MOC_LITERAL(94, 1474, 30), // "on_actionCopyFilters_triggered"
QT_MOC_LITERAL(95, 1505, 31), // "on_actionPasteFilters_triggered"
QT_MOC_LITERAL(96, 1537, 38), // "on_actionFullscreenInterface_..."
QT_MOC_LITERAL(97, 1576, 34), // "on_actionShow_Recordings_trig..."
QT_MOC_LITERAL(98, 1611, 24), // "on_actionRemux_triggered"
QT_MOC_LITERAL(99, 1636, 28), // "on_action_Settings_triggered"
QT_MOC_LITERAL(100, 1665, 37), // "on_actionAdvAudioProperties_t..."
QT_MOC_LITERAL(101, 1703, 24), // "on_advAudioProps_clicked"
QT_MOC_LITERAL(102, 1728, 26), // "on_advAudioProps_destroyed"
QT_MOC_LITERAL(103, 1755, 27), // "on_actionShowLogs_triggered"
QT_MOC_LITERAL(104, 1783, 35), // "on_actionUploadCurrentLog_tri..."
QT_MOC_LITERAL(105, 1819, 32), // "on_actionUploadLastLog_triggered"
QT_MOC_LITERAL(106, 1852, 33), // "on_actionViewCurrentLog_trigg..."
QT_MOC_LITERAL(107, 1886, 34), // "on_actionCheckForUpdates_trig..."
QT_MOC_LITERAL(108, 1921, 32), // "on_actionShowCrashLogs_triggered"
QT_MOC_LITERAL(109, 1954, 37), // "on_actionUploadLastCrashLog_t..."
QT_MOC_LITERAL(110, 1992, 32), // "on_actionEditTransform_triggered"
QT_MOC_LITERAL(111, 2025, 32), // "on_actionCopyTransform_triggered"
QT_MOC_LITERAL(112, 2058, 33), // "on_actionPasteTransform_trigg..."
QT_MOC_LITERAL(113, 2092, 29), // "on_actionRotate90CW_triggered"
QT_MOC_LITERAL(114, 2122, 30), // "on_actionRotate90CCW_triggered"
QT_MOC_LITERAL(115, 2153, 28), // "on_actionRotate180_triggered"
QT_MOC_LITERAL(116, 2182, 33), // "on_actionFlipHorizontal_trigg..."
QT_MOC_LITERAL(117, 2216, 31), // "on_actionFlipVertical_triggered"
QT_MOC_LITERAL(118, 2248, 30), // "on_actionFitToScreen_triggered"
QT_MOC_LITERAL(119, 2279, 34), // "on_actionStretchToScreen_trig..."
QT_MOC_LITERAL(120, 2314, 33), // "on_actionCenterToScreen_trigg..."
QT_MOC_LITERAL(121, 2348, 28), // "on_scenes_currentItemChanged"
QT_MOC_LITERAL(122, 2377, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(123, 2394, 7), // "current"
QT_MOC_LITERAL(124, 2402, 4), // "prev"
QT_MOC_LITERAL(125, 2407, 36), // "on_scenes_customContextMenuRe..."
QT_MOC_LITERAL(126, 2444, 3), // "pos"
QT_MOC_LITERAL(127, 2448, 27), // "on_actionAddScene_triggered"
QT_MOC_LITERAL(128, 2476, 30), // "on_actionRemoveScene_triggered"
QT_MOC_LITERAL(129, 2507, 26), // "on_actionSceneUp_triggered"
QT_MOC_LITERAL(130, 2534, 28), // "on_actionSceneDown_triggered"
QT_MOC_LITERAL(131, 2563, 37), // "on_sources_customContextMenuR..."
QT_MOC_LITERAL(132, 2601, 27), // "on_scenes_itemDoubleClicked"
QT_MOC_LITERAL(133, 2629, 28), // "on_actionAddSource_triggered"
QT_MOC_LITERAL(134, 2658, 31), // "on_actionRemoveSource_triggered"
QT_MOC_LITERAL(135, 2690, 27), // "on_actionInteract_triggered"
QT_MOC_LITERAL(136, 2718, 35), // "on_actionSourceProperties_tri..."
QT_MOC_LITERAL(137, 2754, 27), // "on_actionSourceUp_triggered"
QT_MOC_LITERAL(138, 2782, 29), // "on_actionSourceDown_triggered"
QT_MOC_LITERAL(139, 2812, 25), // "on_actionMoveUp_triggered"
QT_MOC_LITERAL(140, 2838, 27), // "on_actionMoveDown_triggered"
QT_MOC_LITERAL(141, 2866, 28), // "on_actionMoveToTop_triggered"
QT_MOC_LITERAL(142, 2895, 31), // "on_actionMoveToBottom_triggered"
QT_MOC_LITERAL(143, 2927, 30), // "on_actionLockPreview_triggered"
QT_MOC_LITERAL(144, 2958, 26), // "on_scalingMenu_aboutToShow"
QT_MOC_LITERAL(145, 2985, 30), // "on_actionScaleWindow_triggered"
QT_MOC_LITERAL(146, 3016, 30), // "on_actionScaleCanvas_triggered"
QT_MOC_LITERAL(147, 3047, 30), // "on_actionScaleOutput_triggered"
QT_MOC_LITERAL(148, 3078, 23), // "on_streamButton_clicked"
QT_MOC_LITERAL(149, 3102, 23), // "on_recordButton_clicked"
QT_MOC_LITERAL(150, 3126, 25), // "on_settingsButton_clicked"
QT_MOC_LITERAL(151, 3152, 29), // "on_actionHelpPortal_triggered"
QT_MOC_LITERAL(152, 3182, 26), // "on_actionWebsite_triggered"
QT_MOC_LITERAL(153, 3209, 37), // "on_preview_customContextMenuR..."
QT_MOC_LITERAL(154, 3247, 37), // "on_program_customContextMenuR..."
QT_MOC_LITERAL(155, 3285, 50), // "on_previewDisabledLabel_custo..."
QT_MOC_LITERAL(156, 3336, 37), // "on_actionNewSceneCollection_t..."
QT_MOC_LITERAL(157, 3374, 37), // "on_actionDupSceneCollection_t..."
QT_MOC_LITERAL(158, 3412, 40), // "on_actionRenameSceneCollectio..."
QT_MOC_LITERAL(159, 3453, 40), // "on_actionRemoveSceneCollectio..."
QT_MOC_LITERAL(160, 3494, 40), // "on_actionImportSceneCollectio..."
QT_MOC_LITERAL(161, 3535, 40), // "on_actionExportSceneCollectio..."
QT_MOC_LITERAL(162, 3576, 29), // "on_actionNewProfile_triggered"
QT_MOC_LITERAL(163, 3606, 29), // "on_actionDupProfile_triggered"
QT_MOC_LITERAL(164, 3636, 32), // "on_actionRenameProfile_triggered"
QT_MOC_LITERAL(165, 3669, 32), // "on_actionRemoveProfile_triggered"
QT_MOC_LITERAL(166, 3702, 32), // "on_actionImportProfile_triggered"
QT_MOC_LITERAL(167, 3735, 32), // "on_actionExportProfile_triggered"
QT_MOC_LITERAL(168, 3768, 37), // "on_actionShowSettingsFolder_t..."
QT_MOC_LITERAL(169, 3806, 36), // "on_actionShowProfileFolder_tr..."
QT_MOC_LITERAL(170, 3843, 30), // "on_actionAlwaysOnTop_triggered"
QT_MOC_LITERAL(171, 3874, 32), // "on_toggleListboxToolbars_toggled"
QT_MOC_LITERAL(172, 3907, 7), // "visible"
QT_MOC_LITERAL(173, 3915, 26), // "on_toggleStatusBar_toggled"
QT_MOC_LITERAL(174, 3942, 34), // "on_transitions_currentIndexCh..."
QT_MOC_LITERAL(175, 3977, 5), // "index"
QT_MOC_LITERAL(176, 3983, 24), // "on_transitionAdd_clicked"
QT_MOC_LITERAL(177, 4008, 27), // "on_transitionRemove_clicked"
QT_MOC_LITERAL(178, 4036, 26), // "on_transitionProps_clicked"
QT_MOC_LITERAL(179, 4063, 21), // "on_modeSwitch_clicked"
QT_MOC_LITERAL(180, 4085, 26), // "on_autoConfigure_triggered"
QT_MOC_LITERAL(181, 4112, 18), // "on_stats_triggered"
QT_MOC_LITERAL(182, 4131, 20), // "on_resetUI_triggered"
QT_MOC_LITERAL(183, 4152, 17), // "on_lockUI_toggled"
QT_MOC_LITERAL(184, 4170, 4), // "lock"
QT_MOC_LITERAL(185, 4175, 17), // "logUploadFinished"
QT_MOC_LITERAL(186, 4193, 4), // "text"
QT_MOC_LITERAL(187, 4198, 5), // "error"
QT_MOC_LITERAL(188, 4204, 19), // "updateCheckFinished"
QT_MOC_LITERAL(189, 4224, 19), // "AddSourceFromAction"
QT_MOC_LITERAL(190, 4244, 14), // "MoveSceneToTop"
QT_MOC_LITERAL(191, 4259, 17), // "MoveSceneToBottom"
QT_MOC_LITERAL(192, 4277, 13), // "EditSceneName"
QT_MOC_LITERAL(193, 4291, 17), // "EditSceneItemName"
QT_MOC_LITERAL(194, 4309, 15), // "SceneNameEdited"
QT_MOC_LITERAL(195, 4325, 8), // "QWidget*"
QT_MOC_LITERAL(196, 4334, 6), // "editor"
QT_MOC_LITERAL(197, 4341, 34), // "QAbstractItemDelegate::EndEdi..."
QT_MOC_LITERAL(198, 4376, 7), // "endHint"
QT_MOC_LITERAL(199, 4384, 16), // "OpenSceneFilters"
QT_MOC_LITERAL(200, 4401, 11), // "OpenFilters"
QT_MOC_LITERAL(201, 4413, 20), // "EnablePreviewDisplay"
QT_MOC_LITERAL(202, 4434, 6), // "enable"
QT_MOC_LITERAL(203, 4441, 13), // "TogglePreview"
QT_MOC_LITERAL(204, 4455, 7), // "NudgeUp"
QT_MOC_LITERAL(205, 4463, 9), // "NudgeDown"
QT_MOC_LITERAL(206, 4473, 9), // "NudgeLeft"
QT_MOC_LITERAL(207, 4483, 10), // "NudgeRight"
QT_MOC_LITERAL(208, 4494, 26), // "OpenStudioProgramProjector"
QT_MOC_LITERAL(209, 4521, 20), // "OpenPreviewProjector"
QT_MOC_LITERAL(210, 4542, 19), // "OpenSourceProjector"
QT_MOC_LITERAL(211, 4562, 22), // "OpenMultiviewProjector"
QT_MOC_LITERAL(212, 4585, 18), // "OpenSceneProjector"
QT_MOC_LITERAL(213, 4604, 23), // "OpenStudioProgramWindow"
QT_MOC_LITERAL(214, 4628, 17), // "OpenPreviewWindow"
QT_MOC_LITERAL(215, 4646, 16), // "OpenSourceWindow"
QT_MOC_LITERAL(216, 4663, 19), // "OpenMultiviewWindow"
QT_MOC_LITERAL(217, 4683, 15), // "OpenSceneWindow"
QT_MOC_LITERAL(218, 4699, 12), // "DeferredLoad"
QT_MOC_LITERAL(219, 4712, 4), // "file"
QT_MOC_LITERAL(220, 4717, 12), // "requeueCount"
QT_MOC_LITERAL(221, 4730, 36), // "StackedMixerAreaContextMenuRe..."
QT_MOC_LITERAL(222, 4767, 33) // "on_actionResetTransform_trigg..."

    },
    "OBSBasic\0update_scenes\0\0DeferSaveBegin\0"
    "DeferSaveEnd\0setting\0sceneSwitch\0"
    "on_pushButton_save_clicked\0"
    "on_pushButton_reset_clicked\0StartStreaming\0"
    "StopStreaming\0ForceStopStreaming\0"
    "StreamDelayStarting\0sec\0StreamDelayStopping\0"
    "StreamingStart\0StreamStopping\0"
    "StreamingStop\0errorcode\0last_error\0"
    "StartRecording\0StopRecording\0"
    "RecordingStart\0RecordStopping\0"
    "RecordingStop\0code\0StartReplayBuffer\0"
    "StopReplayBuffer\0ReplayBufferStart\0"
    "ReplayBufferSave\0ReplayBufferStopping\0"
    "ReplayBufferStop\0SaveProjectDeferred\0"
    "SaveProject\0SetTransition\0OBSSource\0"
    "transition\0TransitionToScene\0OBSScene\0"
    "scene\0force\0direct\0quickTransition\0"
    "SetCurrentScene\0AddSceneCollection\0"
    "create_new\0name\0AddSceneItem\0OBSSceneItem\0"
    "item\0RemoveSceneItem\0AddScene\0source\0"
    "RemoveScene\0RenameSources\0newName\0"
    "prevName\0SelectSceneItem\0select\0"
    "ActivateAudioSource\0DeactivateAudioSource\0"
    "DuplicateSelectedScene\0RemoveSelectedScene\0"
    "RemoveSelectedSceneItem\0ToggleAlwaysOnTop\0"
    "ReorderSources\0ProcessHotkey\0obs_hotkey_id\0"
    "id\0pressed\0AddTransition\0RenameTransition\0"
    "TransitionClicked\0TransitionStopped\0"
    "TransitionFullyStopped\0TriggerQuickTransition\0"
    "SetDeinterlacingMode\0SetDeinterlacingOrder\0"
    "SetScaleFilter\0IconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0SetShowing\0showing\0ToggleShowHide\0"
    "HideAudioControl\0UnhideAllAudioControls\0"
    "ToggleHideMixer\0MixerRenameSource\0"
    "on_vMixerScrollArea_customContextMenuRequested\0"
    "on_hMixerScrollArea_customContextMenuRequested\0"
    "on_actionCopySource_triggered\0"
    "on_actionPasteRef_triggered\0"
    "on_actionPasteDup_triggered\0"
    "on_actionCopyFilters_triggered\0"
    "on_actionPasteFilters_triggered\0"
    "on_actionFullscreenInterface_triggered\0"
    "on_actionShow_Recordings_triggered\0"
    "on_actionRemux_triggered\0"
    "on_action_Settings_triggered\0"
    "on_actionAdvAudioProperties_triggered\0"
    "on_advAudioProps_clicked\0"
    "on_advAudioProps_destroyed\0"
    "on_actionShowLogs_triggered\0"
    "on_actionUploadCurrentLog_triggered\0"
    "on_actionUploadLastLog_triggered\0"
    "on_actionViewCurrentLog_triggered\0"
    "on_actionCheckForUpdates_triggered\0"
    "on_actionShowCrashLogs_triggered\0"
    "on_actionUploadLastCrashLog_triggered\0"
    "on_actionEditTransform_triggered\0"
    "on_actionCopyTransform_triggered\0"
    "on_actionPasteTransform_triggered\0"
    "on_actionRotate90CW_triggered\0"
    "on_actionRotate90CCW_triggered\0"
    "on_actionRotate180_triggered\0"
    "on_actionFlipHorizontal_triggered\0"
    "on_actionFlipVertical_triggered\0"
    "on_actionFitToScreen_triggered\0"
    "on_actionStretchToScreen_triggered\0"
    "on_actionCenterToScreen_triggered\0"
    "on_scenes_currentItemChanged\0"
    "QListWidgetItem*\0current\0prev\0"
    "on_scenes_customContextMenuRequested\0"
    "pos\0on_actionAddScene_triggered\0"
    "on_actionRemoveScene_triggered\0"
    "on_actionSceneUp_triggered\0"
    "on_actionSceneDown_triggered\0"
    "on_sources_customContextMenuRequested\0"
    "on_scenes_itemDoubleClicked\0"
    "on_actionAddSource_triggered\0"
    "on_actionRemoveSource_triggered\0"
    "on_actionInteract_triggered\0"
    "on_actionSourceProperties_triggered\0"
    "on_actionSourceUp_triggered\0"
    "on_actionSourceDown_triggered\0"
    "on_actionMoveUp_triggered\0"
    "on_actionMoveDown_triggered\0"
    "on_actionMoveToTop_triggered\0"
    "on_actionMoveToBottom_triggered\0"
    "on_actionLockPreview_triggered\0"
    "on_scalingMenu_aboutToShow\0"
    "on_actionScaleWindow_triggered\0"
    "on_actionScaleCanvas_triggered\0"
    "on_actionScaleOutput_triggered\0"
    "on_streamButton_clicked\0on_recordButton_clicked\0"
    "on_settingsButton_clicked\0"
    "on_actionHelpPortal_triggered\0"
    "on_actionWebsite_triggered\0"
    "on_preview_customContextMenuRequested\0"
    "on_program_customContextMenuRequested\0"
    "on_previewDisabledLabel_customContextMenuRequested\0"
    "on_actionNewSceneCollection_triggered\0"
    "on_actionDupSceneCollection_triggered\0"
    "on_actionRenameSceneCollection_triggered\0"
    "on_actionRemoveSceneCollection_triggered\0"
    "on_actionImportSceneCollection_triggered\0"
    "on_actionExportSceneCollection_triggered\0"
    "on_actionNewProfile_triggered\0"
    "on_actionDupProfile_triggered\0"
    "on_actionRenameProfile_triggered\0"
    "on_actionRemoveProfile_triggered\0"
    "on_actionImportProfile_triggered\0"
    "on_actionExportProfile_triggered\0"
    "on_actionShowSettingsFolder_triggered\0"
    "on_actionShowProfileFolder_triggered\0"
    "on_actionAlwaysOnTop_triggered\0"
    "on_toggleListboxToolbars_toggled\0"
    "visible\0on_toggleStatusBar_toggled\0"
    "on_transitions_currentIndexChanged\0"
    "index\0on_transitionAdd_clicked\0"
    "on_transitionRemove_clicked\0"
    "on_transitionProps_clicked\0"
    "on_modeSwitch_clicked\0on_autoConfigure_triggered\0"
    "on_stats_triggered\0on_resetUI_triggered\0"
    "on_lockUI_toggled\0lock\0logUploadFinished\0"
    "text\0error\0updateCheckFinished\0"
    "AddSourceFromAction\0MoveSceneToTop\0"
    "MoveSceneToBottom\0EditSceneName\0"
    "EditSceneItemName\0SceneNameEdited\0"
    "QWidget*\0editor\0QAbstractItemDelegate::EndEditHint\0"
    "endHint\0OpenSceneFilters\0OpenFilters\0"
    "EnablePreviewDisplay\0enable\0TogglePreview\0"
    "NudgeUp\0NudgeDown\0NudgeLeft\0NudgeRight\0"
    "OpenStudioProgramProjector\0"
    "OpenPreviewProjector\0OpenSourceProjector\0"
    "OpenMultiviewProjector\0OpenSceneProjector\0"
    "OpenStudioProgramWindow\0OpenPreviewWindow\0"
    "OpenSourceWindow\0OpenMultiviewWindow\0"
    "OpenSceneWindow\0DeferredLoad\0file\0"
    "requeueCount\0StackedMixerAreaContextMenuRequested\0"
    "on_actionResetTransform_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     189,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  959,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  960,    2, 0x0a /* Public */,
       4,    0,  961,    2, 0x0a /* Public */,
       5,    0,  962,    2, 0x0a /* Public */,
       6,    0,  963,    2, 0x0a /* Public */,
       7,    0,  964,    2, 0x0a /* Public */,
       8,    0,  965,    2, 0x0a /* Public */,
       9,    0,  966,    2, 0x0a /* Public */,
      10,    0,  967,    2, 0x0a /* Public */,
      11,    0,  968,    2, 0x0a /* Public */,
      12,    1,  969,    2, 0x0a /* Public */,
      14,    1,  972,    2, 0x0a /* Public */,
      15,    0,  975,    2, 0x0a /* Public */,
      16,    0,  976,    2, 0x0a /* Public */,
      17,    2,  977,    2, 0x0a /* Public */,
      20,    0,  982,    2, 0x0a /* Public */,
      21,    0,  983,    2, 0x0a /* Public */,
      22,    0,  984,    2, 0x0a /* Public */,
      23,    0,  985,    2, 0x0a /* Public */,
      24,    1,  986,    2, 0x0a /* Public */,
      26,    0,  989,    2, 0x0a /* Public */,
      27,    0,  990,    2, 0x0a /* Public */,
      28,    0,  991,    2, 0x0a /* Public */,
      29,    0,  992,    2, 0x0a /* Public */,
      30,    0,  993,    2, 0x0a /* Public */,
      31,    1,  994,    2, 0x0a /* Public */,
      32,    0,  997,    2, 0x0a /* Public */,
      33,    0,  998,    2, 0x0a /* Public */,
      34,    1,  999,    2, 0x0a /* Public */,
      37,    3, 1002,    2, 0x0a /* Public */,
      37,    2, 1009,    2, 0x2a /* Public | MethodCloned */,
      37,    1, 1014,    2, 0x2a /* Public | MethodCloned */,
      37,    4, 1017,    2, 0x0a /* Public */,
      37,    3, 1026,    2, 0x2a /* Public | MethodCloned */,
      37,    2, 1033,    2, 0x2a /* Public | MethodCloned */,
      37,    1, 1038,    2, 0x2a /* Public | MethodCloned */,
      43,    3, 1041,    2, 0x0a /* Public */,
      43,    2, 1048,    2, 0x2a /* Public | MethodCloned */,
      43,    1, 1053,    2, 0x2a /* Public | MethodCloned */,
      44,    2, 1056,    2, 0x0a /* Public */,
      44,    1, 1061,    2, 0x2a /* Public | MethodCloned */,
      47,    1, 1064,    2, 0x08 /* Private */,
      50,    1, 1067,    2, 0x08 /* Private */,
      51,    1, 1070,    2, 0x08 /* Private */,
      53,    1, 1073,    2, 0x08 /* Private */,
      54,    3, 1076,    2, 0x08 /* Private */,
      57,    3, 1083,    2, 0x08 /* Private */,
      59,    1, 1090,    2, 0x08 /* Private */,
      60,    1, 1093,    2, 0x08 /* Private */,
      61,    0, 1096,    2, 0x08 /* Private */,
      62,    0, 1097,    2, 0x08 /* Private */,
      63,    0, 1098,    2, 0x08 /* Private */,
      64,    0, 1099,    2, 0x08 /* Private */,
      65,    1, 1100,    2, 0x08 /* Private */,
      66,    2, 1103,    2, 0x08 /* Private */,
      70,    0, 1108,    2, 0x08 /* Private */,
      71,    0, 1109,    2, 0x08 /* Private */,
      72,    0, 1110,    2, 0x08 /* Private */,
      73,    0, 1111,    2, 0x08 /* Private */,
      74,    0, 1112,    2, 0x08 /* Private */,
      75,    1, 1113,    2, 0x08 /* Private */,
      76,    0, 1116,    2, 0x08 /* Private */,
      77,    0, 1117,    2, 0x08 /* Private */,
      78,    0, 1118,    2, 0x08 /* Private */,
      79,    1, 1119,    2, 0x08 /* Private */,
      82,    1, 1122,    2, 0x08 /* Private */,
      84,    0, 1125,    2, 0x08 /* Private */,
      85,    0, 1126,    2, 0x08 /* Private */,
      86,    0, 1127,    2, 0x08 /* Private */,
      87,    0, 1128,    2, 0x08 /* Private */,
      88,    0, 1129,    2, 0x08 /* Private */,
      89,    0, 1130,    2, 0x08 /* Private */,
      90,    0, 1131,    2, 0x08 /* Private */,
      91,    0, 1132,    2, 0x08 /* Private */,
      92,    0, 1133,    2, 0x08 /* Private */,
      93,    0, 1134,    2, 0x08 /* Private */,
      94,    0, 1135,    2, 0x08 /* Private */,
      95,    0, 1136,    2, 0x08 /* Private */,
      96,    0, 1137,    2, 0x08 /* Private */,
      97,    0, 1138,    2, 0x08 /* Private */,
      98,    0, 1139,    2, 0x08 /* Private */,
      99,    0, 1140,    2, 0x08 /* Private */,
     100,    0, 1141,    2, 0x08 /* Private */,
     101,    0, 1142,    2, 0x08 /* Private */,
     102,    0, 1143,    2, 0x08 /* Private */,
     103,    0, 1144,    2, 0x08 /* Private */,
     104,    0, 1145,    2, 0x08 /* Private */,
     105,    0, 1146,    2, 0x08 /* Private */,
     106,    0, 1147,    2, 0x08 /* Private */,
     107,    0, 1148,    2, 0x08 /* Private */,
     108,    0, 1149,    2, 0x08 /* Private */,
     109,    0, 1150,    2, 0x08 /* Private */,
     110,    0, 1151,    2, 0x08 /* Private */,
     111,    0, 1152,    2, 0x08 /* Private */,
     112,    0, 1153,    2, 0x08 /* Private */,
     113,    0, 1154,    2, 0x08 /* Private */,
     114,    0, 1155,    2, 0x08 /* Private */,
     115,    0, 1156,    2, 0x08 /* Private */,
     116,    0, 1157,    2, 0x08 /* Private */,
     117,    0, 1158,    2, 0x08 /* Private */,
     118,    0, 1159,    2, 0x08 /* Private */,
     119,    0, 1160,    2, 0x08 /* Private */,
     120,    0, 1161,    2, 0x08 /* Private */,
     121,    2, 1162,    2, 0x08 /* Private */,
     125,    1, 1167,    2, 0x08 /* Private */,
     127,    0, 1170,    2, 0x08 /* Private */,
     128,    0, 1171,    2, 0x08 /* Private */,
     129,    0, 1172,    2, 0x08 /* Private */,
     130,    0, 1173,    2, 0x08 /* Private */,
     131,    1, 1174,    2, 0x08 /* Private */,
     132,    1, 1177,    2, 0x08 /* Private */,
     133,    0, 1180,    2, 0x08 /* Private */,
     134,    0, 1181,    2, 0x08 /* Private */,
     135,    0, 1182,    2, 0x08 /* Private */,
     136,    0, 1183,    2, 0x08 /* Private */,
     137,    0, 1184,    2, 0x08 /* Private */,
     138,    0, 1185,    2, 0x08 /* Private */,
     139,    0, 1186,    2, 0x08 /* Private */,
     140,    0, 1187,    2, 0x08 /* Private */,
     141,    0, 1188,    2, 0x08 /* Private */,
     142,    0, 1189,    2, 0x08 /* Private */,
     143,    0, 1190,    2, 0x08 /* Private */,
     144,    0, 1191,    2, 0x08 /* Private */,
     145,    0, 1192,    2, 0x08 /* Private */,
     146,    0, 1193,    2, 0x08 /* Private */,
     147,    0, 1194,    2, 0x08 /* Private */,
     148,    0, 1195,    2, 0x08 /* Private */,
     149,    0, 1196,    2, 0x08 /* Private */,
     150,    0, 1197,    2, 0x08 /* Private */,
     151,    0, 1198,    2, 0x08 /* Private */,
     152,    0, 1199,    2, 0x08 /* Private */,
     153,    1, 1200,    2, 0x08 /* Private */,
     154,    1, 1203,    2, 0x08 /* Private */,
     155,    1, 1206,    2, 0x08 /* Private */,
     156,    0, 1209,    2, 0x08 /* Private */,
     157,    0, 1210,    2, 0x08 /* Private */,
     158,    0, 1211,    2, 0x08 /* Private */,
     159,    0, 1212,    2, 0x08 /* Private */,
     160,    0, 1213,    2, 0x08 /* Private */,
     161,    0, 1214,    2, 0x08 /* Private */,
     162,    0, 1215,    2, 0x08 /* Private */,
     163,    0, 1216,    2, 0x08 /* Private */,
     164,    0, 1217,    2, 0x08 /* Private */,
     165,    0, 1218,    2, 0x08 /* Private */,
     166,    0, 1219,    2, 0x08 /* Private */,
     167,    0, 1220,    2, 0x08 /* Private */,
     168,    0, 1221,    2, 0x08 /* Private */,
     169,    0, 1222,    2, 0x08 /* Private */,
     170,    0, 1223,    2, 0x08 /* Private */,
     171,    1, 1224,    2, 0x08 /* Private */,
     173,    1, 1227,    2, 0x08 /* Private */,
     174,    1, 1230,    2, 0x08 /* Private */,
     176,    0, 1233,    2, 0x08 /* Private */,
     177,    0, 1234,    2, 0x08 /* Private */,
     178,    0, 1235,    2, 0x08 /* Private */,
     179,    0, 1236,    2, 0x08 /* Private */,
     180,    0, 1237,    2, 0x08 /* Private */,
     181,    0, 1238,    2, 0x08 /* Private */,
     182,    0, 1239,    2, 0x08 /* Private */,
     183,    1, 1240,    2, 0x08 /* Private */,
     185,    2, 1243,    2, 0x08 /* Private */,
     188,    0, 1248,    2, 0x08 /* Private */,
     189,    0, 1249,    2, 0x08 /* Private */,
     190,    0, 1250,    2, 0x08 /* Private */,
     191,    0, 1251,    2, 0x08 /* Private */,
     192,    0, 1252,    2, 0x08 /* Private */,
     193,    0, 1253,    2, 0x08 /* Private */,
     194,    2, 1254,    2, 0x08 /* Private */,
     199,    0, 1259,    2, 0x08 /* Private */,
     200,    0, 1260,    2, 0x08 /* Private */,
     201,    1, 1261,    2, 0x08 /* Private */,
     203,    0, 1264,    2, 0x08 /* Private */,
     204,    0, 1265,    2, 0x08 /* Private */,
     205,    0, 1266,    2, 0x08 /* Private */,
     206,    0, 1267,    2, 0x08 /* Private */,
     207,    0, 1268,    2, 0x08 /* Private */,
     208,    0, 1269,    2, 0x08 /* Private */,
     209,    0, 1270,    2, 0x08 /* Private */,
     210,    0, 1271,    2, 0x08 /* Private */,
     211,    0, 1272,    2, 0x08 /* Private */,
     212,    0, 1273,    2, 0x08 /* Private */,
     213,    0, 1274,    2, 0x08 /* Private */,
     214,    0, 1275,    2, 0x08 /* Private */,
     215,    0, 1276,    2, 0x08 /* Private */,
     216,    0, 1277,    2, 0x08 /* Private */,
     217,    0, 1278,    2, 0x08 /* Private */,
     218,    2, 1279,    2, 0x08 /* Private */,
     221,    0, 1284,    2, 0x08 /* Private */,
     222,    0, 1285,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 38, QMetaType::Bool, QMetaType::Bool,   39,   40,   41,
    QMetaType::Void, 0x80000000 | 38, QMetaType::Bool,   39,   40,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 35, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   39,   40,   41,   42,
    QMetaType::Void, 0x80000000 | 35, QMetaType::Bool, QMetaType::Bool,   39,   40,   41,
    QMetaType::Void, 0x80000000 | 35, QMetaType::Bool,   39,   40,
    QMetaType::Void, 0x80000000 | 35,   39,
    QMetaType::Void, 0x80000000 | 35, QMetaType::Bool, QMetaType::Bool,   39,   40,   41,
    QMetaType::Void, 0x80000000 | 35, QMetaType::Bool,   39,   40,
    QMetaType::Void, 0x80000000 | 35,   39,
    QMetaType::Bool, QMetaType::Bool, QMetaType::QString,   45,   46,
    QMetaType::Bool, QMetaType::Bool,   45,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, 0x80000000 | 35,   52,
    QMetaType::Void, 0x80000000 | 35,   52,
    QMetaType::Void, 0x80000000 | 35, QMetaType::QString, QMetaType::QString,   52,   55,   56,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 48, QMetaType::Bool,   39,   49,   58,
    QMetaType::Void, 0x80000000 | 35,   52,
    QMetaType::Void, 0x80000000 | 35,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 67, QMetaType::Bool,   68,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   68,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 80,   81,
    QMetaType::Void, QMetaType::Bool,   83,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 122, 0x80000000 | 122,  123,  124,
    QMetaType::Void, QMetaType::QPoint,  126,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  126,
    QMetaType::Void, 0x80000000 | 122,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  126,
    QMetaType::Void, QMetaType::QPoint,  126,
    QMetaType::Void, QMetaType::QPoint,  126,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Bool,  172,
    QMetaType::Void, QMetaType::Int,  175,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  184,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  186,  187,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 195, 0x80000000 | 197,  196,  198,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  202,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,  219,  220,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OBSBasic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSBasic *_t = static_cast<OBSBasic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_scenes(); break;
        case 1: _t->DeferSaveBegin(); break;
        case 2: _t->DeferSaveEnd(); break;
        case 3: _t->setting(); break;
        case 4: _t->sceneSwitch(); break;
        case 5: _t->on_pushButton_save_clicked(); break;
        case 6: _t->on_pushButton_reset_clicked(); break;
        case 7: _t->StartStreaming(); break;
        case 8: _t->StopStreaming(); break;
        case 9: _t->ForceStopStreaming(); break;
        case 10: _t->StreamDelayStarting((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->StreamDelayStopping((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->StreamingStart(); break;
        case 13: _t->StreamStopping(); break;
        case 14: _t->StreamingStop((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->StartRecording(); break;
        case 16: _t->StopRecording(); break;
        case 17: _t->RecordingStart(); break;
        case 18: _t->RecordStopping(); break;
        case 19: _t->RecordingStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->StartReplayBuffer(); break;
        case 21: _t->StopReplayBuffer(); break;
        case 22: _t->ReplayBufferStart(); break;
        case 23: _t->ReplayBufferSave(); break;
        case 24: _t->ReplayBufferStopping(); break;
        case 25: _t->ReplayBufferStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->SaveProjectDeferred(); break;
        case 27: _t->SaveProject(); break;
        case 28: _t->SetTransition((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 29: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 30: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 32: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 33: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 34: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 36: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 37: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 38: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 39: { bool _r = _t->AddSceneCollection((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->AddSceneCollection((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: _t->AddSceneItem((*reinterpret_cast< OBSSceneItem(*)>(_a[1]))); break;
        case 42: _t->RemoveSceneItem((*reinterpret_cast< OBSSceneItem(*)>(_a[1]))); break;
        case 43: _t->AddScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 44: _t->RemoveScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 45: _t->RenameSources((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 46: _t->SelectSceneItem((*reinterpret_cast< OBSScene(*)>(_a[1])),(*reinterpret_cast< OBSSceneItem(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 47: _t->ActivateAudioSource((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 48: _t->DeactivateAudioSource((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 49: _t->DuplicateSelectedScene(); break;
        case 50: _t->RemoveSelectedScene(); break;
        case 51: _t->RemoveSelectedSceneItem(); break;
        case 52: _t->ToggleAlwaysOnTop(); break;
        case 53: _t->ReorderSources((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 54: _t->ProcessHotkey((*reinterpret_cast< obs_hotkey_id(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 55: _t->AddTransition(); break;
        case 56: _t->RenameTransition(); break;
        case 57: _t->TransitionClicked(); break;
        case 58: _t->TransitionStopped(); break;
        case 59: _t->TransitionFullyStopped(); break;
        case 60: _t->TriggerQuickTransition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->SetDeinterlacingMode(); break;
        case 62: _t->SetDeinterlacingOrder(); break;
        case 63: _t->SetScaleFilter(); break;
        case 64: _t->IconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 65: _t->SetShowing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: _t->ToggleShowHide(); break;
        case 67: _t->HideAudioControl(); break;
        case 68: _t->UnhideAllAudioControls(); break;
        case 69: _t->ToggleHideMixer(); break;
        case 70: _t->MixerRenameSource(); break;
        case 71: _t->on_vMixerScrollArea_customContextMenuRequested(); break;
        case 72: _t->on_hMixerScrollArea_customContextMenuRequested(); break;
        case 73: _t->on_actionCopySource_triggered(); break;
        case 74: _t->on_actionPasteRef_triggered(); break;
        case 75: _t->on_actionPasteDup_triggered(); break;
        case 76: _t->on_actionCopyFilters_triggered(); break;
        case 77: _t->on_actionPasteFilters_triggered(); break;
        case 78: _t->on_actionFullscreenInterface_triggered(); break;
        case 79: _t->on_actionShow_Recordings_triggered(); break;
        case 80: _t->on_actionRemux_triggered(); break;
        case 81: _t->on_action_Settings_triggered(); break;
        case 82: _t->on_actionAdvAudioProperties_triggered(); break;
        case 83: _t->on_advAudioProps_clicked(); break;
        case 84: _t->on_advAudioProps_destroyed(); break;
        case 85: _t->on_actionShowLogs_triggered(); break;
        case 86: _t->on_actionUploadCurrentLog_triggered(); break;
        case 87: _t->on_actionUploadLastLog_triggered(); break;
        case 88: _t->on_actionViewCurrentLog_triggered(); break;
        case 89: _t->on_actionCheckForUpdates_triggered(); break;
        case 90: _t->on_actionShowCrashLogs_triggered(); break;
        case 91: _t->on_actionUploadLastCrashLog_triggered(); break;
        case 92: _t->on_actionEditTransform_triggered(); break;
        case 93: _t->on_actionCopyTransform_triggered(); break;
        case 94: _t->on_actionPasteTransform_triggered(); break;
        case 95: _t->on_actionRotate90CW_triggered(); break;
        case 96: _t->on_actionRotate90CCW_triggered(); break;
        case 97: _t->on_actionRotate180_triggered(); break;
        case 98: _t->on_actionFlipHorizontal_triggered(); break;
        case 99: _t->on_actionFlipVertical_triggered(); break;
        case 100: _t->on_actionFitToScreen_triggered(); break;
        case 101: _t->on_actionStretchToScreen_triggered(); break;
        case 102: _t->on_actionCenterToScreen_triggered(); break;
        case 103: _t->on_scenes_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 104: _t->on_scenes_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 105: _t->on_actionAddScene_triggered(); break;
        case 106: _t->on_actionRemoveScene_triggered(); break;
        case 107: _t->on_actionSceneUp_triggered(); break;
        case 108: _t->on_actionSceneDown_triggered(); break;
        case 109: _t->on_sources_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 110: _t->on_scenes_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 111: _t->on_actionAddSource_triggered(); break;
        case 112: _t->on_actionRemoveSource_triggered(); break;
        case 113: _t->on_actionInteract_triggered(); break;
        case 114: _t->on_actionSourceProperties_triggered(); break;
        case 115: _t->on_actionSourceUp_triggered(); break;
        case 116: _t->on_actionSourceDown_triggered(); break;
        case 117: _t->on_actionMoveUp_triggered(); break;
        case 118: _t->on_actionMoveDown_triggered(); break;
        case 119: _t->on_actionMoveToTop_triggered(); break;
        case 120: _t->on_actionMoveToBottom_triggered(); break;
        case 121: _t->on_actionLockPreview_triggered(); break;
        case 122: _t->on_scalingMenu_aboutToShow(); break;
        case 123: _t->on_actionScaleWindow_triggered(); break;
        case 124: _t->on_actionScaleCanvas_triggered(); break;
        case 125: _t->on_actionScaleOutput_triggered(); break;
        case 126: _t->on_streamButton_clicked(); break;
        case 127: _t->on_recordButton_clicked(); break;
        case 128: _t->on_settingsButton_clicked(); break;
        case 129: _t->on_actionHelpPortal_triggered(); break;
        case 130: _t->on_actionWebsite_triggered(); break;
        case 131: _t->on_preview_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 132: _t->on_program_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 133: _t->on_previewDisabledLabel_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 134: _t->on_actionNewSceneCollection_triggered(); break;
        case 135: _t->on_actionDupSceneCollection_triggered(); break;
        case 136: _t->on_actionRenameSceneCollection_triggered(); break;
        case 137: _t->on_actionRemoveSceneCollection_triggered(); break;
        case 138: _t->on_actionImportSceneCollection_triggered(); break;
        case 139: _t->on_actionExportSceneCollection_triggered(); break;
        case 140: _t->on_actionNewProfile_triggered(); break;
        case 141: _t->on_actionDupProfile_triggered(); break;
        case 142: _t->on_actionRenameProfile_triggered(); break;
        case 143: _t->on_actionRemoveProfile_triggered(); break;
        case 144: _t->on_actionImportProfile_triggered(); break;
        case 145: _t->on_actionExportProfile_triggered(); break;
        case 146: _t->on_actionShowSettingsFolder_triggered(); break;
        case 147: _t->on_actionShowProfileFolder_triggered(); break;
        case 148: _t->on_actionAlwaysOnTop_triggered(); break;
        case 149: _t->on_toggleListboxToolbars_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 150: _t->on_toggleStatusBar_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 151: _t->on_transitions_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 152: _t->on_transitionAdd_clicked(); break;
        case 153: _t->on_transitionRemove_clicked(); break;
        case 154: _t->on_transitionProps_clicked(); break;
        case 155: _t->on_modeSwitch_clicked(); break;
        case 156: _t->on_autoConfigure_triggered(); break;
        case 157: _t->on_stats_triggered(); break;
        case 158: _t->on_resetUI_triggered(); break;
        case 159: _t->on_lockUI_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 160: _t->logUploadFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 161: _t->updateCheckFinished(); break;
        case 162: _t->AddSourceFromAction(); break;
        case 163: _t->MoveSceneToTop(); break;
        case 164: _t->MoveSceneToBottom(); break;
        case 165: _t->EditSceneName(); break;
        case 166: _t->EditSceneItemName(); break;
        case 167: _t->SceneNameEdited((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 168: _t->OpenSceneFilters(); break;
        case 169: _t->OpenFilters(); break;
        case 170: _t->EnablePreviewDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 171: _t->TogglePreview(); break;
        case 172: _t->NudgeUp(); break;
        case 173: _t->NudgeDown(); break;
        case 174: _t->NudgeLeft(); break;
        case 175: _t->NudgeRight(); break;
        case 176: _t->OpenStudioProgramProjector(); break;
        case 177: _t->OpenPreviewProjector(); break;
        case 178: _t->OpenSourceProjector(); break;
        case 179: _t->OpenMultiviewProjector(); break;
        case 180: _t->OpenSceneProjector(); break;
        case 181: _t->OpenStudioProgramWindow(); break;
        case 182: _t->OpenPreviewWindow(); break;
        case 183: _t->OpenSourceWindow(); break;
        case 184: _t->OpenMultiviewWindow(); break;
        case 185: _t->OpenSceneWindow(); break;
        case 186: _t->DeferredLoad((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 187: _t->StackedMixerAreaContextMenuRequested(); break;
        case 188: _t->on_actionResetTransform_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 167:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OBSBasic::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OBSBasic::update_scenes)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OBSBasic::staticMetaObject = {
    { &OBSMainWindow::staticMetaObject, qt_meta_stringdata_OBSBasic.data,
      qt_meta_data_OBSBasic,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSBasic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasic::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasic.stringdata0))
        return static_cast<void*>(const_cast< OBSBasic*>(this));
    return OBSMainWindow::qt_metacast(_clname);
}

int OBSBasic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OBSMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 189)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 189;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 189)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 189;
    }
    return _id;
}

// SIGNAL 0
void OBSBasic::update_scenes()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
