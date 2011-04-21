#include "ui_widget.h"

#include "ui_widget.h"

#include "widget.h"

//#include "iduiwidget.h"
#include <QMessageBox>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QtSql/QSqlError>

#include <QtSql/QtSql>
#include <QMessageBox>
#include <QtSql/qsqldatabase.h>

#include <QSqlTableModel>
#include <QTableView>
#include <QTreeView>
#include <QDirModel>
#include<QGridLayout>
#include <QtGui>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}


void qryModel2()
{
  QSqlQueryModel *model = new QSqlQueryModel();
  model->setQuery( "SELECT * FROM persons" );

  QTableView *view = new QTableView();
  view->setModel( model );
  view->show();
}
void relModel2()
{
  QSqlRelationalTableModel *model = new QSqlRelationalTableModel();

  model->setTable( "params" );
  model->setRelation( 2, QSqlRelation( "persons", "persons_id", "id" ) );
  model->select();

  //Just testing columns headers
model->setHeaderData( 0, Qt::Horizontal, QObject::tr("Param1") );
model->setHeaderData( 1, Qt::Horizontal, QObject::tr("First Name") );
model->setHeaderData( 2, Qt::Horizontal, QObject::tr("Last Name") );

  QTableView *view = new QTableView();
  view->setModel( model );
  view->show();
}

void tabModel2()
{
  QSqlTableModel *model = new QSqlTableModel();

  model->setTable( "params" );
  model->setFilter( "persons_id = '1'" );
  model->select();

  model->removeColumn( 0 );

  QTableView *view = new QTableView();
  view->setModel( model );
  view->show();
}
bool Widget::conectar(){

    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL3");
     //Test DB
      /*db.setHostName("localhost");
      db.setDatabaseName("users");
      db.setUserName("root");
      db.setPassword("root");*/
          db.setHostName("localhost");
          db.setDatabaseName("srv");
          db.setUserName("root");
          db.setPassword("root");

      if(!db.open()){
          QMessageBox::critical(0,"Database Error",db.lastError().text());
          return false;
      }
     QSqlQuery qry;
      qry.prepare("SELECT * FROM persons;");
      qry.exec();
      qryModel2();
      tabModel2();
      relModel2();

    return true;
    }

void Widget::openIder(){


}


Widget::~Widget()
{
    delete ui;
}
