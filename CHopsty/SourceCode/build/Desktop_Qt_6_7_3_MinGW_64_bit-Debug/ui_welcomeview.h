/********************************************************************************
** Form generated from reading UI file 'welcomeview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEVIEW_H
#define UI_WELCOMEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeView
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btDoctor;
    QPushButton *btDepartment;
    QPushButton *btPatient;
    QPushButton *btrecord;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *WelcomeView)
    {
        if (WelcomeView->objectName().isEmpty())
            WelcomeView->setObjectName("WelcomeView");
        WelcomeView->resize(477, 325);
        verticalLayout = new QVBoxLayout(WelcomeView);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btDoctor = new QPushButton(WelcomeView);
        btDoctor->setObjectName("btDoctor");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btDoctor->sizePolicy().hasHeightForWidth());
        btDoctor->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btDoctor);

        btDepartment = new QPushButton(WelcomeView);
        btDepartment->setObjectName("btDepartment");

        horizontalLayout->addWidget(btDepartment);

        btPatient = new QPushButton(WelcomeView);
        btPatient->setObjectName("btPatient");

        horizontalLayout->addWidget(btPatient);

        btrecord = new QPushButton(WelcomeView);
        btrecord->setObjectName("btrecord");

        horizontalLayout->addWidget(btrecord);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(WelcomeView);

        QMetaObject::connectSlotsByName(WelcomeView);
    } // setupUi

    void retranslateUi(QWidget *WelcomeView)
    {
        WelcomeView->setWindowTitle(QCoreApplication::translate("WelcomeView", "\346\254\242\350\277\216\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        btDoctor->setText(QCoreApplication::translate("WelcomeView", "\345\214\273\347\224\237\347\256\241\347\220\206", nullptr));
        btDepartment->setText(QCoreApplication::translate("WelcomeView", "\350\215\257\345\223\201\347\256\241\347\220\206", nullptr));
        btPatient->setText(QCoreApplication::translate("WelcomeView", "\346\202\243\350\200\205\347\256\241\347\220\206", nullptr));
        btrecord->setText(QCoreApplication::translate("WelcomeView", "\345\260\261\350\257\212\350\256\260\345\275\225\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeView: public Ui_WelcomeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEVIEW_H
