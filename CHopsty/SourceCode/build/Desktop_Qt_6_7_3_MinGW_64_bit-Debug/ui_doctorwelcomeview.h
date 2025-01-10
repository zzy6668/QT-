/********************************************************************************
** Form generated from reading UI file 'doctorwelcomeview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORWELCOMEVIEW_H
#define UI_DOCTORWELCOMEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoctorwelcomeView
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btDepartment;
    QPushButton *btPatient;
    QPushButton *btrecord;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *DoctorwelcomeView)
    {
        if (DoctorwelcomeView->objectName().isEmpty())
            DoctorwelcomeView->setObjectName("DoctorwelcomeView");
        DoctorwelcomeView->resize(400, 300);
        gridLayout = new QGridLayout(DoctorwelcomeView);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 121, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btDepartment = new QPushButton(DoctorwelcomeView);
        btDepartment->setObjectName("btDepartment");

        horizontalLayout->addWidget(btDepartment);

        btPatient = new QPushButton(DoctorwelcomeView);
        btPatient->setObjectName("btPatient");

        horizontalLayout->addWidget(btPatient);

        btrecord = new QPushButton(DoctorwelcomeView);
        btrecord->setObjectName("btrecord");

        horizontalLayout->addWidget(btrecord);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 121, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);


        retranslateUi(DoctorwelcomeView);

        QMetaObject::connectSlotsByName(DoctorwelcomeView);
    } // setupUi

    void retranslateUi(QWidget *DoctorwelcomeView)
    {
        DoctorwelcomeView->setWindowTitle(QCoreApplication::translate("DoctorwelcomeView", "\346\254\242\350\277\216\345\214\273\347\224\237\347\231\273\345\275\225", nullptr));
        btDepartment->setText(QCoreApplication::translate("DoctorwelcomeView", "\350\215\257\345\223\201\347\256\241\347\220\206", nullptr));
        btPatient->setText(QCoreApplication::translate("DoctorwelcomeView", "\346\202\243\350\200\205\347\256\241\347\220\206", nullptr));
        btrecord->setText(QCoreApplication::translate("DoctorwelcomeView", "\345\260\261\350\257\212\350\256\260\345\275\225\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoctorwelcomeView: public Ui_DoctorwelcomeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORWELCOMEVIEW_H
