/********************************************************************************
** Form generated from reading UI file 'EditEntryWidgetMain.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITENTRYWIDGETMAIN_H
#define UI_EDITENTRYWIDGETMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "gui/PasswordEdit.h"
#include "gui/PasswordGeneratorWidget.h"

QT_BEGIN_NAMESPACE

class Ui_EditEntryWidgetMain
{
public:
    QFormLayout *formLayout;
    QLabel *titleLabel;
    QLineEdit *titleEdit;
    QLabel *usernameLabel;
    QLineEdit *usernameEdit;
    QLabel *passwordLabel;
    QHBoxLayout *horizontalLayout;
    PasswordEdit *passwordEdit;
    QToolButton *togglePasswordButton;
    QLabel *passwordRepeatLabel;
    QHBoxLayout *horizontalLayout_4;
    PasswordEdit *passwordRepeatEdit;
    QToolButton *tooglePasswordGeneratorButton;
    QLabel *urlLabel;
    QLineEdit *urlEdit;
    QCheckBox *expireCheck;
    QHBoxLayout *horizontalLayout_2;
    QDateTimeEdit *expireDatePicker;
    QPushButton *expirePresets;
    QLabel *notesLabel;
    QPlainTextEdit *notesEdit;
    PasswordGeneratorWidget *passwordGenerator;

    void setupUi(QWidget *EditEntryWidgetMain)
    {
        if (EditEntryWidgetMain->objectName().isEmpty())
            EditEntryWidgetMain->setObjectName(QString::fromUtf8("EditEntryWidgetMain"));
        EditEntryWidgetMain->resize(372, 301);
        formLayout = new QFormLayout(EditEntryWidgetMain);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        titleLabel = new QLabel(EditEntryWidgetMain);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, titleLabel);

        titleEdit = new QLineEdit(EditEntryWidgetMain);
        titleEdit->setObjectName(QString::fromUtf8("titleEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, titleEdit);

        usernameLabel = new QLabel(EditEntryWidgetMain);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, usernameLabel);

        usernameEdit = new QLineEdit(EditEntryWidgetMain);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, usernameEdit);

        passwordLabel = new QLabel(EditEntryWidgetMain);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, passwordLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        passwordEdit = new PasswordEdit(EditEntryWidgetMain);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(passwordEdit);

        togglePasswordButton = new QToolButton(EditEntryWidgetMain);
        togglePasswordButton->setObjectName(QString::fromUtf8("togglePasswordButton"));
        togglePasswordButton->setCheckable(true);

        horizontalLayout->addWidget(togglePasswordButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        passwordRepeatLabel = new QLabel(EditEntryWidgetMain);
        passwordRepeatLabel->setObjectName(QString::fromUtf8("passwordRepeatLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, passwordRepeatLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        passwordRepeatEdit = new PasswordEdit(EditEntryWidgetMain);
        passwordRepeatEdit->setObjectName(QString::fromUtf8("passwordRepeatEdit"));
        passwordRepeatEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(passwordRepeatEdit);

        tooglePasswordGeneratorButton = new QToolButton(EditEntryWidgetMain);
        tooglePasswordGeneratorButton->setObjectName(QString::fromUtf8("tooglePasswordGeneratorButton"));
        tooglePasswordGeneratorButton->setCheckable(true);

        horizontalLayout_4->addWidget(tooglePasswordGeneratorButton);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_4);

        urlLabel = new QLabel(EditEntryWidgetMain);
        urlLabel->setObjectName(QString::fromUtf8("urlLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, urlLabel);

        urlEdit = new QLineEdit(EditEntryWidgetMain);
        urlEdit->setObjectName(QString::fromUtf8("urlEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, urlEdit);

        expireCheck = new QCheckBox(EditEntryWidgetMain);
        expireCheck->setObjectName(QString::fromUtf8("expireCheck"));

        formLayout->setWidget(8, QFormLayout::LabelRole, expireCheck);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        expireDatePicker = new QDateTimeEdit(EditEntryWidgetMain);
        expireDatePicker->setObjectName(QString::fromUtf8("expireDatePicker"));
        expireDatePicker->setEnabled(false);
        expireDatePicker->setCalendarPopup(true);

        horizontalLayout_2->addWidget(expireDatePicker);

        expirePresets = new QPushButton(EditEntryWidgetMain);
        expirePresets->setObjectName(QString::fromUtf8("expirePresets"));

        horizontalLayout_2->addWidget(expirePresets);


        formLayout->setLayout(8, QFormLayout::FieldRole, horizontalLayout_2);

        notesLabel = new QLabel(EditEntryWidgetMain);
        notesLabel->setObjectName(QString::fromUtf8("notesLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, notesLabel);

        notesEdit = new QPlainTextEdit(EditEntryWidgetMain);
        notesEdit->setObjectName(QString::fromUtf8("notesEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(notesEdit->sizePolicy().hasHeightForWidth());
        notesEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(9, QFormLayout::FieldRole, notesEdit);

        passwordGenerator = new PasswordGeneratorWidget(EditEntryWidgetMain);
        passwordGenerator->setObjectName(QString::fromUtf8("passwordGenerator"));

        formLayout->setWidget(6, QFormLayout::FieldRole, passwordGenerator);

        QWidget::setTabOrder(titleEdit, usernameEdit);
        QWidget::setTabOrder(usernameEdit, passwordEdit);
        QWidget::setTabOrder(passwordEdit, togglePasswordButton);
        QWidget::setTabOrder(togglePasswordButton, passwordRepeatEdit);
        QWidget::setTabOrder(passwordRepeatEdit, tooglePasswordGeneratorButton);
        QWidget::setTabOrder(tooglePasswordGeneratorButton, urlEdit);
        QWidget::setTabOrder(urlEdit, expireCheck);
        QWidget::setTabOrder(expireCheck, expireDatePicker);
        QWidget::setTabOrder(expireDatePicker, expirePresets);
        QWidget::setTabOrder(expirePresets, notesEdit);

        retranslateUi(EditEntryWidgetMain);

        QMetaObject::connectSlotsByName(EditEntryWidgetMain);
    } // setupUi

    void retranslateUi(QWidget *EditEntryWidgetMain)
    {
        titleLabel->setText(QApplication::translate("EditEntryWidgetMain", "Title:", 0, QApplication::UnicodeUTF8));
        usernameLabel->setText(QApplication::translate("EditEntryWidgetMain", "Username:", 0, QApplication::UnicodeUTF8));
        passwordLabel->setText(QApplication::translate("EditEntryWidgetMain", "Password:", 0, QApplication::UnicodeUTF8));
        passwordRepeatLabel->setText(QApplication::translate("EditEntryWidgetMain", "Repeat:", 0, QApplication::UnicodeUTF8));
        tooglePasswordGeneratorButton->setText(QApplication::translate("EditEntryWidgetMain", "Gen.", 0, QApplication::UnicodeUTF8));
        urlLabel->setText(QApplication::translate("EditEntryWidgetMain", "URL:", 0, QApplication::UnicodeUTF8));
        expireCheck->setText(QApplication::translate("EditEntryWidgetMain", "Expires", 0, QApplication::UnicodeUTF8));
        expirePresets->setText(QApplication::translate("EditEntryWidgetMain", "Presets", 0, QApplication::UnicodeUTF8));
        notesLabel->setText(QApplication::translate("EditEntryWidgetMain", "Notes:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(EditEntryWidgetMain);
    } // retranslateUi

};

namespace Ui {
    class EditEntryWidgetMain: public Ui_EditEntryWidgetMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITENTRYWIDGETMAIN_H
