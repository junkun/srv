/********************************************************************************
** Form generated from reading UI file 'iduiwidget.ui'
**
** Created: Thu Apr 21 16:53:41 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDUIWIDGET_H
#define UI_IDUIWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IdUiWidget
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *IdUiWidget)
    {
        if (IdUiWidget->objectName().isEmpty())
            IdUiWidget->setObjectName(QString::fromUtf8("IdUiWidget"));
        IdUiWidget->resize(400, 300);
        pushButton = new QPushButton(IdUiWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 130, 98, 27));

        retranslateUi(IdUiWidget);

        QMetaObject::connectSlotsByName(IdUiWidget);
    } // setupUi

    void retranslateUi(QWidget *IdUiWidget)
    {
        IdUiWidget->setWindowTitle(QApplication::translate("IdUiWidget", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("IdUiWidget", "Hola chamakos", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class IdUiWidget: public Ui_IdUiWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDUIWIDGET_H
