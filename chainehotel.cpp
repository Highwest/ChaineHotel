#include "chainehotel.h"
#include "ui_chainehotel.h"
#include "dashboard.h"
#include "ui_dashboard.h"
#include <qpixmap.h>

ChaineHotel::ChaineHotel(QWidget *parent) :
QMainWindow(parent),
ui(new Ui::ChaineHotel)
{

ui->setupUi(this);
QPixmap pix("/home/pouretudes/qt projects/ChaineHotel/img/service.png");
ui->label_staffHotel->setPixmap(pix.scaled(135,135,Qt::KeepAspectRatio));

//QPixmap pix1("/home/pouretudes/qt projects/ChaineHotel/img/connectBox.png");
//ui->label_pic->setPixmap(pix1.scaled(479,359,Qt::KeepAspectRatio));
}

ChaineHotel::~ChaineHotel()
{
delete ui;
}

void ChaineHotel::on_pushButton_cancel_clicked()
{
    this->close();
}

void ChaineHotel::on_pushButton_connexion_clicked()
{
    QString username = ui ->lineEdit_user->text();
    QString password = ui ->lineEdit_pass->text();
    D = new Dashboard(this);
    D->show();
    hide();
}
