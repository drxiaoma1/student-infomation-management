/********************************************************************************
** Form generated from reading UI file 'studentmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMANAGE_H
#define UI_STUDENTMANAGE_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentmanage
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *studentname;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *coursename;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *teachername;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *join;
    QPushButton *quit;
    QPushButton *goback;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *studentmanage)
    {
        if (studentmanage->objectName().isEmpty())
            studentmanage->setObjectName(QStringLiteral("studentmanage"));
        studentmanage->resize(800, 600);
        centralwidget = new QWidget(studentmanage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 60, 304, 122));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        studentname = new QLineEdit(widget);
        studentname->setObjectName(QStringLiteral("studentname"));

        horizontalLayout->addWidget(studentname);


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

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        teachername = new QLineEdit(widget);
        teachername->setObjectName(QStringLiteral("teachername"));

        horizontalLayout_3->addWidget(teachername);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        join = new QPushButton(widget);
        join->setObjectName(QStringLiteral("join"));

        horizontalLayout_4->addWidget(join);

        quit = new QPushButton(widget);
        quit->setObjectName(QStringLiteral("quit"));

        horizontalLayout_4->addWidget(quit);

        goback = new QPushButton(widget);
        goback->setObjectName(QStringLiteral("goback"));

        horizontalLayout_4->addWidget(goback);


        verticalLayout->addLayout(horizontalLayout_4);

        studentmanage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(studentmanage);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        studentmanage->setMenuBar(menubar);
        statusbar = new QStatusBar(studentmanage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        studentmanage->setStatusBar(statusbar);

        retranslateUi(studentmanage);

        QMetaObject::connectSlotsByName(studentmanage);
    } // setupUi

    void retranslateUi(QMainWindow *studentmanage)
    {
        studentmanage->setWindowTitle(QApplication::translate("studentmanage", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("studentmanage", "\345\255\246\347\224\237\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("studentmanage", "\350\257\276\347\250\213\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("studentmanage", "\346\225\231\345\270\210\345\220\215", Q_NULLPTR));
        label_4->setText(QString());
        join->setText(QApplication::translate("studentmanage", "\345\212\240\345\205\245", Q_NULLPTR));
        quit->setText(QApplication::translate("studentmanage", "\347\247\273\345\207\272", Q_NULLPTR));
        goback->setText(QApplication::translate("studentmanage", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class studentmanage: public Ui_studentmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGE_H
