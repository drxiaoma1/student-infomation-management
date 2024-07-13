/********************************************************************************
** Form generated from reading UI file 'subteacher.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBTEACHER_H
#define UI_SUBTEACHER_H

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

class Ui_subteacher
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *logout;
    QSpacerItem *horizontalSpacer;
    QPushButton *destroy;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *checkout;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *course;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *homework;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *message;
    QSpacerItem *horizontalSpacer_7;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *joincourse;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *grading;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *messagecre;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *quit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *subteacher)
    {
        if (subteacher->objectName().isEmpty())
            subteacher->setObjectName(QStringLiteral("subteacher"));
        subteacher->resize(800, 600);
        centralwidget = new QWidget(subteacher);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 50, 480, 305));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        logout = new QPushButton(layoutWidget);
        logout->setObjectName(QStringLiteral("logout"));

        horizontalLayout->addWidget(logout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        destroy = new QPushButton(layoutWidget);
        destroy->setObjectName(QStringLiteral("destroy"));

        horizontalLayout->addWidget(destroy);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        checkout = new QPushButton(layoutWidget);
        checkout->setObjectName(QStringLiteral("checkout"));

        horizontalLayout_2->addWidget(checkout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        course = new QRadioButton(layoutWidget);
        course->setObjectName(QStringLiteral("course"));

        horizontalLayout_2->addWidget(course);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        homework = new QRadioButton(layoutWidget);
        homework->setObjectName(QStringLiteral("homework"));

        horizontalLayout_2->addWidget(homework);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        message = new QRadioButton(layoutWidget);
        message->setObjectName(QStringLiteral("message"));

        horizontalLayout_2->addWidget(message);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        joincourse = new QPushButton(layoutWidget);
        joincourse->setObjectName(QStringLiteral("joincourse"));

        horizontalLayout_3->addWidget(joincourse);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        grading = new QPushButton(layoutWidget);
        grading->setObjectName(QStringLiteral("grading"));

        horizontalLayout_3->addWidget(grading);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        messagecre = new QPushButton(layoutWidget);
        messagecre->setObjectName(QStringLiteral("messagecre"));

        horizontalLayout_3->addWidget(messagecre);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        quit = new QPushButton(layoutWidget);
        quit->setObjectName(QStringLiteral("quit"));

        horizontalLayout_3->addWidget(quit);


        verticalLayout->addLayout(horizontalLayout_3);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 360, 116, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        subteacher->setCentralWidget(centralwidget);
        menubar = new QMenuBar(subteacher);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        subteacher->setMenuBar(menubar);
        statusbar = new QStatusBar(subteacher);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        subteacher->setStatusBar(statusbar);

        retranslateUi(subteacher);

        QMetaObject::connectSlotsByName(subteacher);
    } // setupUi

    void retranslateUi(QMainWindow *subteacher)
    {
        subteacher->setWindowTitle(QApplication::translate("subteacher", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("subteacher", "\345\212\251\346\225\231", Q_NULLPTR));
        logout->setText(QApplication::translate("subteacher", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        destroy->setText(QApplication::translate("subteacher", "\346\263\250\351\224\200\350\264\246\346\210\267", Q_NULLPTR));
        label_2->setText(QString());
        checkout->setText(QApplication::translate("subteacher", "\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        course->setText(QApplication::translate("subteacher", " \350\257\276\347\250\213", Q_NULLPTR));
        homework->setText(QApplication::translate("subteacher", " \344\275\234\344\270\232", Q_NULLPTR));
        message->setText(QApplication::translate("subteacher", " \351\200\232\347\237\245", Q_NULLPTR));
        label_3->setText(QString());
        joincourse->setText(QApplication::translate("subteacher", "\345\212\240\345\205\245\350\257\276\347\250\213", Q_NULLPTR));
        grading->setText(QApplication::translate("subteacher", "\344\275\234\344\270\232\346\211\223\345\210\206", Q_NULLPTR));
        messagecre->setText(QApplication::translate("subteacher", "\345\217\221\345\270\203\351\200\232\347\237\245", Q_NULLPTR));
        quit->setText(QApplication::translate("subteacher", "\351\200\200\345\207\272\350\257\276\347\250\213", Q_NULLPTR));
        label_4->setText(QString());
        pushButton->setText(QApplication::translate("subteacher", "\346\237\245\350\257\242\346\211\200\346\234\211\350\257\276\347\250\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class subteacher: public Ui_subteacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBTEACHER_H
