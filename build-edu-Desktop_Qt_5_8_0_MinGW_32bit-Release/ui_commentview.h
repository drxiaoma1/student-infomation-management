/********************************************************************************
** Form generated from reading UI file 'commentview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTVIEW_H
#define UI_COMMENTVIEW_H

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

class Ui_commentview
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *coursename;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *checkout;
    QSpacerItem *horizontalSpacer;
    QPushButton *goback;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *commentview)
    {
        if (commentview->objectName().isEmpty())
            commentview->setObjectName(QStringLiteral("commentview"));
        commentview->resize(800, 600);
        centralwidget = new QWidget(commentview);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 60, 258, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        coursename = new QLineEdit(widget);
        coursename->setObjectName(QStringLiteral("coursename"));

        horizontalLayout->addWidget(coursename);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(widget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        checkout = new QPushButton(widget);
        checkout->setObjectName(QStringLiteral("checkout"));

        horizontalLayout_2->addWidget(checkout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        goback = new QPushButton(widget);
        goback->setObjectName(QStringLiteral("goback"));

        horizontalLayout_2->addWidget(goback);


        verticalLayout->addLayout(horizontalLayout_2);

        commentview->setCentralWidget(centralwidget);
        menubar = new QMenuBar(commentview);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        commentview->setMenuBar(menubar);
        statusbar = new QStatusBar(commentview);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        commentview->setStatusBar(statusbar);

        retranslateUi(commentview);

        QMetaObject::connectSlotsByName(commentview);
    } // setupUi

    void retranslateUi(QMainWindow *commentview)
    {
        commentview->setWindowTitle(QApplication::translate("commentview", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("commentview", "\350\257\276\347\250\213\345\220\215", Q_NULLPTR));
        label_2->setText(QString());
        checkout->setText(QApplication::translate("commentview", "\346\237\245\347\234\213", Q_NULLPTR));
        goback->setText(QApplication::translate("commentview", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class commentview: public Ui_commentview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTVIEW_H
