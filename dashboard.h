#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>

namespace Ui {
class Dashboard;
}

class Dashboard : public QDialog
{
Q_OBJECT

public:
    void Form1();
explicit Dashboard(QWidget *parent = nullptr);
~Dashboard();

private slots:



private:
Ui::Dashboard *ui;
};

#endif // DASHBOARD_H
