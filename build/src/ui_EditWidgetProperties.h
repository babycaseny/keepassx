/********************************************************************************
** Form generated from reading UI file 'EditWidgetProperties.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWIDGETPROPERTIES_H
#define UI_EDITWIDGETPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditWidgetProperties
{
public:
    QFormLayout *formLayout;
    QLineEdit *createdEdit;
    QLineEdit *modifiedEdit;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *accessedEdit;
    QLabel *label_4;
    QLineEdit *uuidEdit;

    void setupUi(QWidget *EditWidgetProperties)
    {
        if (EditWidgetProperties->objectName().isEmpty())
            EditWidgetProperties->setObjectName(QString::fromUtf8("EditWidgetProperties"));
        EditWidgetProperties->resize(614, 328);
        formLayout = new QFormLayout(EditWidgetProperties);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        createdEdit = new QLineEdit(EditWidgetProperties);
        createdEdit->setObjectName(QString::fromUtf8("createdEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(createdEdit->sizePolicy().hasHeightForWidth());
        createdEdit->setSizePolicy(sizePolicy);
        createdEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, createdEdit);

        modifiedEdit = new QLineEdit(EditWidgetProperties);
        modifiedEdit->setObjectName(QString::fromUtf8("modifiedEdit"));
        sizePolicy.setHeightForWidth(modifiedEdit->sizePolicy().hasHeightForWidth());
        modifiedEdit->setSizePolicy(sizePolicy);
        modifiedEdit->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, modifiedEdit);

        label_2 = new QLabel(EditWidgetProperties);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label = new QLabel(EditWidgetProperties);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        label_3 = new QLabel(EditWidgetProperties);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        accessedEdit = new QLineEdit(EditWidgetProperties);
        accessedEdit->setObjectName(QString::fromUtf8("accessedEdit"));
        accessedEdit->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, accessedEdit);

        label_4 = new QLabel(EditWidgetProperties);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        uuidEdit = new QLineEdit(EditWidgetProperties);
        uuidEdit->setObjectName(QString::fromUtf8("uuidEdit"));
        uuidEdit->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, uuidEdit);

        QWidget::setTabOrder(createdEdit, modifiedEdit);
        QWidget::setTabOrder(modifiedEdit, accessedEdit);
        QWidget::setTabOrder(accessedEdit, uuidEdit);

        retranslateUi(EditWidgetProperties);

        QMetaObject::connectSlotsByName(EditWidgetProperties);
    } // setupUi

    void retranslateUi(QWidget *EditWidgetProperties)
    {
        label_2->setText(QApplication::translate("EditWidgetProperties", "Created:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EditWidgetProperties", "Modified:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("EditWidgetProperties", "Accessed:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EditWidgetProperties", "Uuid:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(EditWidgetProperties);
    } // retranslateUi

};

namespace Ui {
    class EditWidgetProperties: public Ui_EditWidgetProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWIDGETPROPERTIES_H
