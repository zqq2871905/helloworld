/********************************************************************************
** Form generated from reading UI file 'hellodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLODIALOG_H
#define UI_HELLODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_HelloDialogClass
{
public:

    void setupUi(QDialog *HelloDialogClass)
    {
        if (HelloDialogClass->objectName().isEmpty())
            HelloDialogClass->setObjectName(QStringLiteral("HelloDialogClass"));
        HelloDialogClass->resize(600, 400);

        retranslateUi(HelloDialogClass);

        QMetaObject::connectSlotsByName(HelloDialogClass);
    } // setupUi

    void retranslateUi(QDialog *HelloDialogClass)
    {
        HelloDialogClass->setWindowTitle(QApplication::translate("HelloDialogClass", "HelloDialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HelloDialogClass: public Ui_HelloDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLODIALOG_H
