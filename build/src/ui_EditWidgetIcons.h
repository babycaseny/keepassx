/********************************************************************************
** Form generated from reading UI file 'EditWidgetIcons.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWIDGETICONS_H
#define UI_EDITWIDGETICONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditWidgetIcons
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *defaultIconsRadio;
    QListView *defaultIconsView;
    QRadioButton *customIconsRadio;
    QListView *customIconsView;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *EditWidgetIcons)
    {
        if (EditWidgetIcons->objectName().isEmpty())
            EditWidgetIcons->setObjectName(QString::fromUtf8("EditWidgetIcons"));
        EditWidgetIcons->resize(400, 300);
        verticalLayout = new QVBoxLayout(EditWidgetIcons);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        defaultIconsRadio = new QRadioButton(EditWidgetIcons);
        defaultIconsRadio->setObjectName(QString::fromUtf8("defaultIconsRadio"));

        verticalLayout->addWidget(defaultIconsRadio);

        defaultIconsView = new QListView(EditWidgetIcons);
        defaultIconsView->setObjectName(QString::fromUtf8("defaultIconsView"));
        defaultIconsView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        defaultIconsView->setMovement(QListView::Static);
        defaultIconsView->setFlow(QListView::LeftToRight);
        defaultIconsView->setProperty("isWrapping", QVariant(true));
        defaultIconsView->setResizeMode(QListView::Adjust);
        defaultIconsView->setSpacing(8);
        defaultIconsView->setViewMode(QListView::IconMode);

        verticalLayout->addWidget(defaultIconsView);

        customIconsRadio = new QRadioButton(EditWidgetIcons);
        customIconsRadio->setObjectName(QString::fromUtf8("customIconsRadio"));

        verticalLayout->addWidget(customIconsRadio);

        customIconsView = new QListView(EditWidgetIcons);
        customIconsView->setObjectName(QString::fromUtf8("customIconsView"));
        customIconsView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        customIconsView->setMovement(QListView::Static);
        customIconsView->setFlow(QListView::LeftToRight);
        customIconsView->setProperty("isWrapping", QVariant(true));
        customIconsView->setResizeMode(QListView::Adjust);
        customIconsView->setSpacing(8);
        customIconsView->setViewMode(QListView::IconMode);

        verticalLayout->addWidget(customIconsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QPushButton(EditWidgetIcons);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout->addWidget(addButton);

        deleteButton = new QPushButton(EditWidgetIcons);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(defaultIconsRadio, defaultIconsView);
        QWidget::setTabOrder(defaultIconsView, customIconsRadio);
        QWidget::setTabOrder(customIconsRadio, customIconsView);
        QWidget::setTabOrder(customIconsView, addButton);
        QWidget::setTabOrder(addButton, deleteButton);

        retranslateUi(EditWidgetIcons);

        QMetaObject::connectSlotsByName(EditWidgetIcons);
    } // setupUi

    void retranslateUi(QWidget *EditWidgetIcons)
    {
        defaultIconsRadio->setText(QApplication::translate("EditWidgetIcons", "Use default icon", 0, QApplication::UnicodeUTF8));
        customIconsRadio->setText(QApplication::translate("EditWidgetIcons", "Use custom icon", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("EditWidgetIcons", "Add custom icon", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("EditWidgetIcons", "Delete custom icon", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(EditWidgetIcons);
    } // retranslateUi

};

namespace Ui {
    class EditWidgetIcons: public Ui_EditWidgetIcons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWIDGETICONS_H
