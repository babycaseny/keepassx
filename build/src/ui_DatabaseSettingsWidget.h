/********************************************************************************
** Form generated from reading UI file 'DatabaseSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASESETTINGSWIDGET_H
#define UI_DATABASESETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DatabaseSettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QFormLayout *formLayout;
    QLabel *dbNameLabel;
    QLineEdit *dbNameEdit;
    QLabel *dbDescriptionLabel;
    QLineEdit *dbDescriptionEdit;
    QLabel *transformRoundsLabel;
    QLabel *defaultUsernameLabel;
    QLineEdit *defaultUsernameEdit;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpinBox *historyMaxSizeSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *historyMaxItemsSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *transformRoundsSpinBox;
    QPushButton *transformBenchmarkButton;
    QCheckBox *historyMaxItemsCheckBox;
    QCheckBox *historyMaxSizeCheckBox;
    QCheckBox *recycleBinEnabledCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *DatabaseSettingsWidget)
    {
        if (DatabaseSettingsWidget->objectName().isEmpty())
            DatabaseSettingsWidget->setObjectName(QString::fromUtf8("DatabaseSettingsWidget"));
        DatabaseSettingsWidget->resize(500, 399);
        verticalLayout = new QVBoxLayout(DatabaseSettingsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(1, 3, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        dbNameLabel = new QLabel(DatabaseSettingsWidget);
        dbNameLabel->setObjectName(QString::fromUtf8("dbNameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, dbNameLabel);

        dbNameEdit = new QLineEdit(DatabaseSettingsWidget);
        dbNameEdit->setObjectName(QString::fromUtf8("dbNameEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dbNameEdit);

        dbDescriptionLabel = new QLabel(DatabaseSettingsWidget);
        dbDescriptionLabel->setObjectName(QString::fromUtf8("dbDescriptionLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, dbDescriptionLabel);

        dbDescriptionEdit = new QLineEdit(DatabaseSettingsWidget);
        dbDescriptionEdit->setObjectName(QString::fromUtf8("dbDescriptionEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, dbDescriptionEdit);

        transformRoundsLabel = new QLabel(DatabaseSettingsWidget);
        transformRoundsLabel->setObjectName(QString::fromUtf8("transformRoundsLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, transformRoundsLabel);

        defaultUsernameLabel = new QLabel(DatabaseSettingsWidget);
        defaultUsernameLabel->setObjectName(QString::fromUtf8("defaultUsernameLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, defaultUsernameLabel);

        defaultUsernameEdit = new QLineEdit(DatabaseSettingsWidget);
        defaultUsernameEdit->setObjectName(QString::fromUtf8("defaultUsernameEdit"));
        defaultUsernameEdit->setEnabled(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, defaultUsernameEdit);

        label = new QLabel(DatabaseSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        historyMaxSizeSpinBox = new QSpinBox(DatabaseSettingsWidget);
        historyMaxSizeSpinBox->setObjectName(QString::fromUtf8("historyMaxSizeSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(historyMaxSizeSpinBox->sizePolicy().hasHeightForWidth());
        historyMaxSizeSpinBox->setSizePolicy(sizePolicy);
        historyMaxSizeSpinBox->setMinimum(1);
        historyMaxSizeSpinBox->setMaximum(2000000000);

        horizontalLayout->addWidget(historyMaxSizeSpinBox);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        historyMaxItemsSpinBox = new QSpinBox(DatabaseSettingsWidget);
        historyMaxItemsSpinBox->setObjectName(QString::fromUtf8("historyMaxItemsSpinBox"));
        sizePolicy.setHeightForWidth(historyMaxItemsSpinBox->sizePolicy().hasHeightForWidth());
        historyMaxItemsSpinBox->setSizePolicy(sizePolicy);
        historyMaxItemsSpinBox->setMaximum(2000000000);

        horizontalLayout_2->addWidget(historyMaxItemsSpinBox);


        formLayout->setLayout(6, QFormLayout::FieldRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        transformRoundsSpinBox = new QSpinBox(DatabaseSettingsWidget);
        transformRoundsSpinBox->setObjectName(QString::fromUtf8("transformRoundsSpinBox"));
        sizePolicy.setHeightForWidth(transformRoundsSpinBox->sizePolicy().hasHeightForWidth());
        transformRoundsSpinBox->setSizePolicy(sizePolicy);
        transformRoundsSpinBox->setMinimum(1);
        transformRoundsSpinBox->setMaximum(1000000000);

        horizontalLayout_3->addWidget(transformRoundsSpinBox);

        transformBenchmarkButton = new QPushButton(DatabaseSettingsWidget);
        transformBenchmarkButton->setObjectName(QString::fromUtf8("transformBenchmarkButton"));

        horizontalLayout_3->addWidget(transformBenchmarkButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);

        historyMaxItemsCheckBox = new QCheckBox(DatabaseSettingsWidget);
        historyMaxItemsCheckBox->setObjectName(QString::fromUtf8("historyMaxItemsCheckBox"));

        formLayout->setWidget(6, QFormLayout::LabelRole, historyMaxItemsCheckBox);

        historyMaxSizeCheckBox = new QCheckBox(DatabaseSettingsWidget);
        historyMaxSizeCheckBox->setObjectName(QString::fromUtf8("historyMaxSizeCheckBox"));

        formLayout->setWidget(7, QFormLayout::LabelRole, historyMaxSizeCheckBox);

        recycleBinEnabledCheckBox = new QCheckBox(DatabaseSettingsWidget);
        recycleBinEnabledCheckBox->setObjectName(QString::fromUtf8("recycleBinEnabledCheckBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, recycleBinEnabledCheckBox);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DatabaseSettingsWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(dbNameEdit, dbDescriptionEdit);
        QWidget::setTabOrder(dbDescriptionEdit, transformRoundsSpinBox);
        QWidget::setTabOrder(transformRoundsSpinBox, transformBenchmarkButton);
        QWidget::setTabOrder(transformBenchmarkButton, defaultUsernameEdit);
        QWidget::setTabOrder(defaultUsernameEdit, recycleBinEnabledCheckBox);
        QWidget::setTabOrder(recycleBinEnabledCheckBox, historyMaxItemsCheckBox);
        QWidget::setTabOrder(historyMaxItemsCheckBox, historyMaxItemsSpinBox);
        QWidget::setTabOrder(historyMaxItemsSpinBox, historyMaxSizeCheckBox);
        QWidget::setTabOrder(historyMaxSizeCheckBox, historyMaxSizeSpinBox);
        QWidget::setTabOrder(historyMaxSizeSpinBox, buttonBox);

        retranslateUi(DatabaseSettingsWidget);

        QMetaObject::connectSlotsByName(DatabaseSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *DatabaseSettingsWidget)
    {
        dbNameLabel->setText(QApplication::translate("DatabaseSettingsWidget", "Database name:", 0, QApplication::UnicodeUTF8));
        dbDescriptionLabel->setText(QApplication::translate("DatabaseSettingsWidget", "Database description:", 0, QApplication::UnicodeUTF8));
        transformRoundsLabel->setText(QApplication::translate("DatabaseSettingsWidget", "Transform rounds:", 0, QApplication::UnicodeUTF8));
        defaultUsernameLabel->setText(QApplication::translate("DatabaseSettingsWidget", "Default username:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DatabaseSettingsWidget", "Use recycle bin:", 0, QApplication::UnicodeUTF8));
        historyMaxSizeSpinBox->setSuffix(QApplication::translate("DatabaseSettingsWidget", " MiB", 0, QApplication::UnicodeUTF8));
        transformBenchmarkButton->setText(QApplication::translate("DatabaseSettingsWidget", "Benchmark", 0, QApplication::UnicodeUTF8));
        historyMaxItemsCheckBox->setText(QApplication::translate("DatabaseSettingsWidget", "Max. history items:", 0, QApplication::UnicodeUTF8));
        historyMaxSizeCheckBox->setText(QApplication::translate("DatabaseSettingsWidget", "Max. history size:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(DatabaseSettingsWidget);
    } // retranslateUi

};

namespace Ui {
    class DatabaseSettingsWidget: public Ui_DatabaseSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASESETTINGSWIDGET_H
