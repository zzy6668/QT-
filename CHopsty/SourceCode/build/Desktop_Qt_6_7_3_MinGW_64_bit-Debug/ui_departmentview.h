/********************************************************************************
** Form generated from reading UI file 'departmentview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPARTMENTVIEW_H
#define UI_DEPARTMENTVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DepartmentView
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *txtSearch_2;
    QPushButton *btSearch_2;
    QPushButton *btAdd_2;
    QPushButton *btDelete_2;
    QPushButton *btEdit_2;

    void setupUi(QWidget *DepartmentView)
    {
        if (DepartmentView->objectName().isEmpty())
            DepartmentView->setObjectName("DepartmentView");
        DepartmentView->resize(610, 492);
        gridLayout = new QGridLayout(DepartmentView);
        gridLayout->setObjectName("gridLayout");
        tableView_2 = new QTableView(DepartmentView);
        tableView_2->setObjectName("tableView_2");

        gridLayout->addWidget(tableView_2, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        txtSearch_2 = new QLineEdit(DepartmentView);
        txtSearch_2->setObjectName("txtSearch_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtSearch_2->sizePolicy().hasHeightForWidth());
        txtSearch_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(txtSearch_2);

        btSearch_2 = new QPushButton(DepartmentView);
        btSearch_2->setObjectName("btSearch_2");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btSearch_2->setIcon(icon);

        horizontalLayout_2->addWidget(btSearch_2);

        btAdd_2 = new QPushButton(DepartmentView);
        btAdd_2->setObjectName("btAdd_2");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btAdd_2->setIcon(icon1);

        horizontalLayout_2->addWidget(btAdd_2);

        btDelete_2 = new QPushButton(DepartmentView);
        btDelete_2->setObjectName("btDelete_2");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/delete.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btDelete_2->setIcon(icon2);

        horizontalLayout_2->addWidget(btDelete_2);

        btEdit_2 = new QPushButton(DepartmentView);
        btEdit_2->setObjectName("btEdit_2");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/edit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btEdit_2->setIcon(icon3);

        horizontalLayout_2->addWidget(btEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(DepartmentView);

        QMetaObject::connectSlotsByName(DepartmentView);
    } // setupUi

    void retranslateUi(QWidget *DepartmentView)
    {
        DepartmentView->setWindowTitle(QCoreApplication::translate("DepartmentView", "\350\215\257\345\223\201\347\256\241\347\220\206", nullptr));
#if QT_CONFIG(tooltip)
        txtSearch_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        txtSearch_2->setInputMask(QString());
        txtSearch_2->setPlaceholderText(QCoreApplication::translate("DepartmentView", "\350\257\267\350\276\223\345\205\245\350\215\257\345\223\201\345\220\215\350\277\233\350\241\214\346\237\245\346\211\276", nullptr));
        btSearch_2->setText(QCoreApplication::translate("DepartmentView", "\346\237\245\346\211\276", nullptr));
        btAdd_2->setText(QCoreApplication::translate("DepartmentView", "\346\267\273\345\212\240", nullptr));
        btDelete_2->setText(QCoreApplication::translate("DepartmentView", "\345\210\240\351\231\244", nullptr));
        btEdit_2->setText(QCoreApplication::translate("DepartmentView", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DepartmentView: public Ui_DepartmentView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPARTMENTVIEW_H
