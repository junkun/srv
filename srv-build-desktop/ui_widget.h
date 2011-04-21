/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Thu Apr 21 17:13:40 2011
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
    QPushButton *manageButton;
    QPushButton *trainingButton;
    QLabel *label;
    QPushButton *close;
    QPushButton *playerButton;
    QLabel *label_3;
    QPushButton *reportButton;
    QPushButton *identifyButton;
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
        manageButton = new QPushButton(Widget);
        manageButton->setObjectName(QString::fromUtf8("manageButton"));
        manageButton->setGeometry(QRect(200, 250, 129, 50));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../practica-build-desktop/images/documents.png"), QSize(), QIcon::Normal, QIcon::Off);
        manageButton->setIcon(icon1);
        manageButton->setIconSize(QSize(40, 40));
        trainingButton = new QPushButton(Widget);
        trainingButton->setObjectName(QString::fromUtf8("trainingButton"));
        trainingButton->setGeometry(QRect(460, 250, 146, 50));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/mainIcons/images/1300738264_Network.png"), QSize(), QIcon::Normal, QIcon::Off);
        trainingButton->setIcon(icon2);
        trainingButton->setIconSize(QSize(40, 40));
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
        close->setGeometry(QRect(780, 30, 93, 50));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/mainIcons/images/desktop.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon3);
        close->setIconSize(QSize(40, 40));
        playerButton = new QPushButton(Widget);
        playerButton->setObjectName(QString::fromUtf8("playerButton"));
        playerButton->setGeometry(QRect(30, 250, 138, 50));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/mainIcons/images/music.png"), QSize(), QIcon::Normal, QIcon::Off);
        playerButton->setIcon(icon4);
        playerButton->setIconSize(QSize(40, 40));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 380, 141, 17));
        label_3->setFont(font);
        reportButton = new QPushButton(Widget);
        reportButton->setObjectName(QString::fromUtf8("reportButton"));
        reportButton->setGeometry(QRect(410, 420, 172, 50));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/mainIcons/images/todos.png"), QSize(), QIcon::Normal, QIcon::Off);
        reportButton->setIcon(icon5);
        reportButton->setIconSize(QSize(40, 40));
        identifyButton = new QPushButton(Widget);
        identifyButton->setObjectName(QString::fromUtf8("identifyButton"));
        identifyButton->setGeometry(QRect(630, 250, 133, 50));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/mainIcons/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        identifyButton->setIcon(icon6);
        identifyButton->setIconSize(QSize(40, 40));
        recorder = new QPushButton(Widget);
        recorder->setObjectName(QString::fromUtf8("recorder"));
        recorder->setGeometry(QRect(330, 70, 136, 50));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/mainIcons/images/microphone-icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        recorder->setIcon(icon7);
        recorder->setIconSize(QSize(40, 40));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 420, 159, 50));
        pushButton->setBaseSize(QSize(5, 5));
        pushButton->setCursor(QCursor(Qt::ArrowCursor));
        pushButton->setAutoFillBackground(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/mainIcons/images/group.png"), QSize(), QIcon::Normal, QIcon::Off);
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
        QObject::connect(identifyButton, SIGNAL(clicked()), Widget, SLOT(openIdentifier()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Sistema de Reconocimiento de Voz", 0, QApplication::UnicodeUTF8));
        manageButton->setText(QApplication::translate("Widget", "Gestionar", 0, QApplication::UnicodeUTF8));
        trainingButton->setText(QApplication::translate("Widget", "Entrenar red", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "Gesti\303\263n de Archivos", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("Widget", "Salir", 0, QApplication::UnicodeUTF8));
        playerButton->setText(QApplication::translate("Widget", "Reproducir", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "Gesti\303\263n de datos", 0, QApplication::UnicodeUTF8));
        reportButton->setText(QApplication::translate("Widget", "Generar reporte", 0, QApplication::UnicodeUTF8));
        identifyButton->setText(QApplication::translate("Widget", "Identificar", 0, QApplication::UnicodeUTF8));
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
