/********************************************************************************
** Form generated from reading UI file 'medicineditview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDICINEDITVIEW_H
#define UI_MEDICINEDITVIEW_H

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

class Ui_MedicineditView
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLineEdit *dbEditName;
    QLineEdit *dbEditLastnum;
    QLineEdit *dbEditNum;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *dbEditID;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *MedicineditView)
    {
        if (MedicineditView->objectName().isEmpty())
            MedicineditView->setObjectName("MedicineditView");
        MedicineditView->resize(494, 401);
        layoutWidget = new QWidget(MedicineditView);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 80, 371, 291));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        dbEditName = new QLineEdit(layoutWidget);
        dbEditName->setObjectName("dbEditName");

        gridLayout->addWidget(dbEditName, 1, 1, 1, 1);

        dbEditLastnum = new QLineEdit(layoutWidget);
        dbEditLastnum->setObjectName("dbEditLastnum");

        gridLayout->addWidget(dbEditLastnum, 3, 1, 1, 1);

        dbEditNum = new QLineEdit(layoutWidget);
        dbEditNum->setObjectName("dbEditNum");

        gridLayout->addWidget(dbEditNum, 2, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        dbEditID = new QLineEdit(layoutWidget);
        dbEditID->setObjectName("dbEditID");

        gridLayout->addWidget(dbEditID, 0, 1, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 3, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 2, 2);

        verticalSpacer_3 = new QSpacerItem(20, 68, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 68, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(MedicineditView);

        QMetaObject::connectSlotsByName(MedicineditView);
    } // setupUi

    void retranslateUi(QWidget *MedicineditView)
    {
        MedicineditView->setWindowTitle(QCoreApplication::translate("MedicineditView", "\350\215\257\345\223\201\347\256\241\347\220\206\347\225\214\351\235\242", nullptr));
        label_8->setText(QCoreApplication::translate("MedicineditView", "\345\211\202\351\207\217\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MedicineditView", "\350\215\257\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("MedicineditView", "ID:", nullptr));
        label_10->setText(QCoreApplication::translate("MedicineditView", "\345\272\223\345\255\230\346\225\260\351\207\217\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("MedicineditView", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MedicineditView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MedicineditView: public Ui_MedicineditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDICINEDITVIEW_H
