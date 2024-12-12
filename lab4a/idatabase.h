#ifndef IDATABASE_H
#define IDATABASE_H

#include <QObject>
#include<QtSql>
#include<QSqlDatabase>
#include<QDataWidgetMapper>
class iDatabase : public QObject
{
    Q_OBJECT
public:

    static iDatabase &getInstance()
    {
        static iDatabase instance;
        return instance;
    }
    QString userLogin(QString userName,QString password);


private:
    explicit iDatabase(QObject *parent = nullptr);
    iDatabase(iDatabase const &)            = delete;
    void operator=(iDatabase const &)= delete;
    QSqlDatabase database;
  void ininDatabase();



public:
    bool initPatientModel();
    bool searchPatient(QString filter);
    bool deleteCurrentPatient();
    bool submitPatientEdit();
    int addNewPatient();
    void revertPatientEdit()
    {
        patientTabModel->revertAll();
    }

public:
    QSqlTableModel *patientTabModel; //数据模型
    QItemSelectionModel *thePatientSelection;//选择模型



signals:


};

#endif // IDATABASE_H
