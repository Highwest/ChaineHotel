#include "dashboard.h"
#include "ui_dashboard.h"
#include <qpixmap.h>


Dashboard::Dashboard(QWidget *parent) :
QDialog(parent),
ui(new Ui::Dashboard)
{
ui->setupUi(this);
QPixmap Hotel("/home/pouretudes/qt projects/ChaineHotel/img/hotel.svg");
ui->label_logo->setPixmap(Hotel.scaled(127,127,Qt::KeepAspectRatio));
//QPixmap Hotel2("/home/pouretudes/qt projects/ChaineHotel/img/img_451479.png");
//ui->label_Hotel2->setPixmap(Hotel2.scaled(92,92,Qt::KeepAspectRatio));
QPixmap Clients("/home/pouretudes/qt projects/ChaineHotel/img/team.svg");
ui->label_Clients->setPixmap(Clients.scaled(92,92,Qt::KeepAspectRatio));
QPixmap Reservations("/home/pouretudes/qt projects/ChaineHotel/img/calendar.svg");
ui->label_Reservations->setPixmap(Reservations.scaled(92,92,Qt::KeepAspectRatio));
QPixmap Personnels("/home/pouretudes/qt projects/ChaineHotel/img/waiter.svg");
ui->label_Personnels->setPixmap(Personnels.scaled(95,95,Qt::KeepAspectRatio));
QPixmap Caisses("/home/pouretudes/qt projects/ChaineHotel/img/buy.svg");
ui->label_Caisses->setPixmap(Caisses.scaled(92,92,Qt::KeepAspectRatio));
QPixmap Statistiques("/home/pouretudes/qt projects/ChaineHotel/img/analytics.svg");
ui->label_Statistiques->setPixmap(Statistiques.scaled(92,92,Qt::KeepAspectRatio));

}

Dashboard::~Dashboard()
{
delete ui;
}
