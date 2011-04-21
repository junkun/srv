/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Thu Apr 21 10:32:20 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label;
    QPushButton *close;
    QPushButton *playerButton;
    QLabel *label_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *recorder;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(937, 539);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../practica-build-desktop/images/lip_analysis_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(200, 250, 162, 58));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../practica-build-desktop/images/documents.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setIconSize(QSize(40, 40));
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(460, 250, 162, 58));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../practica-build-desktop/images/1300738264_Network.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);
        pushButton_5->setIconSize(QSize(40, 40));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 220, 161, 17));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        close = new QPushButton(Widget);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(770, 70, 162, 58));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../practica-build-desktop/images/desktop.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon3);
        close->setIconSize(QSize(40, 40));
        playerButton = new QPushButton(Widget);
        playerButton->setObjectName(QString::fromUtf8("playerButton"));
        playerButton->setGeometry(QRect(30, 250, 162, 58));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../practica-build-desktop/images/music.png"), QSize(), QIcon::Normal, QIcon::Off);
        playerButton->setIcon(icon4);
        playerButton->setIconSize(QSize(40, 40));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 380, 141, 17));
        label_3->setFont(font);
        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(410, 420, 162, 58));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../practica-build-desktop/images/todos.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon5);
        pushButton_7->setIconSize(QSize(40, 40));
        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(630, 250, 162, 58));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../practica-build-desktop/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon6);
        pushButton_6->setIconSize(QSize(40, 40));
        recorder = new QPushButton(Widget);
        recorder->setObjectName(QString::fromUtf8("recorder"));
        recorder->setGeometry(QRect(330, 70, 162, 58));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../practica-build-desktop/images/microphone-icon (1).jpg"), QSize(), QIcon::Normal, QIcon::Off);
        recorder->setIcon(icon7);
        recorder->setIconSize(QSize(40, 40));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 420, 162, 58));
        pushButton->setBaseSize(QSize(5, 5));
        pushButton->setCursor(QCursor(Qt::ArrowCursor));
        pushButton->setAutoFillBackground(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../practica-build-desktop/images/group.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon8);
        pushButton->setIconSize(QSize(40, 40));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(630, 210, 161, 17));
        label_2->setFont(font);

        retranslateUi(Widget);
        QObject::connect(close, SIGNAL(clicked()), Widget, SLOT(close()));
        QObject::connect(recorder, SIGNAL(clicked()), Widget, SLOT(openRecord()));
        QObject::connect(pushButton, SIGNAL(clicked()), Widget, SLOT(conectar()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Sistema de Reconocimiento de Voz", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Widget", "Gestionar", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Widget", "Entrenar red", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "Gesti\303\263n de Archivos", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("Widget", "Salir", 0, QApplication::UnicodeUTF8));
        playerButton->setText(QApplication::translate("Widget", "Reproducir", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "Gesti\303\263n de datos", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Widget", "Generar reporte", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Widget", "Identificar", 0, QApplication::UnicodeUTF8));
        recorder->setText(QApplication::translate("Widget", "Grabar voz", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Widget", "Corpus de Voz", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "Gesti\303\263n de Identidad", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
