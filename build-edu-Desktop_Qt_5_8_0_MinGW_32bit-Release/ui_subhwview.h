/********************************************************************************
** Form generated from reading UI file 'subhwview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBHWVIEW_H
#define UI_SUBHWVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_subhwview
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *teachername;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *coursename;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *checkout;
    QSpacerItem *horizontalSpacer;
    QPushButton *goback;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *subhwview)
    {
        if (subhwview->objectName().isEmpty())
            subhwview->setObjectName(QStringLiteral("subhwview"));
        subhwview->resize(800, 600);
        centralwidget = new QWidget(subhwview);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 40, 258, 291));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        teachername = new QLineEdit(widget);
        teachername->setObjectName(QStringLiteral("teachername"));

        horizontalLayout->addWidget(teachername);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        coursename = new QLineEdit(widget);
        coursename->setObjectName(QStringLiteral("coursename"));

        horizontalLayout_2->addWidget(coursename);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(widget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        checkout = new QPushButton(widget);
        checkout->setObjectName(QStringLiteral("checkout"));

        horizontalLayout_3->addWidget(checkout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        goback = new QPushButton(widget);
        goback->setObjectName(QStringLiteral("goback"));

        horizontalLayout_3->addWidget(goback);


        verticalLayout->addLayout(horizontalLayout_3);

        subhwview->setCentralWidget(centralwidget);
        menubar = new QMenuBar(subhwview);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        subhwview->setMenuBar(menubar);
        statusbar = new QStatusBar(subhwview);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        subhwview->setStatusBar(statusbar);

        retranslateUi(subhwview);

        QMetaObject::connectSlotsByName(subhwview);
    } // setupUi

    void retranslateUi(QMainWindow *subhwview)
    {
        subhwview->setWindowTitle(QApplication::translate("subhwview", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("subhwview", "\346\225\231\345\270\210\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("subhwview", "\350\257\276\347\250\213\345\220\215", Q_NULLPTR));
        label_3->setText(QString());
        checkout->setText(QApplication::translate("subhwview", "\346\237\245\347\234\213", Q_NULLPTR));
        goback->setText(QApplication::translate("subhwview", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class subhwview: public Ui_subhwview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBHWVIEW_H
