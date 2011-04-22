#include <QtGui/QApplication>
#include "widget.h"
#include <QtGui/QApplication>
#include "widget.h"
 #include <QSplashScreen>
 #include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap("../srv-build-desktop/images/ScreenSplash_TT_1_best.jpg");
    QSplashScreen splash(pixmap);
    splash.show();
    a.processEvents();
    sleep(.1);

a.setApplicationName("Sistema de Reconocimiento de Voz");
//a.setQuitOnLastWindowClosed(true);
Widget w;
w.show();
gst_init(&argc, &argv);
TvrUiWidget tvr;
tvr.show();
//close splashin when
    splash.finish(&w);

    return a.exec();
}
