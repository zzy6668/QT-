#include "patientview.h"
#include "ui_patientview.h"
#include "idatabase.h"
PatientView::PatientView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PatientView)
{
    ui->setupUi(this);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setAlternatingRowColors(true);
    iDatabase &iDatabase = iDatabase::getInstance();
    if(iDatabase.initPatientModel())
   {ui->tableView->setModel(iDatabase.patientTabModel);
        ui->tableView->setSelectionModel(iDatabase.thePatientSelection);
    }

}

PatientView::~PatientView()
{
    delete ui;
}

void PatientView::on_btadd_clicked()
{
    emit goPatientEditView();
}


void PatientView::on_btsearch_clicked()
{
    QString filter=QString("name like'%%1%'").arg(ui->txtSearch->text());
    iDatabase::getInstance().searchPatient(filter);
}


void PatientView::on_btdelete_clicked()
{
    iDatabase::getInstance().deleteCurrentPatient();
}


void PatientView::on_pushButton_4_clicked()
{

}

