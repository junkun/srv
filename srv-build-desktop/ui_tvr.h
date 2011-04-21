/********************************************************************************
** Form generated from reading UI file 'tvr.ui'
**
** Created: Thu Apr 21 01:50:03 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TVR_H
#define UI_TVR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tvrWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionExit;
    QAction *actionRecord;
    QAction *actionPaused;
    QAction *actionPlay;
    QAction *actionStop;
    QAction *actionAbout;
    QAction *actionVolume;
    QWidget *centralwidget;
    QFrame *recordingInformationLabel;
    QLabel *label;
    QLabel *fileNameLabel;
    QLabel *fileNameEditLabel;
    QLabel *lengthFieldLabel;
    QLabel *lengthFieldEditLabel;
    QLabel *secondsLabel;
    QProgressBar *tvrProgressBar;
    QLabel *statusLabel;
    QLabel *statusLabelEdit;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QMenu *menuControls;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *tvrWindow)
    {
        if (tvrWindow->objectName().isEmpty())
            tvrWindow->setObjectName(QString::fromUtf8("tvrWindow"));
        tvrWindow->setWindowModality(Qt::ApplicationModal);
        tvrWindow->resize(340, 270);
        tvrWindow->setMinimumSize(QSize(340, 270));
        tvrWindow->setMaximumSize(QSize(340, 270));
        tvrWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        actionNew = new QAction(tvrWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/file-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(tvrWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/file-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(tvrWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/file-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSaveAs = new QAction(tvrWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/file-save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon3);
        actionExit = new QAction(tvrWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/file-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionRecord = new QAction(tvrWindow);
        actionRecord->setObjectName(QString::fromUtf8("actionRecord"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/record-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecord->setIcon(icon5);
        actionPaused = new QAction(tvrWindow);
        actionPaused->setObjectName(QString::fromUtf8("actionPaused"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/pause-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaused->setIcon(icon6);
        actionPlay = new QAction(tvrWindow);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/play-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon7);
        actionStop = new QAction(tvrWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/stop-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon8);
        actionAbout = new QAction(tvrWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionVolume = new QAction(tvrWindow);
        actionVolume->setObjectName(QString::fromUtf8("actionVolume"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/audio-volume-high.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVolume->setIcon(icon9);
        centralwidget = new QWidget(tvrWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        recordingInformationLabel = new QFrame(centralwidget);
        recordingInformationLabel->setObjectName(QString::fromUtf8("recordingInformationLabel"));
        recordingInformationLabel->setGeometry(QRect(4, 4, 331, 80));
        recordingInformationLabel->setFrameShape(QFrame::StyledPanel);
        recordingInformationLabel->setFrameShadow(QFrame::Raised);
        label = new QLabel(recordingInformationLabel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(4, 0, 121, 18));
        QFont font;
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        label->setFont(font);
        fileNameLabel = new QLabel(recordingInformationLabel);
        fileNameLabel->setObjectName(QString::fromUtf8("fileNameLabel"));
        fileNameLabel->setGeometry(QRect(5, 21, 71, 18));
        fileNameEditLabel = new QLabel(recordingInformationLabel);
        fileNameEditLabel->setObjectName(QString::fromUtf8("fileNameEditLabel"));
        fileNameEditLabel->setGeometry(QRect(81, 21, 131, 18));
        lengthFieldLabel = new QLabel(recordingInformationLabel);
        lengthFieldLabel->setObjectName(QString::fromUtf8("lengthFieldLabel"));
        lengthFieldLabel->setGeometry(QRect(5, 39, 62, 18));
        lengthFieldEditLabel = new QLabel(recordingInformationLabel);
        lengthFieldEditLabel->setObjectName(QString::fromUtf8("lengthFieldEditLabel"));
        lengthFieldEditLabel->setGeometry(QRect(60, 39, 21, 18));
        secondsLabel = new QLabel(recordingInformationLabel);
        secondsLabel->setObjectName(QString::fromUtf8("secondsLabel"));
        secondsLabel->setGeometry(QRect(85, 38, 31, 17));
        tvrProgressBar = new QProgressBar(centralwidget);
        tvrProgressBar->setObjectName(QString::fromUtf8("tvrProgressBar"));
        tvrProgressBar->setGeometry(QRect(10, 149, 321, 23));
        tvrProgressBar->setValue(0);
        tvrProgressBar->setTextVisible(true);
        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(11, 116, 62, 18));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        statusLabel->setFont(font1);
        statusLabelEdit = new QLabel(centralwidget);
        statusLabelEdit->setObjectName(QString::fromUtf8("statusLabelEdit"));
        statusLabelEdit->setGeometry(QRect(71, 116, 171, 18));
        tvrWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tvrWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 340, 25));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        menuControls = new QMenu(menubar);
        menuControls->setObjectName(QString::fromUtf8("menuControls"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        tvrWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(tvrWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        tvrWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(tvrWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setFloatable(false);
        tvrWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(menuControls->menuAction());
        menubar->addAction(menuHelp->menuAction());
        fileMenu->addSeparator();
        fileMenu->addAction(actionNew);
        fileMenu->addAction(actionOpen);
        fileMenu->addAction(actionVolume);
        fileMenu->addAction(actionSave);
        fileMenu->addAction(actionSaveAs);
        fileMenu->addSeparator();
        fileMenu->addAction(actionExit);
        menuControls->addAction(actionRecord);
        menuControls->addAction(actionPaused);
        menuControls->addAction(actionPlay);
        menuControls->addAction(actionStop);
        menuHelp->addAction(actionAbout);
        toolBar->addAction(actionRecord);
        toolBar->addSeparator();
        toolBar->addAction(actionPaused);
        toolBar->addSeparator();
        toolBar->addAction(actionStop);
        toolBar->addSeparator();
        toolBar->addAction(actionPlay);

        retranslateUi(tvrWindow);

        QMetaObject::connectSlotsByName(tvrWindow);
    } // setupUi

    void retranslateUi(QMainWindow *tvrWindow)
    {
        tvrWindow->setWindowTitle(QApplication::translate("tvrWindow", "Tvr", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("tvrWindow", "&New", 0, QApplication::UnicodeUTF8));
        actionNew->setShortcut(QApplication::translate("tvrWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("tvrWindow", "&Open", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("tvrWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("tvrWindow", "&Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("tvrWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSaveAs->setText(QApplication::translate("tvrWindow", "&Save As ...", 0, QApplication::UnicodeUTF8));
        actionSaveAs->setShortcut(QApplication::translate("tvrWindow", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("tvrWindow", "&Exit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("tvrWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionRecord->setText(QApplication::translate("tvrWindow", "&Record", 0, QApplication::UnicodeUTF8));
        actionRecord->setShortcut(QApplication::translate("tvrWindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionPaused->setText(QApplication::translate("tvrWindow", "&Pause", 0, QApplication::UnicodeUTF8));
        actionPaused->setShortcut(QApplication::translate("tvrWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionPlay->setText(QApplication::translate("tvrWindow", "&Play", 0, QApplication::UnicodeUTF8));
        actionPlay->setShortcut(QApplication::translate("tvrWindow", "Ctrl+Alt+P", 0, QApplication::UnicodeUTF8));
        actionStop->setText(QApplication::translate("tvrWindow", "&Stop", 0, QApplication::UnicodeUTF8));
        actionStop->setShortcut(QApplication::translate("tvrWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("tvrWindow", "&About", 0, QApplication::UnicodeUTF8));
        actionVolume->setText(QApplication::translate("tvrWindow", "Open &Volume Control", 0, QApplication::UnicodeUTF8));
        actionVolume->setShortcut(QApplication::translate("tvrWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("tvrWindow", "File Information", 0, QApplication::UnicodeUTF8));
        fileNameLabel->setText(QApplication::translate("tvrWindow", "File Name:", 0, QApplication::UnicodeUTF8));
        fileNameEditLabel->setText(QString());
        lengthFieldLabel->setText(QApplication::translate("tvrWindow", "Length:", 0, QApplication::UnicodeUTF8));
        lengthFieldEditLabel->setText(QString());
        secondsLabel->setText(QApplication::translate("tvrWindow", "secs", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QApplication::translate("tvrWindow", "Status:", 0, QApplication::UnicodeUTF8));
        statusLabelEdit->setText(QApplication::translate("tvrWindow", "None", 0, QApplication::UnicodeUTF8));
        fileMenu->setTitle(QApplication::translate("tvrWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuControls->setTitle(QApplication::translate("tvrWindow", "&Controls", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("tvrWindow", "&Help", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class tvrWindow: public Ui_tvrWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TVR_H
