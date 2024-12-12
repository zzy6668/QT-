#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <QWidget>

namespace Ui {
class Department;
}

class Department : public QWidget
{
    Q_OBJECT

public:
    explicit Department(QWidget *parent = nullptr);
    ~Department();

private:
    Ui::Department *ui;
};

#endif // DEPARTMENT_H
