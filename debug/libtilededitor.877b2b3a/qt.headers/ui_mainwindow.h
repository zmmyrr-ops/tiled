/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionResizeMap;
    QAction *actionMapProperties;
    QAction *actionAutoMap;
    QAction *actionShowGrid;
    QAction *actionShowWorldGrid;
    QAction *actionSnapToWorldGrid;
    QAction *actionSaveAs;
    QAction *actionNewTileset;
    QAction *actionClose;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionZoomNormal;
    QAction *actionExportAsImage;
    QAction *actionCut;
    QAction *actionOffsetMap;
    QAction *actionPreferences;
    QAction *actionClearRecentFiles;
    QAction *actionExportAs;
    QAction *actionAddExternalTileset;
    QAction *actionSnapToGrid;
    QAction *actionCloseAll;
    QAction *actionDelete;
    QAction *actionHighlightCurrentLayer;
    QAction *actionShowTileObjectOutlines;
    QAction *actionSnapToFineGrid;
    QAction *actionShowTileAnimations;
    QAction *actionReload;
    QAction *actionExport;
    QAction *actionDonate;
    QAction *actionSaveAll;
    QAction *actionDocumentation;
    QAction *actionNoLabels;
    QAction *actionLabelsForSelectedObjects;
    QAction *actionLabelsForAllObjects;
    QAction *actionAutoMapWhileDrawing;
    QAction *actionNewMap;
    QAction *actionPasteInPlace;
    QAction *actionFullScreen;
    QAction *actionSnapToPixels;
    QAction *actionTilesetProperties;
    QAction *actionSnapNothing;
    QAction *actionEditCommands;
    QAction *actionClearView;
    QAction *actionLabelForHoveredObject;
    QAction *actionLoadWorld;
    QAction *actionNewWorld;
    QAction *actionHighlightHoveredObject;
    QAction *actionShowTileCollisionShapes;
    QAction *actionFitInView;
    QAction *actionForum;
    QAction *actionCloseProject;
    QAction *actionClearRecentProjects;
    QAction *actionAddFolderToProject;
    QAction *actionRefreshProjectFolders;
    QAction *actionShowObjectReferences;
    QAction *actionReopenClosedFile;
    QAction *actionProjectProperties;
    QAction *actionOpenFileInProject;
    QAction *actionEnableParallax;
    QAction *actionEnableWorlds;
    QAction *actionNewProject;
    QAction *actionAddAutomappingRulesTileset;
    QAction *actionSearchActions;
    QAction *actionUnloadAllWorlds;
    QAction *actionWorldProperties;
    QAction *actionGoToTile;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuRecentFiles;
    QMenu *menuNew;
    QMenu *menuCommand;
    QMenu *menuRecentProjects;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuMap;
    QMenu *menuView;
    QMenu *menuShowObjectNames;
    QMenu *menuSnapping;
    QMenu *menuTileset;
    QMenu *menuProject;
    QMenu *menuWorld;
    QMenu *menuUnloadWorld;
    QMenu *menuSaveWorld;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(553, 367);
        MainWindow->setAcceptDrops(true);
        MainWindow->setDockOptions(QMainWindow::DockOption::AllowNestedDocks|QMainWindow::DockOption::AllowTabbedDocks|QMainWindow::DockOption::AnimatedDocks);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/16/application-exit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionQuit->setIcon(icon);
        actionQuit->setMenuRole(QAction::MenuRole::QuitRole);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        actionCopy->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/16/edit-copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopy->setIcon(icon1);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        actionPaste->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/16/edit-paste.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPaste->setIcon(icon2);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/16/help-about.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAbout->setIcon(icon3);
        actionAbout->setMenuRole(QAction::MenuRole::AboutRole);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName("actionAboutQt");
        actionAboutQt->setMenuRole(QAction::MenuRole::AboutQtRole);
        actionResizeMap = new QAction(MainWindow);
        actionResizeMap->setObjectName("actionResizeMap");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/16/document-page-setup.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionResizeMap->setIcon(icon4);
        actionMapProperties = new QAction(MainWindow);
        actionMapProperties->setObjectName("actionMapProperties");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/16/document-properties.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMapProperties->setIcon(icon5);
        actionAutoMap = new QAction(MainWindow);
        actionAutoMap->setObjectName("actionAutoMap");
#if QT_CONFIG(shortcut)
        actionAutoMap->setShortcut(QString::fromUtf8("Ctrl+M"));
#endif // QT_CONFIG(shortcut)
        actionShowGrid = new QAction(MainWindow);
        actionShowGrid->setObjectName("actionShowGrid");
        actionShowGrid->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionShowGrid->setShortcut(QString::fromUtf8("Ctrl+G"));
#endif // QT_CONFIG(shortcut)
        actionShowWorldGrid = new QAction(MainWindow);
        actionShowWorldGrid->setObjectName("actionShowWorldGrid");
        actionShowWorldGrid->setCheckable(true);
        actionSnapToWorldGrid = new QAction(MainWindow);
        actionSnapToWorldGrid->setObjectName("actionSnapToWorldGrid");
        actionSnapToWorldGrid->setCheckable(true);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName("actionSaveAs");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/16/document-save-as.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSaveAs->setIcon(icon6);
#if QT_CONFIG(shortcut)
        actionSaveAs->setShortcut(QString::fromUtf8("Ctrl+Shift+S"));
#endif // QT_CONFIG(shortcut)
        actionNewTileset = new QAction(MainWindow);
        actionNewTileset->setObjectName("actionNewTileset");
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName("actionClose");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/16/window-close.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionClose->setIcon(icon7);
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName("actionZoomIn");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/16/zoom-in.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionZoomIn->setIcon(icon8);
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName("actionZoomOut");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/16/zoom-out.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionZoomOut->setIcon(icon9);
        actionZoomNormal = new QAction(MainWindow);
        actionZoomNormal->setObjectName("actionZoomNormal");
        actionZoomNormal->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/16/zoom-original.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionZoomNormal->setIcon(icon10);
#if QT_CONFIG(shortcut)
        actionZoomNormal->setShortcut(QString::fromUtf8("Ctrl+0"));
#endif // QT_CONFIG(shortcut)
        actionExportAsImage = new QAction(MainWindow);
        actionExportAsImage->setObjectName("actionExportAsImage");
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        actionCut->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/16/edit-cut.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCut->setIcon(icon11);
        actionOffsetMap = new QAction(MainWindow);
        actionOffsetMap->setObjectName("actionOffsetMap");
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName("actionPreferences");
        actionPreferences->setMenuRole(QAction::MenuRole::PreferencesRole);
        actionClearRecentFiles = new QAction(MainWindow);
        actionClearRecentFiles->setObjectName("actionClearRecentFiles");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/16/edit-clear.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionClearRecentFiles->setIcon(icon12);
        actionExportAs = new QAction(MainWindow);
        actionExportAs->setObjectName("actionExportAs");
#if QT_CONFIG(shortcut)
        actionExportAs->setShortcut(QString::fromUtf8("Ctrl+Shift+E"));
#endif // QT_CONFIG(shortcut)
        actionAddExternalTileset = new QAction(MainWindow);
        actionAddExternalTileset->setObjectName("actionAddExternalTileset");
        actionSnapToGrid = new QAction(MainWindow);
        actionSnapToGrid->setObjectName("actionSnapToGrid");
        actionSnapToGrid->setCheckable(true);
        actionCloseAll = new QAction(MainWindow);
        actionCloseAll->setObjectName("actionCloseAll");
#if QT_CONFIG(shortcut)
        actionCloseAll->setShortcut(QString::fromUtf8("Ctrl+Shift+W"));
#endif // QT_CONFIG(shortcut)
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName("actionDelete");
        actionDelete->setEnabled(false);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/16/edit-delete.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionDelete->setIcon(icon13);
        actionHighlightCurrentLayer = new QAction(MainWindow);
        actionHighlightCurrentLayer->setObjectName("actionHighlightCurrentLayer");
        actionHighlightCurrentLayer->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionHighlightCurrentLayer->setShortcut(QString::fromUtf8("H"));
#endif // QT_CONFIG(shortcut)
        actionShowTileObjectOutlines = new QAction(MainWindow);
        actionShowTileObjectOutlines->setObjectName("actionShowTileObjectOutlines");
        actionShowTileObjectOutlines->setCheckable(true);
        actionSnapToFineGrid = new QAction(MainWindow);
        actionSnapToFineGrid->setObjectName("actionSnapToFineGrid");
        actionSnapToFineGrid->setCheckable(true);
        actionShowTileAnimations = new QAction(MainWindow);
        actionShowTileAnimations->setObjectName("actionShowTileAnimations");
        actionShowTileAnimations->setCheckable(true);
        actionReload = new QAction(MainWindow);
        actionReload->setObjectName("actionReload");
#if QT_CONFIG(shortcut)
        actionReload->setShortcut(QString::fromUtf8("Ctrl+R"));
#endif // QT_CONFIG(shortcut)
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName("actionExport");
#if QT_CONFIG(shortcut)
        actionExport->setShortcut(QString::fromUtf8("Ctrl+E"));
#endif // QT_CONFIG(shortcut)
        actionDonate = new QAction(MainWindow);
        actionDonate->setObjectName("actionDonate");
        actionSaveAll = new QAction(MainWindow);
        actionSaveAll->setObjectName("actionSaveAll");
        actionDocumentation = new QAction(MainWindow);
        actionDocumentation->setObjectName("actionDocumentation");
        actionNoLabels = new QAction(MainWindow);
        actionNoLabels->setObjectName("actionNoLabels");
        actionNoLabels->setCheckable(true);
        actionLabelsForSelectedObjects = new QAction(MainWindow);
        actionLabelsForSelectedObjects->setObjectName("actionLabelsForSelectedObjects");
        actionLabelsForSelectedObjects->setCheckable(true);
        actionLabelsForSelectedObjects->setChecked(true);
        actionLabelsForAllObjects = new QAction(MainWindow);
        actionLabelsForAllObjects->setObjectName("actionLabelsForAllObjects");
        actionLabelsForAllObjects->setCheckable(true);
        actionAutoMapWhileDrawing = new QAction(MainWindow);
        actionAutoMapWhileDrawing->setObjectName("actionAutoMapWhileDrawing");
        actionAutoMapWhileDrawing->setCheckable(true);
        actionNewMap = new QAction(MainWindow);
        actionNewMap->setObjectName("actionNewMap");
        actionPasteInPlace = new QAction(MainWindow);
        actionPasteInPlace->setObjectName("actionPasteInPlace");
        actionPasteInPlace->setEnabled(false);
#if QT_CONFIG(shortcut)
        actionPasteInPlace->setShortcut(QString::fromUtf8("Ctrl+Shift+V"));
#endif // QT_CONFIG(shortcut)
        actionFullScreen = new QAction(MainWindow);
        actionFullScreen->setObjectName("actionFullScreen");
        actionFullScreen->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionFullScreen->setShortcut(QString::fromUtf8("F11"));
#endif // QT_CONFIG(shortcut)
        actionSnapToPixels = new QAction(MainWindow);
        actionSnapToPixels->setObjectName("actionSnapToPixels");
        actionSnapToPixels->setCheckable(true);
        actionTilesetProperties = new QAction(MainWindow);
        actionTilesetProperties->setObjectName("actionTilesetProperties");
        actionTilesetProperties->setIcon(icon5);
        actionSnapNothing = new QAction(MainWindow);
        actionSnapNothing->setObjectName("actionSnapNothing");
        actionSnapNothing->setCheckable(true);
        actionSnapNothing->setChecked(true);
        actionEditCommands = new QAction(MainWindow);
        actionEditCommands->setObjectName("actionEditCommands");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/24/system-run.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionEditCommands->setIcon(icon14);
        actionClearView = new QAction(MainWindow);
        actionClearView->setObjectName("actionClearView");
        actionClearView->setCheckable(true);
#if QT_CONFIG(shortcut)
        actionClearView->setShortcut(QString::fromUtf8("Tab"));
#endif // QT_CONFIG(shortcut)
        actionLabelForHoveredObject = new QAction(MainWindow);
        actionLabelForHoveredObject->setObjectName("actionLabelForHoveredObject");
        actionLabelForHoveredObject->setCheckable(true);
        actionLoadWorld = new QAction(MainWindow);
        actionLoadWorld->setObjectName("actionLoadWorld");
        actionNewWorld = new QAction(MainWindow);
        actionNewWorld->setObjectName("actionNewWorld");
        actionHighlightHoveredObject = new QAction(MainWindow);
        actionHighlightHoveredObject->setObjectName("actionHighlightHoveredObject");
        actionHighlightHoveredObject->setCheckable(true);
        actionShowTileCollisionShapes = new QAction(MainWindow);
        actionShowTileCollisionShapes->setObjectName("actionShowTileCollisionShapes");
        actionShowTileCollisionShapes->setCheckable(true);
        actionFitInView = new QAction(MainWindow);
        actionFitInView->setObjectName("actionFitInView");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/16/zoom-fit-best.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFitInView->setIcon(icon15);
#if QT_CONFIG(shortcut)
        actionFitInView->setShortcut(QString::fromUtf8("Ctrl+/"));
#endif // QT_CONFIG(shortcut)
        actionForum = new QAction(MainWindow);
        actionForum->setObjectName("actionForum");
        actionCloseProject = new QAction(MainWindow);
        actionCloseProject->setObjectName("actionCloseProject");
        actionClearRecentProjects = new QAction(MainWindow);
        actionClearRecentProjects->setObjectName("actionClearRecentProjects");
        actionClearRecentProjects->setIcon(icon12);
        actionAddFolderToProject = new QAction(MainWindow);
        actionAddFolderToProject->setObjectName("actionAddFolderToProject");
        actionRefreshProjectFolders = new QAction(MainWindow);
        actionRefreshProjectFolders->setObjectName("actionRefreshProjectFolders");
        actionShowObjectReferences = new QAction(MainWindow);
        actionShowObjectReferences->setObjectName("actionShowObjectReferences");
        actionShowObjectReferences->setCheckable(true);
        actionReopenClosedFile = new QAction(MainWindow);
        actionReopenClosedFile->setObjectName("actionReopenClosedFile");
#if QT_CONFIG(shortcut)
        actionReopenClosedFile->setShortcut(QString::fromUtf8("Ctrl+Shift+T"));
#endif // QT_CONFIG(shortcut)
        actionProjectProperties = new QAction(MainWindow);
        actionProjectProperties->setObjectName("actionProjectProperties");
        actionProjectProperties->setIcon(icon5);
        actionOpenFileInProject = new QAction(MainWindow);
        actionOpenFileInProject->setObjectName("actionOpenFileInProject");
#if QT_CONFIG(shortcut)
        actionOpenFileInProject->setShortcut(QString::fromUtf8("Ctrl+P"));
#endif // QT_CONFIG(shortcut)
        actionEnableParallax = new QAction(MainWindow);
        actionEnableParallax->setObjectName("actionEnableParallax");
        actionEnableParallax->setCheckable(true);
        actionEnableWorlds = new QAction(MainWindow);
        actionEnableWorlds->setObjectName("actionEnableWorlds");
        actionEnableWorlds->setCheckable(true);
        actionNewProject = new QAction(MainWindow);
        actionNewProject->setObjectName("actionNewProject");
#if QT_CONFIG(shortcut)
        actionNewProject->setShortcut(QString::fromUtf8("Ctrl+Shift+N"));
#endif // QT_CONFIG(shortcut)
        actionAddAutomappingRulesTileset = new QAction(MainWindow);
        actionAddAutomappingRulesTileset->setObjectName("actionAddAutomappingRulesTileset");
        actionSearchActions = new QAction(MainWindow);
        actionSearchActions->setObjectName("actionSearchActions");
#if QT_CONFIG(shortcut)
        actionSearchActions->setShortcut(QString::fromUtf8("Ctrl+Shift+P"));
#endif // QT_CONFIG(shortcut)
        actionUnloadAllWorlds = new QAction(MainWindow);
        actionUnloadAllWorlds->setObjectName("actionUnloadAllWorlds");
        actionWorldProperties = new QAction(MainWindow);
        actionWorldProperties->setObjectName("actionWorldProperties");
        actionWorldProperties->setIcon(icon5);
        actionWorldProperties->setMenuRole(QAction::MenuRole::NoRole);
        actionGoToTile = new QAction(MainWindow);
        actionGoToTile->setObjectName("actionGoToTile");
#if QT_CONFIG(shortcut)
        actionGoToTile->setShortcut(QString::fromUtf8("Ctrl+Shift+G"));
#endif // QT_CONFIG(shortcut)
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 553, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuRecentFiles = new QMenu(menuFile);
        menuRecentFiles->setObjectName("menuRecentFiles");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/16/document-open-recent.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        menuRecentFiles->setIcon(icon16);
        menuRecentFiles->setToolTipsVisible(true);
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName("menuNew");
        menuCommand = new QMenu(menuFile);
        menuCommand->setObjectName("menuCommand");
        menuRecentProjects = new QMenu(menuFile);
        menuRecentProjects->setObjectName("menuRecentProjects");
        menuRecentProjects->setToolTipsVisible(true);
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName("menuEdit");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        menuMap = new QMenu(menuBar);
        menuMap->setObjectName("menuMap");
        menuView = new QMenu(menuBar);
        menuView->setObjectName("menuView");
        menuShowObjectNames = new QMenu(menuView);
        menuShowObjectNames->setObjectName("menuShowObjectNames");
        menuSnapping = new QMenu(menuView);
        menuSnapping->setObjectName("menuSnapping");
        menuTileset = new QMenu(menuBar);
        menuTileset->setObjectName("menuTileset");
        menuProject = new QMenu(menuBar);
        menuProject->setObjectName("menuProject");
        menuWorld = new QMenu(menuBar);
        menuWorld->setObjectName("menuWorld");
        menuUnloadWorld = new QMenu(menuWorld);
        menuUnloadWorld->setObjectName("menuUnloadWorld");
        menuSaveWorld = new QMenu(menuWorld);
        menuSaveWorld->setObjectName("menuSaveWorld");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuWorld->menuAction());
        menuBar->addAction(menuMap->menuAction());
        menuBar->addAction(menuTileset->menuAction());
        menuBar->addAction(menuProject->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpenFileInProject);
        menuFile->addAction(menuRecentFiles->menuAction());
        menuFile->addAction(menuRecentProjects->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionSaveAll);
        menuFile->addAction(actionExport);
        menuFile->addAction(actionExportAs);
        menuFile->addAction(actionExportAsImage);
        menuFile->addAction(actionReload);
        menuFile->addSeparator();
        menuFile->addAction(menuCommand->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addAction(actionCloseAll);
        menuFile->addAction(actionCloseProject);
        menuFile->addAction(actionQuit);
        menuRecentFiles->addAction(actionReopenClosedFile);
        menuRecentFiles->addSeparator();
        menuRecentFiles->addAction(actionClearRecentFiles);
        menuNew->addAction(actionNewProject);
        menuNew->addSeparator();
        menuNew->addAction(actionNewMap);
        menuNew->addAction(actionNewTileset);
        menuCommand->addAction(actionEditCommands);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionPasteInPlace);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPreferences);
        menuHelp->addAction(actionDocumentation);
        menuHelp->addAction(actionForum);
        menuHelp->addSeparator();
        menuHelp->addAction(actionDonate);
        menuHelp->addAction(actionAbout);
        menuMap->addAction(actionAddExternalTileset);
        menuMap->addAction(actionAddAutomappingRulesTileset);
        menuMap->addSeparator();
        menuMap->addAction(actionResizeMap);
        menuMap->addAction(actionOffsetMap);
        menuMap->addSeparator();
        menuMap->addAction(actionAutoMap);
        menuMap->addAction(actionAutoMapWhileDrawing);
        menuMap->addSeparator();
        menuMap->addAction(actionGoToTile);
        menuMap->addSeparator();
        menuMap->addAction(actionMapProperties);
        menuView->addAction(actionSearchActions);
        menuView->addAction(actionShowGrid);
        menuView->addAction(actionShowWorldGrid);
        menuView->addAction(actionShowTileObjectOutlines);
        menuView->addAction(actionShowObjectReferences);
        menuView->addAction(menuShowObjectNames->menuAction());
        menuView->addAction(actionShowTileAnimations);
        menuView->addAction(actionShowTileCollisionShapes);
        menuView->addAction(actionEnableWorlds);
        menuView->addAction(actionEnableParallax);
        menuView->addAction(actionHighlightCurrentLayer);
        menuView->addAction(actionHighlightHoveredObject);
        menuView->addSeparator();
        menuView->addAction(menuSnapping->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionZoomIn);
        menuView->addAction(actionZoomOut);
        menuView->addAction(actionZoomNormal);
        menuView->addAction(actionFitInView);
        menuView->addSeparator();
        menuView->addAction(actionFullScreen);
        menuView->addAction(actionClearView);
        menuShowObjectNames->addAction(actionNoLabels);
        menuShowObjectNames->addAction(actionLabelsForSelectedObjects);
        menuShowObjectNames->addAction(actionLabelsForAllObjects);
        menuShowObjectNames->addSeparator();
        menuShowObjectNames->addAction(actionLabelForHoveredObject);
        menuSnapping->addAction(actionSnapNothing);
        menuSnapping->addAction(actionSnapToGrid);
        menuSnapping->addAction(actionSnapToFineGrid);
        menuSnapping->addAction(actionSnapToPixels);
        menuSnapping->addSeparator();
        menuSnapping->addAction(actionSnapToWorldGrid);
        menuTileset->addAction(actionTilesetProperties);
        menuProject->addAction(actionAddFolderToProject);
        menuProject->addAction(actionRefreshProjectFolders);
        menuProject->addSeparator();
        menuProject->addAction(actionProjectProperties);
        menuWorld->addAction(actionNewWorld);
        menuWorld->addAction(actionLoadWorld);
        menuWorld->addSeparator();
        menuWorld->addAction(menuUnloadWorld->menuAction());
        menuWorld->addAction(menuSaveWorld->menuAction());
        menuWorld->addSeparator();
        menuWorld->addAction(actionWorldProperties);
        menuUnloadWorld->addAction(actionUnloadAllWorlds);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionOpen->setText(QCoreApplication::translate("MainWindow", "&Open File or Project...", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "&Save", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "&Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "&Paste", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About Tiled", nullptr));
        actionAboutQt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionResizeMap->setText(QCoreApplication::translate("MainWindow", "&Resize Map...", nullptr));
        actionMapProperties->setText(QCoreApplication::translate("MainWindow", "Map &Properties...", nullptr));
        actionAutoMap->setText(QCoreApplication::translate("MainWindow", "AutoMap", nullptr));
        actionShowGrid->setText(QCoreApplication::translate("MainWindow", "Show &Grid", nullptr));
        actionShowWorldGrid->setText(QCoreApplication::translate("MainWindow", "Show &World Grid", nullptr));
        actionSnapToWorldGrid->setText(QCoreApplication::translate("MainWindow", "Snap Maps to World Grid", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "Save &As...", nullptr));
        actionNewTileset->setText(QCoreApplication::translate("MainWindow", "New &Tileset...", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "&Close", nullptr));
        actionZoomIn->setText(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
        actionZoomOut->setText(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
        actionZoomNormal->setText(QCoreApplication::translate("MainWindow", "Normal Size", nullptr));
        actionExportAsImage->setText(QCoreApplication::translate("MainWindow", "Export As &Image...", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cu&t", nullptr));
        actionOffsetMap->setText(QCoreApplication::translate("MainWindow", "&Offset Map...", nullptr));
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "Pre&ferences...", nullptr));
        actionClearRecentFiles->setText(QCoreApplication::translate("MainWindow", "Clear Recent Files", nullptr));
        actionExportAs->setText(QCoreApplication::translate("MainWindow", "E&xport As...", nullptr));
        actionAddExternalTileset->setText(QCoreApplication::translate("MainWindow", "&Add External Tileset...", nullptr));
        actionSnapToGrid->setText(QCoreApplication::translate("MainWindow", "&Snap to Grid", nullptr));
        actionCloseAll->setText(QCoreApplication::translate("MainWindow", "C&lose All", nullptr));
        actionDelete->setText(QCoreApplication::translate("MainWindow", "&Delete", nullptr));
        actionDelete->setIconText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        actionHighlightCurrentLayer->setText(QCoreApplication::translate("MainWindow", "&Highlight Current Layer", nullptr));
        actionShowTileObjectOutlines->setText(QCoreApplication::translate("MainWindow", "Show Tile Object &Outlines", nullptr));
        actionSnapToFineGrid->setText(QCoreApplication::translate("MainWindow", "Snap to &Fine Grid", nullptr));
        actionShowTileAnimations->setText(QCoreApplication::translate("MainWindow", "Show Tile Animations", nullptr));
        actionReload->setText(QCoreApplication::translate("MainWindow", "Reload", nullptr));
        actionExport->setText(QCoreApplication::translate("MainWindow", "&Export", nullptr));
        actionDonate->setText(QCoreApplication::translate("MainWindow", "Support Tiled Development \342\206\227", nullptr));
        actionSaveAll->setText(QCoreApplication::translate("MainWindow", "Save All", nullptr));
        actionDocumentation->setText(QCoreApplication::translate("MainWindow", "User Manual \342\206\227", nullptr));
        actionNoLabels->setText(QCoreApplication::translate("MainWindow", "&Never", nullptr));
        actionLabelsForSelectedObjects->setText(QCoreApplication::translate("MainWindow", "For &Selected Objects", nullptr));
        actionLabelsForAllObjects->setText(QCoreApplication::translate("MainWindow", "For &All Objects", nullptr));
        actionAutoMapWhileDrawing->setText(QCoreApplication::translate("MainWindow", "AutoMap While Drawing", nullptr));
        actionNewMap->setText(QCoreApplication::translate("MainWindow", "New Map...", nullptr));
        actionPasteInPlace->setText(QCoreApplication::translate("MainWindow", "Paste &in Place", nullptr));
        actionFullScreen->setText(QCoreApplication::translate("MainWindow", "Full Screen", nullptr));
        actionSnapToPixels->setText(QCoreApplication::translate("MainWindow", "Snap to &Pixels", nullptr));
        actionTilesetProperties->setText(QCoreApplication::translate("MainWindow", "Tileset &Properties...", nullptr));
        actionSnapNothing->setText(QCoreApplication::translate("MainWindow", "No Snapping", nullptr));
        actionEditCommands->setText(QCoreApplication::translate("MainWindow", "Edit Commands...", nullptr));
        actionClearView->setText(QCoreApplication::translate("MainWindow", "Clear View", nullptr));
        actionLabelForHoveredObject->setText(QCoreApplication::translate("MainWindow", "For Hovered Object", nullptr));
        actionLoadWorld->setText(QCoreApplication::translate("MainWindow", "&Load World...", nullptr));
        actionNewWorld->setText(QCoreApplication::translate("MainWindow", "&New World...", nullptr));
        actionHighlightHoveredObject->setText(QCoreApplication::translate("MainWindow", "Highlight Hovered Object", nullptr));
        actionShowTileCollisionShapes->setText(QCoreApplication::translate("MainWindow", "Show Tile Collision Shapes", nullptr));
        actionFitInView->setText(QCoreApplication::translate("MainWindow", "Fit Map in View", nullptr));
        actionForum->setText(QCoreApplication::translate("MainWindow", "Community Forum \342\206\227", nullptr));
        actionCloseProject->setText(QCoreApplication::translate("MainWindow", "&Close Project", nullptr));
        actionClearRecentProjects->setText(QCoreApplication::translate("MainWindow", "Clear Recent Projects", nullptr));
        actionAddFolderToProject->setText(QCoreApplication::translate("MainWindow", "Add Folder to Project...", nullptr));
        actionRefreshProjectFolders->setText(QCoreApplication::translate("MainWindow", "Refresh Folders", nullptr));
        actionShowObjectReferences->setText(QCoreApplication::translate("MainWindow", "Show Object &References", nullptr));
        actionReopenClosedFile->setText(QCoreApplication::translate("MainWindow", "Reopen Closed File", nullptr));
        actionProjectProperties->setText(QCoreApplication::translate("MainWindow", "Project &Properties...", nullptr));
        actionOpenFileInProject->setText(QCoreApplication::translate("MainWindow", "Open File in &Project...", nullptr));
        actionEnableParallax->setText(QCoreApplication::translate("MainWindow", "Enable Parallax", nullptr));
        actionEnableWorlds->setText(QCoreApplication::translate("MainWindow", "Show &World", nullptr));
        actionNewProject->setText(QCoreApplication::translate("MainWindow", "&New Project...", nullptr));
        actionAddAutomappingRulesTileset->setText(QCoreApplication::translate("MainWindow", "Add Automapping Rules Tileset", nullptr));
        actionSearchActions->setText(QCoreApplication::translate("MainWindow", "Search Actions...", nullptr));
#if QT_CONFIG(tooltip)
        actionSearchActions->setToolTip(QCoreApplication::translate("MainWindow", "Search actions available in Tiled", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUnloadAllWorlds->setText(QCoreApplication::translate("MainWindow", "Unload All Worlds", nullptr));
        actionWorldProperties->setText(QCoreApplication::translate("MainWindow", "World Properties...", nullptr));
#if QT_CONFIG(tooltip)
        actionWorldProperties->setToolTip(QCoreApplication::translate("MainWindow", "World Properties", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoToTile->setText(QCoreApplication::translate("MainWindow", "Go to &Tile...", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuRecentFiles->setTitle(QCoreApplication::translate("MainWindow", "&Recent Files", nullptr));
        menuNew->setTitle(QCoreApplication::translate("MainWindow", "&New", nullptr));
        menuCommand->setTitle(QCoreApplication::translate("MainWindow", "Commands", nullptr));
        menuRecentProjects->setTitle(QCoreApplication::translate("MainWindow", "&Recent Projects", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menuMap->setTitle(QCoreApplication::translate("MainWindow", "&Map", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menuShowObjectNames->setTitle(QCoreApplication::translate("MainWindow", "Show Object &Names", nullptr));
        menuSnapping->setTitle(QCoreApplication::translate("MainWindow", "Snapping", nullptr));
        menuTileset->setTitle(QCoreApplication::translate("MainWindow", "Tileset", nullptr));
        menuProject->setTitle(QCoreApplication::translate("MainWindow", "&Project", nullptr));
        menuWorld->setTitle(QCoreApplication::translate("MainWindow", "&World", nullptr));
        menuUnloadWorld->setTitle(QCoreApplication::translate("MainWindow", "&Unload World", nullptr));
        menuSaveWorld->setTitle(QCoreApplication::translate("MainWindow", "&Save World", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
