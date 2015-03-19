/********************************************************************************
** Form generated from reading UI file 'PasswordGeneratorWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDGENERATORWIDGET_H
#define UI_PASSWORDGENERATORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <gui/PasswordComboBox.h>

QT_BEGIN_NAMESPACE

class Ui_PasswordGeneratorWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *labelNewPassword;
    QHBoxLayout *horizontalLayout_2;
    PasswordComboBox *editNewPassword;
    QToolButton *togglePasswordButton;
    QLabel *labelLength;
    QHBoxLayout *horizontalLayout_4;
    QSlider *sliderLength;
    QSpinBox *spinBoxLength;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *checkBoxUpper;
    QToolButton *checkBoxLower;
    QToolButton *checkBoxNumbers;
    QToolButton *checkBoxSpecialChars;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxExcludeAlike;
    QCheckBox *checkBoxEnsureEvery;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonApply;
    QButtonGroup *optionButtons;

    void setupUi(QWidget *PasswordGeneratorWidget)
    {
        if (PasswordGeneratorWidget->objectName().isEmpty())
            PasswordGeneratorWidget->setObjectName(QString::fromUtf8("PasswordGeneratorWidget"));
        PasswordGeneratorWidget->resize(434, 250);
        verticalLayout_2 = new QVBoxLayout(PasswordGeneratorWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelNewPassword = new QLabel(PasswordGeneratorWidget);
        labelNewPassword->setObjectName(QString::fromUtf8("labelNewPassword"));

        gridLayout->addWidget(labelNewPassword, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        editNewPassword = new PasswordComboBox(PasswordGeneratorWidget);
        editNewPassword->setObjectName(QString::fromUtf8("editNewPassword"));
        editNewPassword->setEditable(true);

        horizontalLayout_2->addWidget(editNewPassword);

        togglePasswordButton = new QToolButton(PasswordGeneratorWidget);
        togglePasswordButton->setObjectName(QString::fromUtf8("togglePasswordButton"));
        togglePasswordButton->setCheckable(true);

        horizontalLayout_2->addWidget(togglePasswordButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        labelLength = new QLabel(PasswordGeneratorWidget);
        labelLength->setObjectName(QString::fromUtf8("labelLength"));

        gridLayout->addWidget(labelLength, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        sliderLength = new QSlider(PasswordGeneratorWidget);
        sliderLength->setObjectName(QString::fromUtf8("sliderLength"));
        sliderLength->setMinimum(1);
        sliderLength->setMaximum(64);
        sliderLength->setOrientation(Qt::Horizontal);
        sliderLength->setTickPosition(QSlider::TicksBelow);
        sliderLength->setTickInterval(8);

        horizontalLayout_4->addWidget(sliderLength);

        spinBoxLength = new QSpinBox(PasswordGeneratorWidget);
        spinBoxLength->setObjectName(QString::fromUtf8("spinBoxLength"));
        spinBoxLength->setMinimum(1);
        spinBoxLength->setMaximum(999);

        horizontalLayout_4->addWidget(spinBoxLength);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        groupBox = new QGroupBox(PasswordGeneratorWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkBoxUpper = new QToolButton(groupBox);
        optionButtons = new QButtonGroup(PasswordGeneratorWidget);
        optionButtons->setObjectName(QString::fromUtf8("optionButtons"));
        optionButtons->setExclusive(false);
        optionButtons->addButton(checkBoxUpper);
        checkBoxUpper->setObjectName(QString::fromUtf8("checkBoxUpper"));
        checkBoxUpper->setText(QString::fromUtf8("A-Z"));
        checkBoxUpper->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxUpper);

        checkBoxLower = new QToolButton(groupBox);
        optionButtons->addButton(checkBoxLower);
        checkBoxLower->setObjectName(QString::fromUtf8("checkBoxLower"));
        checkBoxLower->setText(QString::fromUtf8("a-z"));
        checkBoxLower->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxLower);

        checkBoxNumbers = new QToolButton(groupBox);
        optionButtons->addButton(checkBoxNumbers);
        checkBoxNumbers->setObjectName(QString::fromUtf8("checkBoxNumbers"));
        checkBoxNumbers->setText(QString::fromUtf8("0-9"));
        checkBoxNumbers->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxNumbers);

        checkBoxSpecialChars = new QToolButton(groupBox);
        optionButtons->addButton(checkBoxSpecialChars);
        checkBoxSpecialChars->setObjectName(QString::fromUtf8("checkBoxSpecialChars"));
        checkBoxSpecialChars->setText(QString::fromUtf8("/*_& ..."));
        checkBoxSpecialChars->setCheckable(true);

        horizontalLayout_5->addWidget(checkBoxSpecialChars);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_5);

        checkBoxExcludeAlike = new QCheckBox(groupBox);
        optionButtons->addButton(checkBoxExcludeAlike);
        checkBoxExcludeAlike->setObjectName(QString::fromUtf8("checkBoxExcludeAlike"));

        verticalLayout->addWidget(checkBoxExcludeAlike);

        checkBoxEnsureEvery = new QCheckBox(groupBox);
        optionButtons->addButton(checkBoxEnsureEvery);
        checkBoxEnsureEvery->setObjectName(QString::fromUtf8("checkBoxEnsureEvery"));

        verticalLayout->addWidget(checkBoxEnsureEvery);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        buttonApply = new QPushButton(PasswordGeneratorWidget);
        buttonApply->setObjectName(QString::fromUtf8("buttonApply"));
        buttonApply->setEnabled(false);

        horizontalLayout_3->addWidget(buttonApply);


        verticalLayout_2->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(editNewPassword, togglePasswordButton);
        QWidget::setTabOrder(togglePasswordButton, sliderLength);
        QWidget::setTabOrder(sliderLength, spinBoxLength);
        QWidget::setTabOrder(spinBoxLength, checkBoxUpper);
        QWidget::setTabOrder(checkBoxUpper, checkBoxLower);
        QWidget::setTabOrder(checkBoxLower, checkBoxNumbers);
        QWidget::setTabOrder(checkBoxNumbers, checkBoxSpecialChars);
        QWidget::setTabOrder(checkBoxSpecialChars, checkBoxExcludeAlike);
        QWidget::setTabOrder(checkBoxExcludeAlike, checkBoxEnsureEvery);
        QWidget::setTabOrder(checkBoxEnsureEvery, buttonApply);

        retranslateUi(PasswordGeneratorWidget);

        QMetaObject::connectSlotsByName(PasswordGeneratorWidget);
    } // setupUi

    void retranslateUi(QWidget *PasswordGeneratorWidget)
    {
        PasswordGeneratorWidget->setWindowTitle(QString());
        labelNewPassword->setText(QApplication::translate("PasswordGeneratorWidget", "Password:", 0, QApplication::UnicodeUTF8));
        labelLength->setText(QApplication::translate("PasswordGeneratorWidget", "Length:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PasswordGeneratorWidget", "Character Types", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxUpper->setToolTip(QApplication::translate("PasswordGeneratorWidget", "Upper Case Letters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxLower->setToolTip(QApplication::translate("PasswordGeneratorWidget", "Lower Case Letters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxNumbers->setToolTip(QApplication::translate("PasswordGeneratorWidget", "Numbers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxSpecialChars->setToolTip(QApplication::translate("PasswordGeneratorWidget", "Special Characters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxExcludeAlike->setText(QApplication::translate("PasswordGeneratorWidget", "Exclude look-alike characters", 0, QApplication::UnicodeUTF8));
        checkBoxEnsureEvery->setText(QApplication::translate("PasswordGeneratorWidget", "Ensure that the password contains characters from every group", 0, QApplication::UnicodeUTF8));
        buttonApply->setText(QApplication::translate("PasswordGeneratorWidget", "Accept", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PasswordGeneratorWidget: public Ui_PasswordGeneratorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDGENERATORWIDGET_H
