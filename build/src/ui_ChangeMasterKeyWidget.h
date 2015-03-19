/********************************************************************************
** Form generated from reading UI file 'ChangeMasterKeyWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEMASTERKEYWIDGET_H
#define UI_CHANGEMASTERKEYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "gui/PasswordEdit.h"

QT_BEGIN_NAMESPACE

class Ui_ChangeMasterKeyWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *headlineLabel;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *passwordGroup;
    QFormLayout *formLayout;
    QLabel *enterPasswordLabel;
    QHBoxLayout *horizontalLayout;
    PasswordEdit *enterPasswordEdit;
    QToolButton *togglePasswordButton;
    QLabel *repeatPasswordLabel;
    PasswordEdit *repeatPasswordEdit;
    QGroupBox *keyFileGroup;
    QGridLayout *gridLayout;
    QPushButton *browseKeyFileButton;
    QPushButton *createKeyFileButton;
    QComboBox *keyFileCombo;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *ChangeMasterKeyWidget)
    {
        if (ChangeMasterKeyWidget->objectName().isEmpty())
            ChangeMasterKeyWidget->setObjectName(QString::fromUtf8("ChangeMasterKeyWidget"));
        ChangeMasterKeyWidget->resize(438, 249);
        verticalLayout = new QVBoxLayout(ChangeMasterKeyWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        headlineLabel = new QLabel(ChangeMasterKeyWidget);
        headlineLabel->setObjectName(QString::fromUtf8("headlineLabel"));

        verticalLayout->addWidget(headlineLabel);

        verticalSpacer_2 = new QSpacerItem(1, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        passwordGroup = new QGroupBox(ChangeMasterKeyWidget);
        passwordGroup->setObjectName(QString::fromUtf8("passwordGroup"));
        passwordGroup->setCheckable(true);
        passwordGroup->setChecked(true);
        formLayout = new QFormLayout(passwordGroup);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        enterPasswordLabel = new QLabel(passwordGroup);
        enterPasswordLabel->setObjectName(QString::fromUtf8("enterPasswordLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, enterPasswordLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        enterPasswordEdit = new PasswordEdit(passwordGroup);
        enterPasswordEdit->setObjectName(QString::fromUtf8("enterPasswordEdit"));
        enterPasswordEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(enterPasswordEdit);

        togglePasswordButton = new QToolButton(passwordGroup);
        togglePasswordButton->setObjectName(QString::fromUtf8("togglePasswordButton"));
        togglePasswordButton->setCheckable(true);

        horizontalLayout->addWidget(togglePasswordButton);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        repeatPasswordLabel = new QLabel(passwordGroup);
        repeatPasswordLabel->setObjectName(QString::fromUtf8("repeatPasswordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, repeatPasswordLabel);

        repeatPasswordEdit = new PasswordEdit(passwordGroup);
        repeatPasswordEdit->setObjectName(QString::fromUtf8("repeatPasswordEdit"));
        repeatPasswordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, repeatPasswordEdit);


        verticalLayout->addWidget(passwordGroup);

        keyFileGroup = new QGroupBox(ChangeMasterKeyWidget);
        keyFileGroup->setObjectName(QString::fromUtf8("keyFileGroup"));
        keyFileGroup->setCheckable(true);
        gridLayout = new QGridLayout(keyFileGroup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        browseKeyFileButton = new QPushButton(keyFileGroup);
        browseKeyFileButton->setObjectName(QString::fromUtf8("browseKeyFileButton"));

        gridLayout->addWidget(browseKeyFileButton, 0, 2, 1, 1);

        createKeyFileButton = new QPushButton(keyFileGroup);
        createKeyFileButton->setObjectName(QString::fromUtf8("createKeyFileButton"));

        gridLayout->addWidget(createKeyFileButton, 1, 2, 1, 1);

        keyFileCombo = new QComboBox(keyFileGroup);
        keyFileCombo->setObjectName(QString::fromUtf8("keyFileCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(keyFileCombo->sizePolicy().hasHeightForWidth());
        keyFileCombo->setSizePolicy(sizePolicy);
        keyFileCombo->setEditable(true);

        gridLayout->addWidget(keyFileCombo, 0, 1, 1, 1);


        verticalLayout->addWidget(keyFileGroup);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ChangeMasterKeyWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(passwordGroup, enterPasswordEdit);
        QWidget::setTabOrder(enterPasswordEdit, togglePasswordButton);
        QWidget::setTabOrder(togglePasswordButton, repeatPasswordEdit);
        QWidget::setTabOrder(repeatPasswordEdit, keyFileGroup);
        QWidget::setTabOrder(keyFileGroup, keyFileCombo);
        QWidget::setTabOrder(keyFileCombo, browseKeyFileButton);
        QWidget::setTabOrder(browseKeyFileButton, createKeyFileButton);
        QWidget::setTabOrder(createKeyFileButton, buttonBox);

        retranslateUi(ChangeMasterKeyWidget);

        QMetaObject::connectSlotsByName(ChangeMasterKeyWidget);
    } // setupUi

    void retranslateUi(QWidget *ChangeMasterKeyWidget)
    {
        passwordGroup->setTitle(QApplication::translate("ChangeMasterKeyWidget", "Password", 0, QApplication::UnicodeUTF8));
        enterPasswordLabel->setText(QApplication::translate("ChangeMasterKeyWidget", "Enter password:", 0, QApplication::UnicodeUTF8));
        repeatPasswordLabel->setText(QApplication::translate("ChangeMasterKeyWidget", "Repeat password:", 0, QApplication::UnicodeUTF8));
        keyFileGroup->setTitle(QApplication::translate("ChangeMasterKeyWidget", "Key file", 0, QApplication::UnicodeUTF8));
        browseKeyFileButton->setText(QApplication::translate("ChangeMasterKeyWidget", "Browse", 0, QApplication::UnicodeUTF8));
        createKeyFileButton->setText(QApplication::translate("ChangeMasterKeyWidget", "Create", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ChangeMasterKeyWidget);
    } // retranslateUi

};

namespace Ui {
    class ChangeMasterKeyWidget: public Ui_ChangeMasterKeyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEMASTERKEYWIDGET_H
