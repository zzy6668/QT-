#include "loginview.h"
#include "ui_loginview.h"
#include"idatabase.h"

LoginView::LoginView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginView)
{
    ui->setupUi(this);
}

LoginView::~LoginView()
{
    delete ui;
}

void LoginView::on_btSignIn_clicked()
{
   QString status= iDatabase ::getInstance().userLogin(ui->inputUsername->text(),ui->inputUserPassword->text());

    if(status =="登录成功"){
       emit loginSuccess();}
}

