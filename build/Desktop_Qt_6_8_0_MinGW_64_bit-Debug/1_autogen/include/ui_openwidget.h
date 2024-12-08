/********************************************************************************
** Form generated from reading UI file 'openwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENWIDGET_H
#define UI_OPENWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_openwidget
{
public:

    void setupUi(QWidget *openwidget)
    {
        if (openwidget->objectName().isEmpty())
            openwidget->setObjectName("openwidget");
        openwidget->resize(400, 300);

        retranslateUi(openwidget);

        QMetaObject::connectSlotsByName(openwidget);
    } // setupUi

    void retranslateUi(QWidget *openwidget)
    {
        openwidget->setWindowTitle(QCoreApplication::translate("openwidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class openwidget: public Ui_openwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENWIDGET_H
