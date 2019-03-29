#include "chainehotel.h"
#include "ui_chainehotel.h"
#include <qpixmap.h>

ChaineHotel::ChaineHotel(QWidget *parent) :
QMainWindow(parent),
ui(new Ui::ChaineHotel)
{
ui->setupUi(this);
QPixmap pix("/home/pouretudes/qtimages/staffHotel.png");
ui->label_staffHotel->setPixmap(pix.scaled(120,120,Qt::KeepAspectRatio));

//QPixmap pix1("/home/pouretudes/qtimages/connectBox.png");
//ui->label_pic->setPixmap(pix1.scaled(479,359,Qt::KeepAspectRatio));
}

ChaineHotel::~ChaineHotel()
{
delete ui;
}



void ChaineHotel::on_pushButton_connexion_clicked()
{
    QString username = ui ->lineEdit_user->text();
    QString password = ui ->lineEdit_pass->text();

}
