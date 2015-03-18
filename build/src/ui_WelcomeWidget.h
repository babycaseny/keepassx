/********************************************************************************
** Form generated from reading UI file 'WelcomeWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWIDGET_H
#define UI_WELCOMEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelWelcome;

    void setupUi(QWidget *WelcomeWidget)
    {
        if (WelcomeWidget->objectName().isEmpty())
            WelcomeWidget->setObjectName(QString::fromUtf8("WelcomeWidget"));
        verticalLayout = new QVBoxLayout(WelcomeWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelWelcome = new QLabel(WelcomeWidget);
        labelWelcome->setObjectName(QString::fromUtf8("labelWelcome"));
        labelWelcome->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelWelcome);


        retranslateUi(WelcomeWidget);

        QMetaObject::connectSlotsByName(WelcomeWidget);
    } // setupUi

    void retranslateUi(QWidget *WelcomeWidget)
    {
        labelWelcome->setText(QApplication::translate("WelcomeWidget", "Welcome!", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(WelcomeWidget);
    } // retranslateUi

};

namespace Ui {
    class WelcomeWidget: public Ui_WelcomeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWIDGET_H
