#ifndef PATIENTEDITVIEW_H
#define PATIENTEDITVIEW_H
#include<QDataWidgetMapper>
#include <QWidget>
#include <QSqlTableModel>
#include "iDatabase.h"
namespace Ui {
class PatientEditView;
}

class PatientEditView : public QWidget
{
    Q_OBJECT

public:
    explicit PatientEditView(QWidget *parent = nullptr);
    ~PatientEditView();
      void setCurrentIndex(int index);

private:
    Ui::PatientEditView *ui;
     QDataWidgetMapper*dataMapper;//数据映射
};

#endif // PATIENTEDITVIEW_H
