/********************************************************************************
** Form generated from reading UI file 'EditEntryWidgetAdvanced.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITENTRYWIDGETADVANCED_H
#define UI_EDITENTRYWIDGETADVANCED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "gui/entry/EditEntryWidget_p.h"

QT_BEGIN_NAMESPACE

class Ui_EditEntryWidgetAdvanced
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *attributesBox;
    QHBoxLayout *horizontalLayout;
    AttributesListView *attributesView;
    QPlainTextEdit *attributesEdit;
    QVBoxLayout *verticalLayout_2;
    QPushButton *addAttributeButton;
    QPushButton *editAttributeButton;
    QPushButton *removeAttributeButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *attachmentsBox;
    QHBoxLayout *horizontalLayout_2;
    QListView *attachmentsView;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addAttachmentButton;
    QPushButton *removeAttachmentButton;
    QPushButton *openAttachmentButton;
    QPushButton *saveAttachmentButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *EditEntryWidgetAdvanced)
    {
        if (EditEntryWidgetAdvanced->objectName().isEmpty())
            EditEntryWidgetAdvanced->setObjectName(QString::fromUtf8("EditEntryWidgetAdvanced"));
        EditEntryWidgetAdvanced->resize(400, 315);
        verticalLayout = new QVBoxLayout(EditEntryWidgetAdvanced);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        attributesBox = new QGroupBox(EditEntryWidgetAdvanced);
        attributesBox->setObjectName(QString::fromUtf8("attributesBox"));
        horizontalLayout = new QHBoxLayout(attributesBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        attributesView = new AttributesListView(attributesBox);
        attributesView->setObjectName(QString::fromUtf8("attributesView"));

        horizontalLayout->addWidget(attributesView);

        attributesEdit = new QPlainTextEdit(attributesBox);
        attributesEdit->setObjectName(QString::fromUtf8("attributesEdit"));
        attributesEdit->setEnabled(false);

        horizontalLayout->addWidget(attributesEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        addAttributeButton = new QPushButton(attributesBox);
        addAttributeButton->setObjectName(QString::fromUtf8("addAttributeButton"));

        verticalLayout_2->addWidget(addAttributeButton);

        editAttributeButton = new QPushButton(attributesBox);
        editAttributeButton->setObjectName(QString::fromUtf8("editAttributeButton"));
        editAttributeButton->setEnabled(false);

        verticalLayout_2->addWidget(editAttributeButton);

        removeAttributeButton = new QPushButton(attributesBox);
        removeAttributeButton->setObjectName(QString::fromUtf8("removeAttributeButton"));
        removeAttributeButton->setEnabled(false);

        verticalLayout_2->addWidget(removeAttributeButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addWidget(attributesBox);

        attachmentsBox = new QGroupBox(EditEntryWidgetAdvanced);
        attachmentsBox->setObjectName(QString::fromUtf8("attachmentsBox"));
        horizontalLayout_2 = new QHBoxLayout(attachmentsBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        attachmentsView = new QListView(attachmentsBox);
        attachmentsView->setObjectName(QString::fromUtf8("attachmentsView"));
        attachmentsView->setFlow(QListView::LeftToRight);
        attachmentsView->setProperty("isWrapping", QVariant(true));

        horizontalLayout_2->addWidget(attachmentsView);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        addAttachmentButton = new QPushButton(attachmentsBox);
        addAttachmentButton->setObjectName(QString::fromUtf8("addAttachmentButton"));

        verticalLayout_3->addWidget(addAttachmentButton);

        removeAttachmentButton = new QPushButton(attachmentsBox);
        removeAttachmentButton->setObjectName(QString::fromUtf8("removeAttachmentButton"));
        removeAttachmentButton->setEnabled(false);

        verticalLayout_3->addWidget(removeAttachmentButton);

        openAttachmentButton = new QPushButton(attachmentsBox);
        openAttachmentButton->setObjectName(QString::fromUtf8("openAttachmentButton"));
        openAttachmentButton->setEnabled(false);

        verticalLayout_3->addWidget(openAttachmentButton);

        saveAttachmentButton = new QPushButton(attachmentsBox);
        saveAttachmentButton->setObjectName(QString::fromUtf8("saveAttachmentButton"));
        saveAttachmentButton->setEnabled(false);

        verticalLayout_3->addWidget(saveAttachmentButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addWidget(attachmentsBox);

        QWidget::setTabOrder(attributesView, attributesEdit);
        QWidget::setTabOrder(attributesEdit, addAttributeButton);
        QWidget::setTabOrder(addAttributeButton, editAttributeButton);
        QWidget::setTabOrder(editAttributeButton, removeAttributeButton);
        QWidget::setTabOrder(removeAttributeButton, attachmentsView);
        QWidget::setTabOrder(attachmentsView, addAttachmentButton);
        QWidget::setTabOrder(addAttachmentButton, removeAttachmentButton);
        QWidget::setTabOrder(removeAttachmentButton, saveAttachmentButton);

        retranslateUi(EditEntryWidgetAdvanced);

        QMetaObject::connectSlotsByName(EditEntryWidgetAdvanced);
    } // setupUi

    void retranslateUi(QWidget *EditEntryWidgetAdvanced)
    {
        attributesBox->setTitle(QApplication::translate("EditEntryWidgetAdvanced", "Additional attributes", 0, QApplication::UnicodeUTF8));
        addAttributeButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Add", 0, QApplication::UnicodeUTF8));
        editAttributeButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Edit", 0, QApplication::UnicodeUTF8));
        removeAttributeButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Remove", 0, QApplication::UnicodeUTF8));
        attachmentsBox->setTitle(QApplication::translate("EditEntryWidgetAdvanced", "Attachments", 0, QApplication::UnicodeUTF8));
        addAttachmentButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Add", 0, QApplication::UnicodeUTF8));
        removeAttachmentButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Remove", 0, QApplication::UnicodeUTF8));
        openAttachmentButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Open", 0, QApplication::UnicodeUTF8));
        saveAttachmentButton->setText(QApplication::translate("EditEntryWidgetAdvanced", "Save", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(EditEntryWidgetAdvanced);
    } // retranslateUi

};

namespace Ui {
    class EditEntryWidgetAdvanced: public Ui_EditEntryWidgetAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITENTRYWIDGETADVANCED_H
