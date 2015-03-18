/********************************************************************************
** Form generated from reading UI file 'SettingsWidgetGeneral.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIDGETGENERAL_H
#define UI_SETTINGSWIDGETGENERAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>
#include "autotype/ShortcutWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsWidgetGeneral
{
public:
    QFormLayout *formLayout;
    QCheckBox *rememberLastDatabasesCheckBox;
    QCheckBox *openPreviousDatabasesOnStartupCheckBox;
    QCheckBox *autoSaveOnExitCheckBox;
    QCheckBox *autoSaveAfterEveryChangeCheckBox;
    QCheckBox *minimizeOnCopyCheckBox;
    QCheckBox *useGroupIconOnEntryCreationCheckBox;
    QLabel *autoTypeShortcutLabel;
    ShortcutWidget *autoTypeShortcutWidget;
    QCheckBox *autoTypeEntryTitleMatchCheckBox;
    QLabel *languageLabel;
    QComboBox *languageComboBox;
    QCheckBox *systrayShowCheckBox;
    QCheckBox *systrayMinimizeToTrayCheckBox;

    void setupUi(QWidget *SettingsWidgetGeneral)
    {
        if (SettingsWidgetGeneral->objectName().isEmpty())
            SettingsWidgetGeneral->setObjectName(QString::fromUtf8("SettingsWidgetGeneral"));
        SettingsWidgetGeneral->resize(456, 313);
        formLayout = new QFormLayout(SettingsWidgetGeneral);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        rememberLastDatabasesCheckBox = new QCheckBox(SettingsWidgetGeneral);
        rememberLastDatabasesCheckBox->setObjectName(QString::fromUtf8("rememberLastDatabasesCheckBox"));
        rememberLastDatabasesCheckBox->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, rememberLastDatabasesCheckBox);

        openPreviousDatabasesOnStartupCheckBox = new QCheckBox(SettingsWidgetGeneral);
        openPreviousDatabasesOnStartupCheckBox->setObjectName(QString::fromUtf8("openPreviousDatabasesOnStartupCheckBox"));

        formLayout->setWidget(1, QFormLayout::LabelRole, openPreviousDatabasesOnStartupCheckBox);

        autoSaveOnExitCheckBox = new QCheckBox(SettingsWidgetGeneral);
        autoSaveOnExitCheckBox->setObjectName(QString::fromUtf8("autoSaveOnExitCheckBox"));

        formLayout->setWidget(2, QFormLayout::LabelRole, autoSaveOnExitCheckBox);

        autoSaveAfterEveryChangeCheckBox = new QCheckBox(SettingsWidgetGeneral);
        autoSaveAfterEveryChangeCheckBox->setObjectName(QString::fromUtf8("autoSaveAfterEveryChangeCheckBox"));

        formLayout->setWidget(3, QFormLayout::LabelRole, autoSaveAfterEveryChangeCheckBox);

        minimizeOnCopyCheckBox = new QCheckBox(SettingsWidgetGeneral);
        minimizeOnCopyCheckBox->setObjectName(QString::fromUtf8("minimizeOnCopyCheckBox"));

        formLayout->setWidget(4, QFormLayout::LabelRole, minimizeOnCopyCheckBox);

        useGroupIconOnEntryCreationCheckBox = new QCheckBox(SettingsWidgetGeneral);
        useGroupIconOnEntryCreationCheckBox->setObjectName(QString::fromUtf8("useGroupIconOnEntryCreationCheckBox"));

        formLayout->setWidget(5, QFormLayout::LabelRole, useGroupIconOnEntryCreationCheckBox);

        autoTypeShortcutLabel = new QLabel(SettingsWidgetGeneral);
        autoTypeShortcutLabel->setObjectName(QString::fromUtf8("autoTypeShortcutLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, autoTypeShortcutLabel);

        autoTypeShortcutWidget = new ShortcutWidget(SettingsWidgetGeneral);
        autoTypeShortcutWidget->setObjectName(QString::fromUtf8("autoTypeShortcutWidget"));

        formLayout->setWidget(6, QFormLayout::FieldRole, autoTypeShortcutWidget);

        autoTypeEntryTitleMatchCheckBox = new QCheckBox(SettingsWidgetGeneral);
        autoTypeEntryTitleMatchCheckBox->setObjectName(QString::fromUtf8("autoTypeEntryTitleMatchCheckBox"));

        formLayout->setWidget(7, QFormLayout::LabelRole, autoTypeEntryTitleMatchCheckBox);

        languageLabel = new QLabel(SettingsWidgetGeneral);
        languageLabel->setObjectName(QString::fromUtf8("languageLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, languageLabel);

        languageComboBox = new QComboBox(SettingsWidgetGeneral);
        languageComboBox->setObjectName(QString::fromUtf8("languageComboBox"));

        formLayout->setWidget(8, QFormLayout::FieldRole, languageComboBox);

        systrayShowCheckBox = new QCheckBox(SettingsWidgetGeneral);
        systrayShowCheckBox->setObjectName(QString::fromUtf8("systrayShowCheckBox"));

        formLayout->setWidget(9, QFormLayout::LabelRole, systrayShowCheckBox);

        systrayMinimizeToTrayCheckBox = new QCheckBox(SettingsWidgetGeneral);
        systrayMinimizeToTrayCheckBox->setObjectName(QString::fromUtf8("systrayMinimizeToTrayCheckBox"));
        systrayMinimizeToTrayCheckBox->setEnabled(false);

        formLayout->setWidget(10, QFormLayout::LabelRole, systrayMinimizeToTrayCheckBox);

        QWidget::setTabOrder(rememberLastDatabasesCheckBox, openPreviousDatabasesOnStartupCheckBox);
        QWidget::setTabOrder(openPreviousDatabasesOnStartupCheckBox, autoSaveOnExitCheckBox);
        QWidget::setTabOrder(autoSaveOnExitCheckBox, autoSaveAfterEveryChangeCheckBox);
        QWidget::setTabOrder(autoSaveAfterEveryChangeCheckBox, minimizeOnCopyCheckBox);
        QWidget::setTabOrder(minimizeOnCopyCheckBox, autoTypeShortcutWidget);

        retranslateUi(SettingsWidgetGeneral);

        QMetaObject::connectSlotsByName(SettingsWidgetGeneral);
    } // setupUi

    void retranslateUi(QWidget *SettingsWidgetGeneral)
    {
        rememberLastDatabasesCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Remember last databases", 0, QApplication::UnicodeUTF8));
        openPreviousDatabasesOnStartupCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Open previous databases on startup", 0, QApplication::UnicodeUTF8));
        autoSaveOnExitCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Automatically save on exit", 0, QApplication::UnicodeUTF8));
        autoSaveAfterEveryChangeCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Automatically save after every change", 0, QApplication::UnicodeUTF8));
        minimizeOnCopyCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Minimize when copying to clipboard", 0, QApplication::UnicodeUTF8));
        useGroupIconOnEntryCreationCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Use group icon on entry creation", 0, QApplication::UnicodeUTF8));
        autoTypeShortcutLabel->setText(QApplication::translate("SettingsWidgetGeneral", "Global Auto-Type shortcut", 0, QApplication::UnicodeUTF8));
        autoTypeEntryTitleMatchCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Use entry title to match windows for global auto-type", 0, QApplication::UnicodeUTF8));
        languageLabel->setText(QApplication::translate("SettingsWidgetGeneral", "Language", 0, QApplication::UnicodeUTF8));
        systrayShowCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Show a system tray icon", 0, QApplication::UnicodeUTF8));
        systrayMinimizeToTrayCheckBox->setText(QApplication::translate("SettingsWidgetGeneral", "Hide window to system tray when minimized", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SettingsWidgetGeneral);
    } // retranslateUi

};

namespace Ui {
    class SettingsWidgetGeneral: public Ui_SettingsWidgetGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIDGETGENERAL_H
