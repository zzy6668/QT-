/********************************************************************************
** Form generated from reading UI file 'doctoreditview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTOREDITVIEW_H
#define UI_DOCTOREDITVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoctorEditView
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label;
    QComboBox *ComboSex;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *dbEditID;
    QLineEdit *EditAge;
    QLineEdit *EditBNum;
    QLabel *label_3;
    QLineEdit *EditDname;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *DoctorEditView)
    {
        if (DoctorEditView->objectName().isEmpty())
            DoctorEditView->setObjectName("DoctorEditView");
        DoctorEditView->resize(491, 314);
        gridLayout_2 = new QGridLayout(DoctorEditView);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer_2 = new QSpacerItem(20, 124, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 7, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(DoctorEditView);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(DoctorEditView);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        ComboSex = new QComboBox(DoctorEditView);
        ComboSex->addItem(QString());
        ComboSex->addItem(QString());
        ComboSex->setObjectName("ComboSex");

        gridLayout->addWidget(ComboSex, 2, 1, 1, 1);

        label_2 = new QLabel(DoctorEditView);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_5 = new QLabel(DoctorEditView);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        dbEditID = new QLineEdit(DoctorEditView);
        dbEditID->setObjectName("dbEditID");

        gridLayout->addWidget(dbEditID, 0, 1, 1, 1);

        EditAge = new QLineEdit(DoctorEditView);
        EditAge->setObjectName("EditAge");

        gridLayout->addWidget(EditAge, 3, 1, 1, 1);

        EditBNum = new QLineEdit(DoctorEditView);
        EditBNum->setObjectName("EditBNum");

        gridLayout->addWidget(EditBNum, 4, 1, 1, 1);

        label_3 = new QLabel(DoctorEditView);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        EditDname = new QLineEdit(DoctorEditView);
        EditDname->setObjectName("EditDname");

        gridLayout->addWidget(EditDname, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 159, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout->addItem(verticalSpacer_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(DoctorEditView);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(DoctorEditView);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 6, 2);


        retranslateUi(DoctorEditView);

        QMetaObject::connectSlotsByName(DoctorEditView);
    } // setupUi

    void retranslateUi(QWidget *DoctorEditView)
    {
        DoctorEditView->setWindowTitle(QCoreApplication::translate("DoctorEditView", "\345\214\273\347\224\237\347\274\226\350\276\221\347\225\214\351\235\242", nullptr));
        label_4->setText(QCoreApplication::translate("DoctorEditView", "\345\271\264\351\276\204\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("DoctorEditView", "ID:", nullptr));
        ComboSex->setItemText(0, QCoreApplication::translate("DoctorEditView", "\347\224\267", nullptr));
        ComboSex->setItemText(1, QCoreApplication::translate("DoctorEditView", "\345\245\263", nullptr));

        label_2->setText(QCoreApplication::translate("DoctorEditView", "\346\200\247\345\210\253", nullptr));
        label_5->setText(QCoreApplication::translate("DoctorEditView", "\350\257\201\344\271\246\347\274\226\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("DoctorEditView", "\345\214\273\347\224\237\345\220\215\345\255\227\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("DoctorEditView", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DoctorEditView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoctorEditView: public Ui_DoctorEditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTOREDITVIEW_H
