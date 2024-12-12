#ifndef PATIENTVIEW_H
#define PATIENTVIEW_H

#include <QWidget>

namespace Ui {
class PatientView;
}

class PatientView : public QWidget
{
    Q_OBJECT

public:
    explicit PatientView(QWidget *parent = nullptr);
    ~PatientView();

private slots:
    void on_btadd_clicked();

    void on_btsearch_clicked();

    void on_btdelete_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::PatientView *ui;

signals:
    void goPatientEditView();
};

#endif // PATIENTVIEW_H
