/********************************************************************************
** Form generated from reading UI file 'ccviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCVIEWER_H
#define UI_CCVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ccViewerClass
{
public:
    QAction *actionDisplayParameters;
    QAction *actionFullScreen;
    QAction *actionEditCamera;
    QAction *actionToggleSunLight;
    QAction *actionToggleCustomLight;
    QAction *actionAbout;
    QAction *actionHelpShortctus;
    QAction *actionSetViewFront;
    QAction *actionSetViewBack;
    QAction *actionSetViewLeft;
    QAction *actionSetViewRight;
    QAction *actionSetViewTop;
    QAction *actionSetViewBottom;
    QAction *actionShowColors;
    QAction *actionShowNormals;
    QAction *actionShowColorRamp;
    QAction *actionShowScalarField;
    QAction *actionDummyAction;
    QAction *actionDelete;
    QAction *actionSetOrthoView;
    QAction *actionSetCenteredPerspectiveView;
    QAction *actionSetViewerPerspectiveView;
    QAction *actionSetPivotAlwaysOn;
    QAction *actionSetPivotRotationOnly;
    QAction *actionSetPivotOff;
    QAction *actionSetViewIso1;
    QAction *actionSetViewIso2;
    QAction *actionEnable3DMouse;
    QAction *actionZoomOnSelectedEntity;
    QAction *actionGlobalZoom;
    QAction *actionNoFilter;
    QAction *actionLockRotationVertAxis;
    QAction *actionEnableStereo;
    QAction *actionShowMaterials;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *GLframe;
    QMenuBar *menuBar;
    QMenu *menuOptions;
    QMenu *menuPerspective;
    QMenu *menuLights;
    QMenu *menuStandardViews;
    QMenu *menuSelected;
    QMenu *menuSelectSF;
    QMenu *menuRotationSymbol;
    QMenu *menu3DMouse;
    QMenu *menuAbout;
    QMenu *menuPlugins;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ccViewerClass)
    {
        if (ccViewerClass->objectName().isEmpty())
            ccViewerClass->setObjectName(QStringLiteral("ccViewerClass"));
        ccViewerClass->resize(800, 600);
        ccViewerClass->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/CC/Icons/images/icon/cc_viewer_icon_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        ccViewerClass->setWindowIcon(icon);
        ccViewerClass->setStyleSheet(QLatin1String("QWidget {\n"
"	background-color: rgb(200,200,200);\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"	background: rgb(200,200,200);\n"
"}\n"
"\n"
"QMenu::separator \n"
"{\n"
"     height: 2px;\n"
"     background: rgb(100,100,100);\n"
"     margin-left: 10px;\n"
"     margin-right: 5px;\n"
" }\n"
"\n"
"QMenuBar \n"
"{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 rgb(255,255,255), stop:1 rgb(200,200,200));\n"
" }\n"
"\n"
"QStatusBar\n"
"{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 rgb(200,200,200), stop:1 rgb(255,255,255));\n"
"}\n"
""));
        actionDisplayParameters = new QAction(ccViewerClass);
        actionDisplayParameters->setObjectName(QStringLiteral("actionDisplayParameters"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/CC/images/ccLightParams.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisplayParameters->setIcon(icon1);
        actionDisplayParameters->setShortcutContext(Qt::ApplicationShortcut);
        actionFullScreen = new QAction(ccViewerClass);
        actionFullScreen->setObjectName(QStringLiteral("actionFullScreen"));
        actionFullScreen->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/CC/images/ccFullScreen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFullScreen->setIcon(icon2);
        actionFullScreen->setShortcutContext(Qt::ApplicationShortcut);
        actionEditCamera = new QAction(ccViewerClass);
        actionEditCamera->setObjectName(QStringLiteral("actionEditCamera"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/CC/images/ccCamera.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditCamera->setIcon(icon3);
        actionToggleSunLight = new QAction(ccViewerClass);
        actionToggleSunLight->setObjectName(QStringLiteral("actionToggleSunLight"));
        actionToggleSunLight->setCheckable(true);
        actionToggleSunLight->setShortcutContext(Qt::ApplicationShortcut);
        actionToggleCustomLight = new QAction(ccViewerClass);
        actionToggleCustomLight->setObjectName(QStringLiteral("actionToggleCustomLight"));
        actionToggleCustomLight->setCheckable(true);
        actionToggleCustomLight->setShortcutContext(Qt::ApplicationShortcut);
        actionAbout = new QAction(ccViewerClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionHelpShortctus = new QAction(ccViewerClass);
        actionHelpShortctus->setObjectName(QStringLiteral("actionHelpShortctus"));
        actionHelpShortctus->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewFront = new QAction(ccViewerClass);
        actionSetViewFront->setObjectName(QStringLiteral("actionSetViewFront"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/CC/images/ccViewYpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewFront->setIcon(icon4);
        actionSetViewFront->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBack = new QAction(ccViewerClass);
        actionSetViewBack->setObjectName(QStringLiteral("actionSetViewBack"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/CC/images/ccViewYneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBack->setIcon(icon5);
        actionSetViewBack->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewLeft = new QAction(ccViewerClass);
        actionSetViewLeft->setObjectName(QStringLiteral("actionSetViewLeft"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/CC/images/ccViewXpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewLeft->setIcon(icon6);
        actionSetViewLeft->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewRight = new QAction(ccViewerClass);
        actionSetViewRight->setObjectName(QStringLiteral("actionSetViewRight"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/CC/images/ccViewXneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewRight->setIcon(icon7);
        actionSetViewRight->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewTop = new QAction(ccViewerClass);
        actionSetViewTop->setObjectName(QStringLiteral("actionSetViewTop"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/CC/images/ccViewZpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewTop->setIcon(icon8);
        actionSetViewTop->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewBottom = new QAction(ccViewerClass);
        actionSetViewBottom->setObjectName(QStringLiteral("actionSetViewBottom"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/CC/images/ccViewZneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewBottom->setIcon(icon9);
        actionShowColors = new QAction(ccViewerClass);
        actionShowColors->setObjectName(QStringLiteral("actionShowColors"));
        actionShowColors->setCheckable(true);
        actionShowColors->setShortcutContext(Qt::ApplicationShortcut);
        actionShowNormals = new QAction(ccViewerClass);
        actionShowNormals->setObjectName(QStringLiteral("actionShowNormals"));
        actionShowNormals->setCheckable(true);
        actionShowNormals->setShortcutContext(Qt::ApplicationShortcut);
        actionShowColorRamp = new QAction(ccViewerClass);
        actionShowColorRamp->setObjectName(QStringLiteral("actionShowColorRamp"));
        actionShowColorRamp->setCheckable(true);
        actionShowColorRamp->setShortcutContext(Qt::ApplicationShortcut);
        actionShowScalarField = new QAction(ccViewerClass);
        actionShowScalarField->setObjectName(QStringLiteral("actionShowScalarField"));
        actionShowScalarField->setCheckable(true);
        actionShowScalarField->setShortcutContext(Qt::ApplicationShortcut);
        actionDummyAction = new QAction(ccViewerClass);
        actionDummyAction->setObjectName(QStringLiteral("actionDummyAction"));
        actionDelete = new QAction(ccViewerClass);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/CC/images/ccDelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon10);
        actionDelete->setShortcutContext(Qt::ApplicationShortcut);
        actionSetOrthoView = new QAction(ccViewerClass);
        actionSetOrthoView->setObjectName(QStringLiteral("actionSetOrthoView"));
        actionSetOrthoView->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/CC/images/ccOrthoMode32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetOrthoView->setIcon(icon11);
        actionSetCenteredPerspectiveView = new QAction(ccViewerClass);
        actionSetCenteredPerspectiveView->setObjectName(QStringLiteral("actionSetCenteredPerspectiveView"));
        actionSetCenteredPerspectiveView->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/CC/images/ccCenteredPerspective32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetCenteredPerspectiveView->setIcon(icon12);
        actionSetViewerPerspectiveView = new QAction(ccViewerClass);
        actionSetViewerPerspectiveView->setObjectName(QStringLiteral("actionSetViewerPerspectiveView"));
        actionSetViewerPerspectiveView->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/CC/images/ccViewerBasedPerspective32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewerPerspectiveView->setIcon(icon13);
        actionSetPivotAlwaysOn = new QAction(ccViewerClass);
        actionSetPivotAlwaysOn->setObjectName(QStringLiteral("actionSetPivotAlwaysOn"));
        actionSetPivotAlwaysOn->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/CC/images/ccPivotOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotAlwaysOn->setIcon(icon14);
        actionSetPivotRotationOnly = new QAction(ccViewerClass);
        actionSetPivotRotationOnly->setObjectName(QStringLiteral("actionSetPivotRotationOnly"));
        actionSetPivotRotationOnly->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/CC/images/ccPivotAuto.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotRotationOnly->setIcon(icon15);
        actionSetPivotOff = new QAction(ccViewerClass);
        actionSetPivotOff->setObjectName(QStringLiteral("actionSetPivotOff"));
        actionSetPivotOff->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/CC/images/ccPivotOff.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPivotOff->setIcon(icon16);
        actionSetViewIso1 = new QAction(ccViewerClass);
        actionSetViewIso1->setObjectName(QStringLiteral("actionSetViewIso1"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/CC/images/ccViewIso1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewIso1->setIcon(icon17);
        actionSetViewIso1->setShortcutContext(Qt::ApplicationShortcut);
        actionSetViewIso2 = new QAction(ccViewerClass);
        actionSetViewIso2->setObjectName(QStringLiteral("actionSetViewIso2"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/CC/images/ccViewIso2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetViewIso2->setIcon(icon18);
        actionSetViewIso2->setShortcutContext(Qt::ApplicationShortcut);
        actionEnable3DMouse = new QAction(ccViewerClass);
        actionEnable3DMouse->setObjectName(QStringLiteral("actionEnable3DMouse"));
        actionEnable3DMouse->setCheckable(true);
        actionZoomOnSelectedEntity = new QAction(ccViewerClass);
        actionZoomOnSelectedEntity->setObjectName(QStringLiteral("actionZoomOnSelectedEntity"));
        actionGlobalZoom = new QAction(ccViewerClass);
        actionGlobalZoom->setObjectName(QStringLiteral("actionGlobalZoom"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/CC/images/ccGlobalZoom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGlobalZoom->setIcon(icon19);
        actionNoFilter = new QAction(ccViewerClass);
        actionNoFilter->setObjectName(QStringLiteral("actionNoFilter"));
        actionLockRotationVertAxis = new QAction(ccViewerClass);
        actionLockRotationVertAxis->setObjectName(QStringLiteral("actionLockRotationVertAxis"));
        actionLockRotationVertAxis->setCheckable(true);
        actionLockRotationVertAxis->setShortcutContext(Qt::ApplicationShortcut);
        actionEnableStereo = new QAction(ccViewerClass);
        actionEnableStereo->setObjectName(QStringLiteral("actionEnableStereo"));
        actionEnableStereo->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/CC/images/ccStereo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnableStereo->setIcon(icon20);
        actionShowMaterials = new QAction(ccViewerClass);
        actionShowMaterials->setObjectName(QStringLiteral("actionShowMaterials"));
        actionShowMaterials->setCheckable(true);
        actionShowMaterials->setShortcutContext(Qt::ApplicationShortcut);
        centralWidget = new QWidget(ccViewerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        GLframe = new QFrame(centralWidget);
        GLframe->setObjectName(QStringLiteral("GLframe"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GLframe->sizePolicy().hasHeightForWidth());
        GLframe->setSizePolicy(sizePolicy);
        GLframe->setStyleSheet(QLatin1String("QFrame{\n"
"	border: 2px solid white;\n"
"	border-radius: 10px;\n"
"	background: qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 rgb(10,102,151), stop:1 rgb(0,0,0));\n"
" }\n"
"\n"
""));
        GLframe->setFrameShape(QFrame::Box);
        GLframe->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(GLframe);

        ccViewerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ccViewerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuPerspective = new QMenu(menuOptions);
        menuPerspective->setObjectName(QStringLiteral("menuPerspective"));
        menuPerspective->setIcon(icon12);
        menuLights = new QMenu(menuOptions);
        menuLights->setObjectName(QStringLiteral("menuLights"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/CC/images/ccSunLight.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuLights->setIcon(icon21);
        menuStandardViews = new QMenu(menuOptions);
        menuStandardViews->setObjectName(QStringLiteral("menuStandardViews"));
        menuStandardViews->setIcon(icon4);
        menuSelected = new QMenu(menuOptions);
        menuSelected->setObjectName(QStringLiteral("menuSelected"));
        menuSelectSF = new QMenu(menuSelected);
        menuSelectSF->setObjectName(QStringLiteral("menuSelectSF"));
        menuSelectSF->setEnabled(false);
        menuRotationSymbol = new QMenu(menuOptions);
        menuRotationSymbol->setObjectName(QStringLiteral("menuRotationSymbol"));
        menuRotationSymbol->setIcon(icon14);
        menu3DMouse = new QMenu(menuOptions);
        menu3DMouse->setObjectName(QStringLiteral("menu3DMouse"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/CC/images/im3DxLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        menu3DMouse->setIcon(icon22);
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuPlugins = new QMenu(menuBar);
        menuPlugins->setObjectName(QStringLiteral("menuPlugins"));
        ccViewerClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(ccViewerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ccViewerClass->setStatusBar(statusBar);

        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuPlugins->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuOptions->addAction(actionDisplayParameters);
        menuOptions->addAction(actionEditCamera);
        menuOptions->addSeparator();
        menuOptions->addAction(menuStandardViews->menuAction());
        menuOptions->addAction(menuPerspective->menuAction());
        menuOptions->addAction(menuRotationSymbol->menuAction());
        menuOptions->addAction(menu3DMouse->menuAction());
        menuOptions->addAction(menuLights->menuAction());
        menuOptions->addAction(actionGlobalZoom);
        menuOptions->addAction(actionEnableStereo);
        menuOptions->addAction(actionFullScreen);
        menuOptions->addAction(actionLockRotationVertAxis);
        menuOptions->addSeparator();
        menuOptions->addAction(menuSelected->menuAction());
        menuPerspective->addAction(actionSetOrthoView);
        menuPerspective->addAction(actionSetCenteredPerspectiveView);
        menuPerspective->addAction(actionSetViewerPerspectiveView);
        menuLights->addAction(actionToggleSunLight);
        menuLights->addAction(actionToggleCustomLight);
        menuStandardViews->addAction(actionSetViewTop);
        menuStandardViews->addAction(actionSetViewFront);
        menuStandardViews->addAction(actionSetViewLeft);
        menuStandardViews->addAction(actionSetViewBack);
        menuStandardViews->addAction(actionSetViewRight);
        menuStandardViews->addAction(actionSetViewBottom);
        menuStandardViews->addAction(actionSetViewIso1);
        menuStandardViews->addAction(actionSetViewIso2);
        menuSelected->addAction(actionShowColors);
        menuSelected->addAction(actionShowNormals);
        menuSelected->addAction(actionShowMaterials);
        menuSelected->addSeparator();
        menuSelected->addAction(actionShowScalarField);
        menuSelected->addAction(actionShowColorRamp);
        menuSelected->addAction(menuSelectSF->menuAction());
        menuSelected->addAction(actionZoomOnSelectedEntity);
        menuSelected->addAction(actionDelete);
        menuSelectSF->addAction(actionDummyAction);
        menuRotationSymbol->addAction(actionSetPivotAlwaysOn);
        menuRotationSymbol->addAction(actionSetPivotRotationOnly);
        menuRotationSymbol->addAction(actionSetPivotOff);
        menu3DMouse->addAction(actionEnable3DMouse);
        menuAbout->addAction(actionAbout);
        menuAbout->addSeparator();
        menuAbout->addAction(actionHelpShortctus);
        menuPlugins->addAction(actionNoFilter);

        retranslateUi(ccViewerClass);

        QMetaObject::connectSlotsByName(ccViewerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ccViewerClass)
    {
        ccViewerClass->setWindowTitle(QApplication::translate("ccViewerClass", "ccViewer", Q_NULLPTR));
        actionDisplayParameters->setText(QApplication::translate("ccViewerClass", "Display parameters", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDisplayParameters->setToolTip(QApplication::translate("ccViewerClass", "Set display parameters (light, materials, etc.)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionDisplayParameters->setStatusTip(QApplication::translate("ccViewerClass", "Set display parameters (light, materials, etc.)", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionDisplayParameters->setShortcut(QApplication::translate("ccViewerClass", "Alt+D", Q_NULLPTR));
        actionFullScreen->setText(QApplication::translate("ccViewerClass", "Full screen", Q_NULLPTR));
        actionFullScreen->setShortcut(QApplication::translate("ccViewerClass", "F11", Q_NULLPTR));
        actionEditCamera->setText(QApplication::translate("ccViewerClass", "Camera parameters", Q_NULLPTR));
        actionEditCamera->setShortcut(QApplication::translate("ccViewerClass", "Alt+C", Q_NULLPTR));
        actionToggleSunLight->setText(QApplication::translate("ccViewerClass", "Sun", Q_NULLPTR));
        actionToggleSunLight->setShortcut(QApplication::translate("ccViewerClass", "F6", Q_NULLPTR));
        actionToggleCustomLight->setText(QApplication::translate("ccViewerClass", "Custom", Q_NULLPTR));
        actionToggleCustomLight->setShortcut(QApplication::translate("ccViewerClass", "F7", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("ccViewerClass", "About", Q_NULLPTR));
        actionHelpShortctus->setText(QApplication::translate("ccViewerClass", "Shortctus", Q_NULLPTR));
        actionHelpShortctus->setShortcut(QApplication::translate("ccViewerClass", "F1", Q_NULLPTR));
        actionSetViewFront->setText(QApplication::translate("ccViewerClass", "Front", Q_NULLPTR));
        actionSetViewFront->setShortcut(QApplication::translate("ccViewerClass", "5", Q_NULLPTR));
        actionSetViewBack->setText(QApplication::translate("ccViewerClass", "Back", Q_NULLPTR));
        actionSetViewBack->setShortcut(QApplication::translate("ccViewerClass", "0", Q_NULLPTR));
        actionSetViewLeft->setText(QApplication::translate("ccViewerClass", "Left", Q_NULLPTR));
        actionSetViewLeft->setShortcut(QApplication::translate("ccViewerClass", "4", Q_NULLPTR));
        actionSetViewRight->setText(QApplication::translate("ccViewerClass", "Right", Q_NULLPTR));
        actionSetViewRight->setShortcut(QApplication::translate("ccViewerClass", "6", Q_NULLPTR));
        actionSetViewTop->setText(QApplication::translate("ccViewerClass", "Top", Q_NULLPTR));
        actionSetViewTop->setShortcut(QApplication::translate("ccViewerClass", "8", Q_NULLPTR));
        actionSetViewBottom->setText(QApplication::translate("ccViewerClass", "Bottom", Q_NULLPTR));
        actionSetViewBottom->setShortcut(QApplication::translate("ccViewerClass", "2", Q_NULLPTR));
        actionShowColors->setText(QApplication::translate("ccViewerClass", "Show Colors", Q_NULLPTR));
        actionShowColors->setShortcut(QApplication::translate("ccViewerClass", "C", Q_NULLPTR));
        actionShowNormals->setText(QApplication::translate("ccViewerClass", "Show Normals", Q_NULLPTR));
        actionShowNormals->setShortcut(QApplication::translate("ccViewerClass", "N", Q_NULLPTR));
        actionShowColorRamp->setText(QApplication::translate("ccViewerClass", "Show Color ramp", Q_NULLPTR));
        actionShowColorRamp->setShortcut(QApplication::translate("ccViewerClass", "R", Q_NULLPTR));
        actionShowScalarField->setText(QApplication::translate("ccViewerClass", "Show Scalar field", Q_NULLPTR));
        actionShowScalarField->setShortcut(QApplication::translate("ccViewerClass", "S", Q_NULLPTR));
        actionDummyAction->setText(QApplication::translate("ccViewerClass", "DummyAction", Q_NULLPTR));
        actionDelete->setText(QApplication::translate("ccViewerClass", "Delete", Q_NULLPTR));
        actionDelete->setShortcut(QApplication::translate("ccViewerClass", "Del", Q_NULLPTR));
        actionSetOrthoView->setText(QApplication::translate("ccViewerClass", "Orthographic projection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetOrthoView->setToolTip(QApplication::translate("ccViewerClass", "Set orthographic projection for current 3D View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetOrthoView->setStatusTip(QApplication::translate("ccViewerClass", "Set orthographic projection for current 3D View", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionSetOrthoView->setShortcut(QApplication::translate("ccViewerClass", "F2", Q_NULLPTR));
        actionSetCenteredPerspectiveView->setText(QApplication::translate("ccViewerClass", "Object-centered perspective", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetCenteredPerspectiveView->setToolTip(QApplication::translate("ccViewerClass", "Set object-centered perspective for current 3D View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetCenteredPerspectiveView->setStatusTip(QApplication::translate("ccViewerClass", "Set object-centered perspective for current 3D View", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionSetCenteredPerspectiveView->setShortcut(QApplication::translate("ccViewerClass", "F3", Q_NULLPTR));
        actionSetViewerPerspectiveView->setText(QApplication::translate("ccViewerClass", "Viewer-based perspective", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetViewerPerspectiveView->setToolTip(QApplication::translate("ccViewerClass", "Set viewer-based perspective for current 3D View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewerPerspectiveView->setStatusTip(QApplication::translate("ccViewerClass", "Set viewer-based perspective for current 3D View", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionSetViewerPerspectiveView->setShortcut(QApplication::translate("ccViewerClass", "F4", Q_NULLPTR));
        actionSetPivotAlwaysOn->setText(QApplication::translate("ccViewerClass", "Always visible", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetPivotAlwaysOn->setToolTip(QApplication::translate("ccViewerClass", "Pivot always visible", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetPivotAlwaysOn->setStatusTip(QApplication::translate("ccViewerClass", "Pivot always visible", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionSetPivotRotationOnly->setText(QApplication::translate("ccViewerClass", "Rotation only", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetPivotRotationOnly->setToolTip(QApplication::translate("ccViewerClass", "Pivot visible when rotating", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetPivotRotationOnly->setStatusTip(QApplication::translate("ccViewerClass", "Pivot visible when rotating", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionSetPivotOff->setText(QApplication::translate("ccViewerClass", "Never visible", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetPivotOff->setToolTip(QApplication::translate("ccViewerClass", "Pivot never visible", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetPivotOff->setStatusTip(QApplication::translate("ccViewerClass", "Pivot never visible", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionSetViewIso1->setText(QApplication::translate("ccViewerClass", "Iso front", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetViewIso1->setToolTip(QApplication::translate("ccViewerClass", "Set view to 'front' isometric", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewIso1->setStatusTip(QApplication::translate("ccViewerClass", "Set view to 'front' isometric", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionSetViewIso1->setShortcut(QApplication::translate("ccViewerClass", "7", Q_NULLPTR));
        actionSetViewIso2->setText(QApplication::translate("ccViewerClass", "Iso back", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSetViewIso2->setToolTip(QApplication::translate("ccViewerClass", "Set view to 'back' isometric", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSetViewIso2->setStatusTip(QApplication::translate("ccViewerClass", "Set view to 'back' isometric", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionSetViewIso2->setShortcut(QApplication::translate("ccViewerClass", "9", Q_NULLPTR));
        actionEnable3DMouse->setText(QApplication::translate("ccViewerClass", "Enable", Q_NULLPTR));
        actionZoomOnSelectedEntity->setText(QApplication::translate("ccViewerClass", "Zoom on", Q_NULLPTR));
        actionZoomOnSelectedEntity->setShortcut(QApplication::translate("ccViewerClass", "Z", Q_NULLPTR));
        actionGlobalZoom->setText(QApplication::translate("ccViewerClass", "Global Zoom", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionGlobalZoom->setStatusTip(QApplication::translate("ccViewerClass", "Global Zoom", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionNoFilter->setText(QApplication::translate("ccViewerClass", "Remove", Q_NULLPTR));
        actionLockRotationVertAxis->setText(QApplication::translate("ccViewerClass", "Lock rotation around vert. axis", Q_NULLPTR));
        actionLockRotationVertAxis->setShortcut(QApplication::translate("ccViewerClass", "L", Q_NULLPTR));
        actionEnableStereo->setText(QApplication::translate("ccViewerClass", "Stereo mode", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionEnableStereo->setToolTip(QApplication::translate("ccViewerClass", "Enable stereo mode (with red-blue or red-cyan glasses)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionEnableStereo->setShortcut(QApplication::translate("ccViewerClass", "F10", Q_NULLPTR));
        actionShowMaterials->setText(QApplication::translate("ccViewerClass", "Show Texture/Materials", Q_NULLPTR));
        actionShowMaterials->setShortcut(QApplication::translate("ccViewerClass", "M", Q_NULLPTR));
        menuOptions->setTitle(QApplication::translate("ccViewerClass", "Options", Q_NULLPTR));
        menuPerspective->setTitle(QApplication::translate("ccViewerClass", "Perspective", Q_NULLPTR));
        menuLights->setTitle(QApplication::translate("ccViewerClass", "Lights", Q_NULLPTR));
        menuStandardViews->setTitle(QApplication::translate("ccViewerClass", "Standard views", Q_NULLPTR));
        menuSelected->setTitle(QApplication::translate("ccViewerClass", "Selected entity", Q_NULLPTR));
        menuSelectSF->setTitle(QApplication::translate("ccViewerClass", "Current S.F.", Q_NULLPTR));
        menuRotationSymbol->setTitle(QApplication::translate("ccViewerClass", "Rotation symbol", Q_NULLPTR));
        menu3DMouse->setTitle(QApplication::translate("ccViewerClass", "3D mouse", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("ccViewerClass", "Help", Q_NULLPTR));
        menuPlugins->setTitle(QApplication::translate("ccViewerClass", "Shaders", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ccViewerClass: public Ui_ccViewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCVIEWER_H
