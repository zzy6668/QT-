/********************************************************************************
** Form generated from reading UI file 'recordeditview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDEDITVIEW_H
#define UI_RECORDEDITVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecordEditView
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_3;
    QLineEdit *Editdate;
    QLabel *label_9;
    QLineEdit *dbEditID_2;
    QLabel *label_3;
    QLineEdit *dbEditDname;
    QLineEdit *EditResult;
    QLabel *label_4;
    QLineEdit *dbEditPname_2;
    QLineEdit *EditBill;
    QLabel *label_13;
    QLabel *label_5;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *RecordEditView)
    {
        if (RecordEditView->objectName().isEmpty())
            RecordEditView->setObjectName("RecordEditView");
        RecordEditView->resize(452, 322);
        gridLayout_4 = new QGridLayout(RecordEditView);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        Editdate = new QLineEdit(RecordEditView);
        Editdate->setObjectName("Editdate");

        gridLayout_3->addWidget(Editdate, 3, 1, 1, 1);

        label_9 = new QLabel(RecordEditView);
        label_9->setObjectName("label_9");

        gridLayout_3->addWidget(label_9, 5, 0, 1, 1);

        dbEditID_2 = new QLineEdit(RecordEditView);
        dbEditID_2->setObjectName("dbEditID_2");

        gridLayout_3->addWidget(dbEditID_2, 0, 1, 1, 1);

        label_3 = new QLabel(RecordEditView);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        dbEditDname = new QLineEdit(RecordEditView);
        dbEditDname->setObjectName("dbEditDname");

        gridLayout_3->addWidget(dbEditDname, 2, 1, 1, 1);

        EditResult = new QLineEdit(RecordEditView);
        EditResult->setObjectName("EditResult");

        gridLayout_3->addWidget(EditResult, 4, 1, 1, 1);

        label_4 = new QLabel(RecordEditView);
        label_4->setObjectName("label_4");

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        dbEditPname_2 = new QLineEdit(RecordEditView);
        dbEditPname_2->setObjectName("dbEditPname_2");

        gridLayout_3->addWidget(dbEditPname_2, 1, 1, 1, 1);

        EditBill = new QLineEdit(RecordEditView);
        EditBill->setObjectName("EditBill");

        gridLayout_3->addWidget(EditBill, 5, 1, 1, 1);

        label_13 = new QLabel(RecordEditView);
        label_13->setObjectName("label_13");

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        label_5 = new QLabel(RecordEditView);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 4, 0, 1, 1);

        label_11 = new QLabel(RecordEditView);
        label_11->setObjectName("label_11");

        gridLayout_3->addWidget(label_11, 2, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        pushButton_3 = new QPushButton(RecordEditView);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(RecordEditView);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_2->addWidget(pushButton_4);


        horizontalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 2, 2);

        verticalSpacer_5 = new QSpacerItem(20, 159, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_5, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 127, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 2, 1, 1, 1);


        retranslateUi(RecordEditView);

        QMetaObject::connectSlotsByName(RecordEditView);
    } // setupUi

    void retranslateUi(QWidget *RecordEditView)
    {
        RecordEditView->setWindowTitle(QCoreApplication::translate("RecordEditView", "Form", nullptr));
        label_9->setText(QCoreApplication::translate("RecordEditView", "\345\274\200\345\205\267\347\232\204\350\215\257\345\223\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("RecordEditView", "\347\227\205\344\272\272\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("RecordEditView", "\345\260\261\350\257\212\346\227\245\346\234\237\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("RecordEditView", "ID:", nullptr));
        label_5->setText(QCoreApplication::translate("RecordEditView", "\350\257\212\346\226\255\347\273\223\346\236\234\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("RecordEditView", "\345\214\273\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("RecordEditView", "\344\277\235\345\255\230", nullptr));
        pushButton_4->setText(QCoreApplication::translate("RecordEditView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecordEditView: public Ui_RecordEditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDEDITVIEW_H
