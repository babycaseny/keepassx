/********************************************************************************
** Form generated from reading UI file 'EditEntryWidgetAutoType.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITENTRYWIDGETAUTOTYPE_H
#define UI_EDITENTRYWIDGETAUTOTYPE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "autotype/WindowSelectComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_EditEntryWidgetAutoType
{
public:
    QVBoxLayout *verticalLayout_2;
    QCheckBox *enableButton;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *inheritSequenceButton;
    QRadioButton *customSequenceButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *sequenceEdit;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QTreeView *assocView;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *assocAddButton;
    QPushButton *assocRemoveButton;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *windowTitleLabel;
    WindowSelectComboBox *windowTitleCombo;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *defaultWindowSequenceButton;
    QRadioButton *customWindowSequenceButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *windowSequenceEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EditEntryWidgetAutoType)
    {
        if (EditEntryWidgetAutoType->objectName().isEmpty())
            EditEntryWidgetAutoType->setObjectName(QString::fromUtf8("EditEntryWidgetAutoType"));
        EditEntryWidgetAutoType->resize(567, 347);
        verticalLayout_2 = new QVBoxLayout(EditEntryWidgetAutoType);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        enableButton = new QCheckBox(EditEntryWidgetAutoType);
        enableButton->setObjectName(QString::fromUtf8("enableButton"));

        verticalLayout_2->addWidget(enableButton);

        verticalSpacer_2 = new QSpacerItem(1, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        inheritSequenceButton = new QRadioButton(EditEntryWidgetAutoType);
        inheritSequenceButton->setObjectName(QString::fromUtf8("inheritSequenceButton"));

        verticalLayout_2->addWidget(inheritSequenceButton);

        customSequenceButton = new QRadioButton(EditEntryWidgetAutoType);
        customSequenceButton->setObjectName(QString::fromUtf8("customSequenceButton"));

        verticalLayout_2->addWidget(customSequenceButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sequenceEdit = new QLineEdit(EditEntryWidgetAutoType);
        sequenceEdit->setObjectName(QString::fromUtf8("sequenceEdit"));
        sequenceEdit->setEnabled(false);

        horizontalLayout->addWidget(sequenceEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        assocView = new QTreeView(EditEntryWidgetAutoType);
        assocView->setObjectName(QString::fromUtf8("assocView"));
        assocView->setRootIsDecorated(false);
        assocView->setUniformRowHeights(true);

        verticalLayout_3->addWidget(assocView);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        assocAddButton = new QPushButton(EditEntryWidgetAutoType);
        assocAddButton->setObjectName(QString::fromUtf8("assocAddButton"));
        assocAddButton->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(assocAddButton->sizePolicy().hasHeightForWidth());
        assocAddButton->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(assocAddButton);

        assocRemoveButton = new QPushButton(EditEntryWidgetAutoType);
        assocRemoveButton->setObjectName(QString::fromUtf8("assocRemoveButton"));
        assocRemoveButton->setEnabled(false);
        sizePolicy.setHeightForWidth(assocRemoveButton->sizePolicy().hasHeightForWidth());
        assocRemoveButton->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(assocRemoveButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        windowTitleLabel = new QLabel(EditEntryWidgetAutoType);
        windowTitleLabel->setObjectName(QString::fromUtf8("windowTitleLabel"));

        verticalLayout->addWidget(windowTitleLabel);

        windowTitleCombo = new WindowSelectComboBox(EditEntryWidgetAutoType);
        windowTitleCombo->setObjectName(QString::fromUtf8("windowTitleCombo"));

        verticalLayout->addWidget(windowTitleCombo);

        verticalSpacer_3 = new QSpacerItem(1, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        defaultWindowSequenceButton = new QRadioButton(EditEntryWidgetAutoType);
        defaultWindowSequenceButton->setObjectName(QString::fromUtf8("defaultWindowSequenceButton"));

        verticalLayout->addWidget(defaultWindowSequenceButton);

        customWindowSequenceButton = new QRadioButton(EditEntryWidgetAutoType);
        customWindowSequenceButton->setObjectName(QString::fromUtf8("customWindowSequenceButton"));

        verticalLayout->addWidget(customWindowSequenceButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        windowSequenceEdit = new QLineEdit(EditEntryWidgetAutoType);
        windowSequenceEdit->setObjectName(QString::fromUtf8("windowSequenceEdit"));
        windowSequenceEdit->setEnabled(false);

        horizontalLayout_2->addWidget(windowSequenceEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);

        verticalLayout_2->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(enableButton, inheritSequenceButton);
        QWidget::setTabOrder(inheritSequenceButton, customSequenceButton);
        QWidget::setTabOrder(customSequenceButton, sequenceEdit);
        QWidget::setTabOrder(sequenceEdit, assocView);
        QWidget::setTabOrder(assocView, windowTitleCombo);
        QWidget::setTabOrder(windowTitleCombo, defaultWindowSequenceButton);
        QWidget::setTabOrder(defaultWindowSequenceButton, customWindowSequenceButton);
        QWidget::setTabOrder(customWindowSequenceButton, windowSequenceEdit);
        QWidget::setTabOrder(windowSequenceEdit, assocAddButton);
        QWidget::setTabOrder(assocAddButton, assocRemoveButton);

        retranslateUi(EditEntryWidgetAutoType);

        QMetaObject::connectSlotsByName(EditEntryWidgetAutoType);
    } // setupUi

    void retranslateUi(QWidget *EditEntryWidgetAutoType)
    {
        enableButton->setText(QApplication::translate("EditEntryWidgetAutoType", "Enable Auto-Type for this entry", 0, QApplication::UnicodeUTF8));
        inheritSequenceButton->setText(QApplication::translate("EditEntryWidgetAutoType", "Inherit default Auto-Type sequence from the group", 0, QApplication::UnicodeUTF8));
        customSequenceButton->setText(QApplication::translate("EditEntryWidgetAutoType", "Use custom Auto-Type sequence:", 0, QApplication::UnicodeUTF8));
        assocAddButton->setText(QApplication::translate("EditEntryWidgetAutoType", "+", 0, QApplication::UnicodeUTF8));
        assocRemoveButton->setText(QApplication::translate("EditEntryWidgetAutoType", "-", 0, QApplication::UnicodeUTF8));
        windowTitleLabel->setText(QApplication::translate("EditEntryWidgetAutoType", "Window title:", 0, QApplication::UnicodeUTF8));
        defaultWindowSequenceButton->setText(QApplication::translate("EditEntryWidgetAutoType", "Use default sequence", 0, QApplication::UnicodeUTF8));
        customWindowSequenceButton->setText(QApplication::translate("EditEntryWidgetAutoType", "Set custom sequence:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(EditEntryWidgetAutoType);
    } // retranslateUi

};

namespace Ui {
    class EditEntryWidgetAutoType: public Ui_EditEntryWidgetAutoType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITENTRYWIDGETAUTOTYPE_H
