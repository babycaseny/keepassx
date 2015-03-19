/********************************************************************************
** Form generated from reading UI file 'SearchWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWIDGET_H
#define UI_SEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "gui/LineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_SearchWidget
{
public:
    QGridLayout *gridLayout;
    LineEdit *searchEdit;
    QHBoxLayout *horizontalLayout;
    QToolButton *closeSearchButton;
    QLabel *label;
    QWidget *optionsWidget;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *caseSensitiveCheckBox;
    QRadioButton *searchCurrentRadioButton;
    QRadioButton *searchRootRadioButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *SearchWidget)
    {
        if (SearchWidget->objectName().isEmpty())
            SearchWidget->setObjectName(QString::fromUtf8("SearchWidget"));
        SearchWidget->resize(630, 87);
        gridLayout = new QGridLayout(SearchWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        searchEdit = new LineEdit(SearchWidget);
        searchEdit->setObjectName(QString::fromUtf8("searchEdit"));

        gridLayout->addWidget(searchEdit, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        closeSearchButton = new QToolButton(SearchWidget);
        closeSearchButton->setObjectName(QString::fromUtf8("closeSearchButton"));
        closeSearchButton->setFocusPolicy(Qt::ClickFocus);
        closeSearchButton->setAutoRaise(true);

        horizontalLayout->addWidget(closeSearchButton);

        label = new QLabel(SearchWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        optionsWidget = new QWidget(SearchWidget);
        optionsWidget->setObjectName(QString::fromUtf8("optionsWidget"));
        horizontalLayout_2 = new QHBoxLayout(optionsWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        caseSensitiveCheckBox = new QCheckBox(optionsWidget);
        caseSensitiveCheckBox->setObjectName(QString::fromUtf8("caseSensitiveCheckBox"));

        horizontalLayout_2->addWidget(caseSensitiveCheckBox);

        searchCurrentRadioButton = new QRadioButton(optionsWidget);
        searchCurrentRadioButton->setObjectName(QString::fromUtf8("searchCurrentRadioButton"));
        searchCurrentRadioButton->setChecked(false);

        horizontalLayout_2->addWidget(searchCurrentRadioButton);

        searchRootRadioButton = new QRadioButton(optionsWidget);
        searchRootRadioButton->setObjectName(QString::fromUtf8("searchRootRadioButton"));
        searchRootRadioButton->setChecked(true);

        horizontalLayout_2->addWidget(searchRootRadioButton);

        horizontalSpacer = new QSpacerItem(255, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addWidget(optionsWidget, 1, 1, 1, 1);

        QWidget::setTabOrder(closeSearchButton, searchEdit);
        QWidget::setTabOrder(searchEdit, caseSensitiveCheckBox);
        QWidget::setTabOrder(caseSensitiveCheckBox, searchCurrentRadioButton);
        QWidget::setTabOrder(searchCurrentRadioButton, searchRootRadioButton);

        retranslateUi(SearchWidget);

        QMetaObject::connectSlotsByName(SearchWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchWidget)
    {
        label->setText(QApplication::translate("SearchWidget", "Find:", 0, QApplication::UnicodeUTF8));
        caseSensitiveCheckBox->setText(QApplication::translate("SearchWidget", "Case sensitive", 0, QApplication::UnicodeUTF8));
        searchCurrentRadioButton->setText(QApplication::translate("SearchWidget", "Current group", 0, QApplication::UnicodeUTF8));
        searchRootRadioButton->setText(QApplication::translate("SearchWidget", "Root group", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SearchWidget);
    } // retranslateUi

};

namespace Ui {
    class SearchWidget: public Ui_SearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWIDGET_H
