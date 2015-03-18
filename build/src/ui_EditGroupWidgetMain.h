/********************************************************************************
** Form generated from reading UI file 'EditGroupWidgetMain.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITGROUPWIDGETMAIN_H
#define UI_EDITGROUPWIDGETMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditGroupWidgetMain
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelName;
    QLineEdit *editName;
    QLabel *labelNotes;
    QPlainTextEdit *editNotes;
    QDateTimeEdit *expireDatePicker;
    QCheckBox *expireCheck;
    QLabel *searchLabel;
    QComboBox *searchComboBox;
    QLabel *autotypeLabel;
    QComboBox *autotypeComboBox;

    void setupUi(QWidget *EditGroupWidgetMain)
    {
        if (EditGroupWidgetMain->objectName().isEmpty())
            EditGroupWidgetMain->setObjectName(QString::fromUtf8("EditGroupWidgetMain"));
        EditGroupWidgetMain->resize(676, 334);
        verticalLayout = new QVBoxLayout(EditGroupWidgetMain);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        labelName = new QLabel(EditGroupWidgetMain);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelName);

        editName = new QLineEdit(EditGroupWidgetMain);
        editName->setObjectName(QString::fromUtf8("editName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editName);

        labelNotes = new QLabel(EditGroupWidgetMain);
        labelNotes->setObjectName(QString::fromUtf8("labelNotes"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelNotes);

        editNotes = new QPlainTextEdit(EditGroupWidgetMain);
        editNotes->setObjectName(QString::fromUtf8("editNotes"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editNotes);

        expireDatePicker = new QDateTimeEdit(EditGroupWidgetMain);
        expireDatePicker->setObjectName(QString::fromUtf8("expireDatePicker"));
        expireDatePicker->setEnabled(false);
        expireDatePicker->setCalendarPopup(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, expireDatePicker);

        expireCheck = new QCheckBox(EditGroupWidgetMain);
        expireCheck->setObjectName(QString::fromUtf8("expireCheck"));

        formLayout->setWidget(2, QFormLayout::LabelRole, expireCheck);

        searchLabel = new QLabel(EditGroupWidgetMain);
        searchLabel->setObjectName(QString::fromUtf8("searchLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, searchLabel);

        searchComboBox = new QComboBox(EditGroupWidgetMain);
        searchComboBox->setObjectName(QString::fromUtf8("searchComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, searchComboBox);

        autotypeLabel = new QLabel(EditGroupWidgetMain);
        autotypeLabel->setObjectName(QString::fromUtf8("autotypeLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, autotypeLabel);

        autotypeComboBox = new QComboBox(EditGroupWidgetMain);
        autotypeComboBox->setObjectName(QString::fromUtf8("autotypeComboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, autotypeComboBox);


        verticalLayout->addLayout(formLayout);

        QWidget::setTabOrder(editName, editNotes);
        QWidget::setTabOrder(editNotes, expireCheck);
        QWidget::setTabOrder(expireCheck, expireDatePicker);
        QWidget::setTabOrder(expireDatePicker, searchComboBox);
        QWidget::setTabOrder(searchComboBox, autotypeComboBox);

        retranslateUi(EditGroupWidgetMain);

        QMetaObject::connectSlotsByName(EditGroupWidgetMain);
    } // setupUi

    void retranslateUi(QWidget *EditGroupWidgetMain)
    {
        labelName->setText(QApplication::translate("EditGroupWidgetMain", "Name", 0, QApplication::UnicodeUTF8));
        labelNotes->setText(QApplication::translate("EditGroupWidgetMain", "Notes", 0, QApplication::UnicodeUTF8));
        expireCheck->setText(QApplication::translate("EditGroupWidgetMain", "Expires", 0, QApplication::UnicodeUTF8));
        searchLabel->setText(QApplication::translate("EditGroupWidgetMain", "Search", 0, QApplication::UnicodeUTF8));
        autotypeLabel->setText(QApplication::translate("EditGroupWidgetMain", "Auto-type", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(EditGroupWidgetMain);
    } // retranslateUi

};

namespace Ui {
    class EditGroupWidgetMain: public Ui_EditGroupWidgetMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITGROUPWIDGETMAIN_H
