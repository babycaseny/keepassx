/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "gui/DatabaseTabWidget.h"
#include "gui/SettingsWidget.h"
#include "gui/WelcomeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionDatabaseOpen;
    QAction *actionDatabaseSave;
    QAction *actionDatabaseClose;
    QAction *actionDatabaseNew;
    QAction *actionEntryNew;
    QAction *actionEntryEdit;
    QAction *actionEntryDelete;
    QAction *actionGroupNew;
    QAction *actionGroupEdit;
    QAction *actionGroupDelete;
    QAction *actionDatabaseSaveAs;
    QAction *actionChangeMasterKey;
    QAction *actionChangeDatabaseSettings;
    QAction *actionImportKeePass1;
    QAction *actionEntryClone;
    QAction *actionSearch;
    QAction *actionEntryCopyUsername;
    QAction *actionEntryCopyPassword;
    QAction *actionSettings;
    QAction *actionEntryAutoType;
    QAction *actionEntryOpenUrl;
    QAction *actionLockDatabases;
    QAction *actionEntryCopyTitle;
    QAction *actionEntryCopyURL;
    QAction *actionEntryCopyNotes;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageDatabase;
    QVBoxLayout *verticalLayout_2;
    DatabaseTabWidget *tabWidget;
    QWidget *pageSettings;
    QVBoxLayout *verticalLayout_3;
    SettingsWidget *settingsWidget;
    QWidget *pageWelcome;
    QVBoxLayout *verticalLayout_5;
    WelcomeWidget *welcomeWidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuRecentDatabases;
    QMenu *menuHelp;
    QMenu *menuEntries;
    QMenu *menuEntryCopyAttribute;
    QMenu *menuGroups;
    QMenu *menuExtras;
    QMenu *menuView;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setWindowTitle(QString::fromUtf8("KeePassX"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionDatabaseOpen = new QAction(MainWindow);
        actionDatabaseOpen->setObjectName(QString::fromUtf8("actionDatabaseOpen"));
        actionDatabaseSave = new QAction(MainWindow);
        actionDatabaseSave->setObjectName(QString::fromUtf8("actionDatabaseSave"));
        actionDatabaseSave->setEnabled(false);
        actionDatabaseClose = new QAction(MainWindow);
        actionDatabaseClose->setObjectName(QString::fromUtf8("actionDatabaseClose"));
        actionDatabaseClose->setEnabled(false);
        actionDatabaseNew = new QAction(MainWindow);
        actionDatabaseNew->setObjectName(QString::fromUtf8("actionDatabaseNew"));
        actionEntryNew = new QAction(MainWindow);
        actionEntryNew->setObjectName(QString::fromUtf8("actionEntryNew"));
        actionEntryNew->setEnabled(false);
        actionEntryEdit = new QAction(MainWindow);
        actionEntryEdit->setObjectName(QString::fromUtf8("actionEntryEdit"));
        actionEntryEdit->setEnabled(false);
        actionEntryDelete = new QAction(MainWindow);
        actionEntryDelete->setObjectName(QString::fromUtf8("actionEntryDelete"));
        actionEntryDelete->setEnabled(false);
        actionGroupNew = new QAction(MainWindow);
        actionGroupNew->setObjectName(QString::fromUtf8("actionGroupNew"));
        actionGroupNew->setEnabled(false);
        actionGroupEdit = new QAction(MainWindow);
        actionGroupEdit->setObjectName(QString::fromUtf8("actionGroupEdit"));
        actionGroupEdit->setEnabled(false);
        actionGroupDelete = new QAction(MainWindow);
        actionGroupDelete->setObjectName(QString::fromUtf8("actionGroupDelete"));
        actionGroupDelete->setEnabled(false);
        actionDatabaseSaveAs = new QAction(MainWindow);
        actionDatabaseSaveAs->setObjectName(QString::fromUtf8("actionDatabaseSaveAs"));
        actionDatabaseSaveAs->setEnabled(false);
        actionChangeMasterKey = new QAction(MainWindow);
        actionChangeMasterKey->setObjectName(QString::fromUtf8("actionChangeMasterKey"));
        actionChangeMasterKey->setEnabled(false);
        actionChangeDatabaseSettings = new QAction(MainWindow);
        actionChangeDatabaseSettings->setObjectName(QString::fromUtf8("actionChangeDatabaseSettings"));
        actionChangeDatabaseSettings->setEnabled(false);
        actionImportKeePass1 = new QAction(MainWindow);
        actionImportKeePass1->setObjectName(QString::fromUtf8("actionImportKeePass1"));
        actionEntryClone = new QAction(MainWindow);
        actionEntryClone->setObjectName(QString::fromUtf8("actionEntryClone"));
        actionEntryClone->setEnabled(false);
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        actionSearch->setEnabled(false);
        actionEntryCopyUsername = new QAction(MainWindow);
        actionEntryCopyUsername->setObjectName(QString::fromUtf8("actionEntryCopyUsername"));
        actionEntryCopyUsername->setEnabled(false);
        actionEntryCopyPassword = new QAction(MainWindow);
        actionEntryCopyPassword->setObjectName(QString::fromUtf8("actionEntryCopyPassword"));
        actionEntryCopyPassword->setEnabled(false);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionEntryAutoType = new QAction(MainWindow);
        actionEntryAutoType->setObjectName(QString::fromUtf8("actionEntryAutoType"));
        actionEntryAutoType->setEnabled(false);
        actionEntryOpenUrl = new QAction(MainWindow);
        actionEntryOpenUrl->setObjectName(QString::fromUtf8("actionEntryOpenUrl"));
        actionEntryOpenUrl->setEnabled(false);
        actionLockDatabases = new QAction(MainWindow);
        actionLockDatabases->setObjectName(QString::fromUtf8("actionLockDatabases"));
        actionLockDatabases->setEnabled(false);
        actionEntryCopyTitle = new QAction(MainWindow);
        actionEntryCopyTitle->setObjectName(QString::fromUtf8("actionEntryCopyTitle"));
        actionEntryCopyTitle->setEnabled(false);
        actionEntryCopyURL = new QAction(MainWindow);
        actionEntryCopyURL->setObjectName(QString::fromUtf8("actionEntryCopyURL"));
        actionEntryCopyURL->setEnabled(false);
        actionEntryCopyNotes = new QAction(MainWindow);
        actionEntryCopyNotes->setObjectName(QString::fromUtf8("actionEntryCopyNotes"));
        actionEntryCopyNotes->setEnabled(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageDatabase = new QWidget();
        pageDatabase->setObjectName(QString::fromUtf8("pageDatabase"));
        verticalLayout_2 = new QVBoxLayout(pageDatabase);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new DatabaseTabWidget(pageDatabase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);

        verticalLayout_2->addWidget(tabWidget);

        stackedWidget->addWidget(pageDatabase);
        pageSettings = new QWidget();
        pageSettings->setObjectName(QString::fromUtf8("pageSettings"));
        verticalLayout_3 = new QVBoxLayout(pageSettings);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        settingsWidget = new SettingsWidget(pageSettings);
        settingsWidget->setObjectName(QString::fromUtf8("settingsWidget"));

        verticalLayout_3->addWidget(settingsWidget);

        stackedWidget->addWidget(pageSettings);
        pageWelcome = new QWidget();
        pageWelcome->setObjectName(QString::fromUtf8("pageWelcome"));
        verticalLayout_5 = new QVBoxLayout(pageWelcome);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        welcomeWidget = new WelcomeWidget(pageWelcome);
        welcomeWidget->setObjectName(QString::fromUtf8("welcomeWidget"));

        verticalLayout_5->addWidget(welcomeWidget);

        stackedWidget->addWidget(pageWelcome);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuRecentDatabases = new QMenu(menuFile);
        menuRecentDatabases->setObjectName(QString::fromUtf8("menuRecentDatabases"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEntries = new QMenu(menubar);
        menuEntries->setObjectName(QString::fromUtf8("menuEntries"));
        menuEntryCopyAttribute = new QMenu(menuEntries);
        menuEntryCopyAttribute->setObjectName(QString::fromUtf8("menuEntryCopyAttribute"));
        menuEntryCopyAttribute->setEnabled(false);
        menuGroups = new QMenu(menubar);
        menuGroups->setObjectName(QString::fromUtf8("menuGroups"));
        menuExtras = new QMenu(menubar);
        menuExtras->setObjectName(QString::fromUtf8("menuExtras"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEntries->menuAction());
        menubar->addAction(menuGroups->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuExtras->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionDatabaseNew);
        menuFile->addAction(actionDatabaseOpen);
        menuFile->addAction(menuRecentDatabases->menuAction());
        menuFile->addAction(actionDatabaseSave);
        menuFile->addAction(actionDatabaseSaveAs);
        menuFile->addAction(actionDatabaseClose);
        menuFile->addSeparator();
        menuFile->addAction(actionChangeMasterKey);
        menuFile->addAction(actionChangeDatabaseSettings);
        menuFile->addSeparator();
        menuFile->addAction(actionImportKeePass1);
        menuFile->addSeparator();
        menuFile->addAction(actionLockDatabases);
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuEntries->addAction(actionEntryNew);
        menuEntries->addAction(actionEntryClone);
        menuEntries->addAction(actionEntryEdit);
        menuEntries->addAction(actionEntryDelete);
        menuEntries->addAction(menuEntryCopyAttribute->menuAction());
        menuEntries->addAction(actionEntryAutoType);
        menuEntries->addAction(actionEntryOpenUrl);
        menuEntries->addAction(actionSearch);
        menuEntryCopyAttribute->addAction(actionEntryCopyTitle);
        menuEntryCopyAttribute->addAction(actionEntryCopyUsername);
        menuEntryCopyAttribute->addAction(actionEntryCopyPassword);
        menuEntryCopyAttribute->addAction(actionEntryCopyURL);
        menuEntryCopyAttribute->addAction(actionEntryCopyNotes);
        menuEntryCopyAttribute->addSeparator();
        menuGroups->addAction(actionGroupNew);
        menuGroups->addAction(actionGroupEdit);
        menuGroups->addAction(actionGroupDelete);
        menuExtras->addAction(actionSettings);
        toolBar->addAction(actionDatabaseOpen);
        toolBar->addAction(actionDatabaseSave);
        toolBar->addSeparator();
        toolBar->addAction(actionEntryNew);
        toolBar->addAction(actionEntryEdit);
        toolBar->addAction(actionEntryDelete);
        toolBar->addSeparator();
        toolBar->addAction(actionEntryCopyUsername);
        toolBar->addAction(actionEntryCopyPassword);
        toolBar->addSeparator();
        toolBar->addAction(actionLockDatabases);
        toolBar->addAction(actionSearch);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionDatabaseOpen->setText(QApplication::translate("MainWindow", "Open database", 0, QApplication::UnicodeUTF8));
        actionDatabaseSave->setText(QApplication::translate("MainWindow", "Save database", 0, QApplication::UnicodeUTF8));
        actionDatabaseClose->setText(QApplication::translate("MainWindow", "Close database", 0, QApplication::UnicodeUTF8));
        actionDatabaseNew->setText(QApplication::translate("MainWindow", "New database", 0, QApplication::UnicodeUTF8));
        actionEntryNew->setText(QApplication::translate("MainWindow", "Add new entry", 0, QApplication::UnicodeUTF8));
        actionEntryEdit->setText(QApplication::translate("MainWindow", "View/Edit entry", 0, QApplication::UnicodeUTF8));
        actionEntryDelete->setText(QApplication::translate("MainWindow", "Delete entry", 0, QApplication::UnicodeUTF8));
        actionGroupNew->setText(QApplication::translate("MainWindow", "Add new group", 0, QApplication::UnicodeUTF8));
        actionGroupEdit->setText(QApplication::translate("MainWindow", "Edit group", 0, QApplication::UnicodeUTF8));
        actionGroupDelete->setText(QApplication::translate("MainWindow", "Delete group", 0, QApplication::UnicodeUTF8));
        actionDatabaseSaveAs->setText(QApplication::translate("MainWindow", "Save database as", 0, QApplication::UnicodeUTF8));
        actionChangeMasterKey->setText(QApplication::translate("MainWindow", "Change master key", 0, QApplication::UnicodeUTF8));
        actionChangeDatabaseSettings->setText(QApplication::translate("MainWindow", "Database settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionChangeDatabaseSettings->setToolTip(QApplication::translate("MainWindow", "Database settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionImportKeePass1->setText(QApplication::translate("MainWindow", "Import KeePass 1 database", 0, QApplication::UnicodeUTF8));
        actionEntryClone->setText(QApplication::translate("MainWindow", "Clone entry", 0, QApplication::UnicodeUTF8));
        actionSearch->setText(QApplication::translate("MainWindow", "Find", 0, QApplication::UnicodeUTF8));
        actionEntryCopyUsername->setText(QApplication::translate("MainWindow", "Username", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEntryCopyUsername->setToolTip(QApplication::translate("MainWindow", "Copy username to clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEntryCopyPassword->setText(QApplication::translate("MainWindow", "Password", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEntryCopyPassword->setToolTip(QApplication::translate("MainWindow", "Copy password to clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        actionEntryAutoType->setText(QApplication::translate("MainWindow", "Perform Auto-Type", 0, QApplication::UnicodeUTF8));
        actionEntryOpenUrl->setText(QApplication::translate("MainWindow", "Open URL", 0, QApplication::UnicodeUTF8));
        actionLockDatabases->setText(QApplication::translate("MainWindow", "Lock databases", 0, QApplication::UnicodeUTF8));
        actionEntryCopyTitle->setText(QApplication::translate("MainWindow", "Title", 0, QApplication::UnicodeUTF8));
        actionEntryCopyURL->setText(QApplication::translate("MainWindow", "URL", 0, QApplication::UnicodeUTF8));
        actionEntryCopyNotes->setText(QApplication::translate("MainWindow", "Notes", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "Database", 0, QApplication::UnicodeUTF8));
        menuRecentDatabases->setTitle(QApplication::translate("MainWindow", "Recent databases", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuEntries->setTitle(QApplication::translate("MainWindow", "Entries", 0, QApplication::UnicodeUTF8));
        menuEntryCopyAttribute->setTitle(QApplication::translate("MainWindow", "Copy attribute to clipboard", 0, QApplication::UnicodeUTF8));
        menuGroups->setTitle(QApplication::translate("MainWindow", "Groups", 0, QApplication::UnicodeUTF8));
        menuExtras->setTitle(QApplication::translate("MainWindow", "Extras", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
