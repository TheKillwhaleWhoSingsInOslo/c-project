/********************************************************************************
** Form generated from reading UI file 'choosewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEWIDGET_H
#define UI_CHOOSEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choosewidget
{
public:

    void setupUi(QWidget *choosewidget)
    {
        if (choosewidget->objectName().isEmpty())
            choosewidget->setObjectName("choosewidget");
        choosewidget->resize(400, 300);

        retranslateUi(choosewidget);

        QMetaObject::connectSlotsByName(choosewidget);
    } // setupUi

    void retranslateUi(QWidget *choosewidget)
    {
        choosewidget->setWindowTitle(QCoreApplication::translate("choosewidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choosewidget: public Ui_choosewidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEWIDGET_H
