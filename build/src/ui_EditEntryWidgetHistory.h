/********************************************************************************
** Form generated from reading UI file 'EditEntryWidgetHistory.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITENTRYWIDGETHISTORY_H
#define UI_EDITENTRYWIDGETHISTORY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditEntryWidgetHistory
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *historyView;
    QHBoxLayout *horizontalLayout;
    QPushButton *showButton;
    QPushButton *restoreButton;
    QPushButton *deleteButton;
    QPushButton *deleteAllButton;

    void setupUi(QWidget *EditEntryWidgetHistory)
    {
        if (EditEntryWidgetHistory->objectName().isEmpty())
            EditEntryWidgetHistory->setObjectName(QString::fromUtf8("EditEntryWidgetHistory"));
        EditEntryWidgetHistory->resize(400, 300);
        verticalLayout = new QVBoxLayout(EditEntryWidgetHistory);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        historyView = new QTreeView(EditEntryWidgetHistory);
        historyView->setObjectName(QString::fromUtf8("historyView"));
        historyView->setSortingEnabled(true);

        verticalLayout->addWidget(historyView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        showButton = new QPushButton(EditEntryWidgetHistory);
        showButton->setObjectName(QString::fromUtf8("showButton"));
        showButton->setEnabled(false);

        horizontalLayout->addWidget(showButton);

        restoreButton = new QPushButton(EditEntryWidgetHistory);
        restoreButton->setObjectName(QString::fromUtf8("restoreButton"));
        restoreButton->setEnabled(false);

        horizontalLayout->addWidget(restoreButton);

        deleteButton = new QPushButton(EditEntryWidgetHistory);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setEnabled(false);

        horizontalLayout->addWidget(deleteButton);

        deleteAllButton = new QPushButton(EditEntryWidgetHistory);
        deleteAllButton->setObjectName(QString::fromUtf8("deleteAllButton"));
        deleteAllButton->setEnabled(false);

        horizontalLayout->addWidget(deleteAllButton);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(historyView, showButton);
        QWidget::setTabOrder(showButton, restoreButton);
        QWidget::setTabOrder(restoreButton, deleteButton);
        QWidget::setTabOrder(deleteButton, deleteAllButton);

        retranslateUi(EditEntryWidgetHistory);

        QMetaObject::connectSlotsByName(EditEntryWidgetHistory);
    } // setupUi

    void retranslateUi(QWidget *EditEntryWidgetHistory)
    {
        showButton->setText(QApplication::translate("EditEntryWidgetHistory", "Show", 0, QApplication::UnicodeUTF8));
        restoreButton->setText(QApplication::translate("EditEntryWidgetHistory", "Restore", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("EditEntryWidgetHistory", "Delete", 0, QApplication::UnicodeUTF8));
        deleteAllButton->setText(QApplication::translate("EditEntryWidgetHistory", "Delete all", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(EditEntryWidgetHistory);
    } // retranslateUi

};

namespace Ui {
    class EditEntryWidgetHistory: public Ui_EditEntryWidgetHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITENTRYWIDGETHISTORY_H
