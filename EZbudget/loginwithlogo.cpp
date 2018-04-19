#include "loginwithlogo.h"
#include "ui_loginwithlogo.h"

loginWithLogo::loginWithLogo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::loginWithLogo)
{
    ui->setupUi(this);
    setMinimumSize(450, 450);
    setStyleSheet("QMainWindow {background: #a9e5aa}");
    this->setWindowTitle("EZBudget");

    if(!db->checkConnection())
        ui->status_label->setText("Failed to open database");
    else
        ui->status_label->setText("Connected");

}

loginWithLogo::~loginWithLogo()
{
    delete ui;
}

void loginWithLogo::on_pushButton_clicked()
{

    QString username, password;
    username = ui -> lineEdit_username->text();
    password = ui -> lineEdit_password->text();

    if(db -> databaseLoginCheck(username, password))
    {
        ui->status_label->setText("Logged in");
        this->hide();//hide the login screen
        //Load the profile that will display information
        db -> loadProfile();

    }
    else
        ui->status_label->setText("Failed to log in");
}
