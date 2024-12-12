#include "patienteditview.h"
#include "ui_patienteditview.h"

PatientEditView::PatientEditView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PatientEditView)
{
    ui->setupUi(this);

dataMapper =new QDataWidgetMapper();
QSqlTableModel *tabModel = iDatabase::getInstance().patientTabModel;
dataMapper->addMapping(ui->dbEditID, tabModel->fieldIndex("ID"));
dataMapper->addMapping(ui->dbEditName, tabModel->fieldIndex("NAME"));
dataMapper->addMapping(ui->dbEditIDcard, tabModel->fieldIndex("ID CARD"));
dataMapper->addMapping(ui->dbSpinHeight, tabModel->fieldIndex("HEIGHT"));
dataMapper->addMapping(ui->dbSpinWeight, tabModel->fieldIndex("WEIGHT"));
dataMapper->addMapping(ui->dbEditMobile, tabModel->fieldIndex("MOBILEPHONE"));
//dataMapper->addMapping(ui->dbDateEditDoB, tabModel->fieldIndex("DoB"));
dataMapper->addMapping(ui->dbComboSex, tabModel->fieldIndex("SEX"));
dataMapper->addMapping(ui->dbCreatedTimestamp, tabModel->fieldIndex("CREATEDTIMESTAMP"));





}

PatientEditView::~PatientEditView()
{
    delete ui;
}
