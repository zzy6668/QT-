#include "idatabase.h"
#include <QUuid>
void iDatabase::ininDatabase()
{

database=QSqlDatabase::addDatabase("QSQLITE");//添加 SOL LITE数据库驱动
    QString aFile ="F:/sqlite code/lab4.db";
    database.setDatabaseName(aFile);//设置数据库名称

    if(!database.open()){ //打开数据库
        qDebug()<< "failed to open database";
    } else
        qDebug()<< "open database is ok"<<database.connectionName();

}

bool iDatabase::initPatientModel()
{

    patientTabModel =new QSqlTableModel(this,database);
    patientTabModel->setTable("patient");
    patientTabModel->setEditStrategy(
        QSqlTableModel ::  OnManualSubmit);//数据保存方式，0nManualsubmit,OnRowchange
    patientTabModel->setSort(patientTabModel->fieldIndex("name"), Qt::AscendingOrder); //排序
    if(!(patientTabModel->select()))//查询数据
    return false;

    thePatientSelection = new QItemSelectionModel(patientTabModel);
    return true;
}

bool iDatabase::searchPatient(QString filter)
{
    patientTabModel->setFilter(filter);
    return patientTabModel->select();
}

bool iDatabase::deleteCurrentPatient()
{


        QModelIndex curIndex=thePatientSelection->currentIndex();//获取当前选择单元格的模型索引
       patientTabModel->removeRow(curIndex.row());
        patientTabModel->submitAll();
       patientTabModel->select();




}
int iDatabase::addNewPatient(){
    patientTabModel->insertRow(patientTabModel->rowCount(),
                               QModelIndex());//在末尾添加一个记录
    QModelIndex curIndex = patientTabModel->index(patientTabModel->rowCount()- 1,1);//创建最后一行的ModelIndex
int curRecNo =curIndex.row();
    QSqlRecord curRec= patientTabModel->record(curRecNo);//获取当前记录
curRec. setValue("Created time stamp", QDateTime ::currentDateTime().toString("yyyy-MM-dd"));
    curRec.setValue("ID",QUuid::createUuid().toString(QUuid::WithoutBraces));
patientTabModel->setRecord(curRecNo,curRec);
return curIndex.row();
}
bool iDatabase::submitPatientEdit()
{
    return patientTabModel->submitAll();

}



















QString iDatabase ::userLogin(QString userName,QString password){

    QSqlQuery query;//查询出当前记录的所有字段
    query.prepare("select username,password from ' User' where username = :USER");
    query.bindValue(":USER",userName);
    query.exec();
    qDebug()<<query.lastQuery()<<query.first();

    if(query.first()&& query.value("username").isValid()){
        QString passwd=query.value("password").toString();
        if(passwd==password){
             qDebug()<<"登录成功";
            return"登录成功";
        }
        else{
            qDebug()<<"密码错误";
            return"密码错误";
        }
    }
    else{
        qDebug()<<"no such user";
        return"登录失败";
    }


}
iDatabase::iDatabase(QObject * parent) : QObject(parent)
{
    ininDatabase();

}
