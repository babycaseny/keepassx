/********************************************************************************
** Form generated from reading UI file 'SettingsWidgetSecurity.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIDGETSECURITY_H
#define UI_SETTINGSWIDGETSECURITY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWidgetSecurity
{
public:
    QFormLayout *formLayout;
    QCheckBox *clearClipboardCheckBox;
    QSpinBox *clearClipboardSpinBox;
    QCheckBox *lockDatabaseIdleCheckBox;
    QSpinBox *lockDatabaseIdleSpinBox;
    QCheckBox *passwordCleartextCheckBox;
    QCheckBox *autoTypeAskCheckBox;

    void setupUi(QWidget *SettingsWidgetSecurity)
    {
        if (SettingsWidgetSecurity->objectName().isEmpty())
            SettingsWidgetSecurity->setObjectName(QString::fromUtf8("SettingsWidgetSecurity"));
        SettingsWidgetSecurity->resize(374, 303);
        formLayout = new QFormLayout(SettingsWidgetSecurity);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        clearClipboardCheckBox = new QCheckBox(SettingsWidgetSecurity);
        clearClipboardCheckBox->setObjectName(QString::fromUtf8("clearClipboardCheckBox"));

        formLayout->setWidget(0, QFormLayout::LabelRole, clearClipboardCheckBox);

        clearClipboardSpinBox = new QSpinBox(SettingsWidgetSecurity);
        clearClipboardSpinBox->setObjectName(QString::fromUtf8("clearClipboardSpinBox"));
        clearClipboardSpinBox->setEnabled(false);
        clearClipboardSpinBox->setMinimum(1);
        clearClipboardSpinBox->setMaximum(999);

        formLayout->setWidget(0, QFormLayout::FieldRole, clearClipboardSpinBox);

        lockDatabaseIdleCheckBox = new QCheckBox(SettingsWidgetSecurity);
        lockDatabaseIdleCheckBox->setObjectName(QString::fromUtf8("lockDatabaseIdleCheckBox"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lockDatabaseIdleCheckBox);

        lockDatabaseIdleSpinBox = new QSpinBox(SettingsWidgetSecurity);
        lockDatabaseIdleSpinBox->setObjectName(QString::fromUtf8("lockDatabaseIdleSpinBox"));
        lockDatabaseIdleSpinBox->setEnabled(false);
        lockDatabaseIdleSpinBox->setMinimum(10);
        lockDatabaseIdleSpinBox->setMaximum(9999);

        formLayout->setWidget(1, QFormLayout::FieldRole, lockDatabaseIdleSpinBox);

        passwordCleartextCheckBox = new QCheckBox(SettingsWidgetSecurity);
        passwordCleartextCheckBox->setObjectName(QString::fromUtf8("passwordCleartextCheckBox"));

        formLayout->setWidget(2, QFormLayout::LabelRole, passwordCleartextCheckBox);

        autoTypeAskCheckBox = new QCheckBox(SettingsWidgetSecurity);
        autoTypeAskCheckBox->setObjectName(QString::fromUtf8("autoTypeAskCheckBox"));

        formLayout->setWidget(3, QFormLayout::LabelRole, autoTypeAskCheckBox);

        QWidget::setTabOrder(clearClipboardCheckBox, clearClipboardSpinBox);

        retranslateUi(SettingsWidgetSecurity);

        QMetaObject::connectSlotsByName(SettingsWidgetSecurity);
    } // setupUi

    void retranslateUi(QWidget *SettingsWidgetSecurity)
    {
        clearClipboardCheckBox->setText(QApplication::translate("SettingsWidgetSecurity", "Clear clipboard after", 0, QApplication::UnicodeUTF8));
        clearClipboardSpinBox->setSuffix(QApplication::translate("SettingsWidgetSecurity", " sec", 0, QApplication::UnicodeUTF8));
        lockDatabaseIdleCheckBox->setText(QApplication::translate("SettingsWidgetSecurity", "Lock databases after inactivity of", 0, QApplication::UnicodeUTF8));
        lockDatabaseIdleSpinBox->setSuffix(QApplication::translate("SettingsWidgetSecurity", " sec", 0, QApplication::UnicodeUTF8));
        passwordCleartextCheckBox->setText(QApplication::translate("SettingsWidgetSecurity", "Show passwords in cleartext by default", 0, QApplication::UnicodeUTF8));
        autoTypeAskCheckBox->setText(QApplication::translate("SettingsWidgetSecurity", "Always ask before performing auto-type", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SettingsWidgetSecurity);
    } // retranslateUi

};

namespace Ui {
    class SettingsWidgetSecurity: public Ui_SettingsWidgetSecurity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIDGETSECURITY_H
