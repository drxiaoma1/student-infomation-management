/********************************************************************************
** Form generated from reading UI file 'teacherview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERVIEW_H
#define UI_TEACHERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherview
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *logout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *destroy;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *checkout;
    QLabel *label_2;
    QRadioButton *course;
    QSpacerItem *horizontalSpacer_7;
    QRadioButton *work;
    QSpacerItem *horizontalSpacer_8;
    QRadioButton *message;
    QSpacerItem *horizontalSpacer_9;
    QRadioButton *comment;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *coursecr;
    QSpacerItem *horizontalSpacer;
    QPushButton *workcr;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *setscore;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *messhare;
    QPushButton *coursedes;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *teacherview)
    {
        if (teacherview->objectName().isEmpty())
            teacherview->setObjectName(QStringLiteral("teacherview"));
        teacherview->resize(810, 534);
        teacherview->setStyleSheet(QStringLiteral("#MainWindow{background-image: url(:/new/prefix1/background.png);}"));
        centralwidget = new QWidget(teacherview);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 50, 477, 340));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        logout = new QPushButton(layoutWidget);
        logout->setObjectName(QStringLiteral("logout"));

        horizontalLayout->addWidget(logout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        destroy = new QPushButton(layoutWidget);
        destroy->setObjectName(QStringLiteral("destroy"));

        horizontalLayout->addWidget(destroy);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkout = new QPushButton(layoutWidget);
        checkout->setObjectName(QStringLiteral("checkout"));

        horizontalLayout_2->addWidget(checkout);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        course = new QRadioButton(layoutWidget);
        course->setObjectName(QStringLiteral("course"));

        horizontalLayout_2->addWidget(course);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        work = new QRadioButton(layoutWidget);
        work->setObjectName(QStringLiteral("work"));

        horizontalLayout_2->addWidget(work);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        message = new QRadioButton(layoutWidget);
        message->setObjectName(QStringLiteral("message"));

        horizontalLayout_2->addWidget(message);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        comment = new QRadioButton(layoutWidget);
        comment->setObjectName(QStringLiteral("comment"));

        horizontalLayout_2->addWidget(comment);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        coursecr = new QPushButton(layoutWidget);
        coursecr->setObjectName(QStringLiteral("coursecr"));

        horizontalLayout_3->addWidget(coursecr);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        workcr = new QPushButton(layoutWidget);
        workcr->setObjectName(QStringLiteral("workcr"));

        horizontalLayout_3->addWidget(workcr);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        setscore = new QPushButton(layoutWidget);
        setscore->setObjectName(QStringLiteral("setscore"));

        horizontalLayout_3->addWidget(setscore);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        messhare = new QPushButton(layoutWidget);
        messhare->setObjectName(QStringLiteral("messhare"));

        horizontalLayout_3->addWidget(messhare);


        verticalLayout->addLayout(horizontalLayout_3);

        coursedes = new QPushButton(layoutWidget);
        coursedes->setObjectName(QStringLiteral("coursedes"));

        verticalLayout->addWidget(coursedes);

        teacherview->setCentralWidget(centralwidget);
        menubar = new QMenuBar(teacherview);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 810, 26));
        teacherview->setMenuBar(menubar);
        statusbar = new QStatusBar(teacherview);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        teacherview->setStatusBar(statusbar);

        retranslateUi(teacherview);

        QMetaObject::connectSlotsByName(teacherview);
    } // setupUi

    void retranslateUi(QMainWindow *teacherview)
    {
        teacherview->setWindowTitle(QApplication::translate("teacherview", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("teacherview", "\346\225\231\345\270\210", Q_NULLPTR));
        logout->setText(QApplication::translate("teacherview", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        destroy->setText(QApplication::translate("teacherview", "\346\263\250\351\224\200\350\264\246\346\210\267", Q_NULLPTR));
        checkout->setText(QApplication::translate("teacherview", "\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        label_2->setText(QString());
        course->setText(QApplication::translate("teacherview", "\350\257\276\347\250\213", Q_NULLPTR));
        work->setText(QApplication::translate("teacherview", "\344\275\234\344\270\232", Q_NULLPTR));
        message->setText(QApplication::translate("teacherview", "\351\200\232\347\237\245", Q_NULLPTR));
        comment->setText(QApplication::translate("teacherview", "\350\257\204\346\225\231", Q_NULLPTR));
        label_3->setText(QString());
        coursecr->setText(QApplication::translate("teacherview", "\345\210\233\345\273\272\350\257\276\347\250\213", Q_NULLPTR));
        workcr->setText(QApplication::translate("teacherview", "\345\217\221\345\270\203\344\275\234\344\270\232", Q_NULLPTR));
        setscore->setText(QApplication::translate("teacherview", "\344\275\234\344\270\232\346\211\223\345\210\206", Q_NULLPTR));
        messhare->setText(QApplication::translate("teacherview", "\345\217\221\345\270\203\351\200\232\347\237\245", Q_NULLPTR));
        coursedes->setText(QApplication::translate("teacherview", "\350\247\243\346\225\243\350\257\276\347\250\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class teacherview: public Ui_teacherview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERVIEW_H
