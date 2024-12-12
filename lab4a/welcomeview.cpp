#include "welcomeview.h"
#include "ui_welcomeview.h"
#include<QtDebug>
WelcomeView::WelcomeView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WelcomeView)
{
    qDebug()<<"create WelcomView";
    ui->setupUi(this);
}

WelcomeView::~WelcomeView()
{
    qDebug()<<"destroy WelcomView";
    delete ui;
}

void WelcomeView::on_pushButton_clicked()
{
    emit goDepartment();
}


void WelcomeView::on_pushButton_3_clicked()
{
    emit goDoctorView();
}


void WelcomeView::on_pushButton_2_clicked()
{

     emit goPatientView();
}

