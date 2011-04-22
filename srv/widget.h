#ifndef WIDGET_H
#define WIDGET_H
#include <QMainWindow>
#include <QWidget>
#include <tvruiwidget.h>

namespace Ui {
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public slots:
bool conectar();


private:
    Ui::Widget *ui;
    //IdUiWidget *idruiw;
//    Ui::tvrWindow *tvruiw;

private slots:
      void openIder();


};

#endif // WIDGET_H
