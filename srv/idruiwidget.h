#ifndef IDRUIWIDGET_H
#define IDRUIWIDGET_H

#include <QWidget>

namespace Ui {
    class idruiwidget;
}

class idruiwidget : public QWidget
{
    Q_OBJECT

public:
    explicit idruiwidget(QWidget *parent = 0);
    ~idruiwidget();

private:
    Ui::idruiwidget *ui;
};

#endif // IDRUIWIDGET_H
