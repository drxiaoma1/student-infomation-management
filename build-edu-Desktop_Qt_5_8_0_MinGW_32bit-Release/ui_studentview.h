/********************************************************************************
** Form generated from reading UI file 'studentview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTVIEW_H
#define UI_STUDENTVIEW_H

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

class Ui_studentview
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *logout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *destroy;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *checkout;
    QSpacerItem *horizontalSpacer;
    QRadioButton *course;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *homework;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *message;
    QSpacerItem *horizontalSpacer_7;
    QRadioButton *comments;
    QSpacerItem *horizontalSpacer_8;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *joincourse;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *handinwork;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *comment;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *quitcourse;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *studentview)
    {
        if (studentview->objectName().isEmpty())
            studentview->setObjectName(QStringLiteral("studentview"));
        studentview->resize(708, 439);
        studentview->setStyleSheet(QStringLiteral("#studentview{border-image: url(:/new/prefix1/OIP-C.jpg);}"));
        centralwidget = new QWidget(studentview);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 20, 527, 305));
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

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

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

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

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

        comments = new QRadioButton(layoutWidget);
        comments->setObjectName(QStringLiteral("comments"));

        horizontalLayout_2->addWidget(comments);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


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

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        handinwork = new QPushButton(layoutWidget);
        handinwork->setObjectName(QStringLiteral("handinwork"));

        horizontalLayout_3->addWidget(handinwork);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        comment = new QPushButton(layoutWidget);
        comment->setObjectName(QStringLiteral("comment"));

        horizontalLayout_3->addWidget(comment);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        quitcourse = new QPushButton(layoutWidget);
        quitcourse->setObjectName(QStringLiteral("quitcourse"));

        horizontalLayout_3->addWidget(quitcourse);


        verticalLayout->addLayout(horizontalLayout_3);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 340, 115, 30));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        studentview->setCentralWidget(centralwidget);
        menubar = new QMenuBar(studentview);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 708, 26));
        studentview->setMenuBar(menubar);
        statusbar = new QStatusBar(studentview);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        studentview->setStatusBar(statusbar);

        retranslateUi(studentview);

        QMetaObject::connectSlotsByName(studentview);
    } // setupUi

    void retranslateUi(QMainWindow *studentview)
    {
        studentview->setWindowTitle(QApplication::translate("studentview", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("studentview", "\345\255\246\347\224\237", Q_NULLPTR));
        logout->setText(QApplication::translate("studentview", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        destroy->setText(QApplication::translate("studentview", "\346\263\250\351\224\200\350\264\246\346\210\267", Q_NULLPTR));
        label_2->setText(QString());
        checkout->setText(QApplication::translate("studentview", "\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        course->setText(QApplication::translate("studentview", " \350\257\276\347\250\213", Q_NULLPTR));
        homework->setText(QApplication::translate("studentview", " \344\275\234\344\270\232", Q_NULLPTR));
        message->setText(QApplication::translate("studentview", " \351\200\232\347\237\245", Q_NULLPTR));
        comments->setText(QApplication::translate("studentview", "\350\257\204\346\225\231", Q_NULLPTR));
        label_3->setText(QString());
        joincourse->setText(QApplication::translate("studentview", "\345\212\240\345\205\245\350\257\276\347\250\213", Q_NULLPTR));
        handinwork->setText(QApplication::translate("studentview", "\346\217\220\344\272\244\344\275\234\344\270\232", Q_NULLPTR));
        comment->setText(QApplication::translate("studentview", "\345\217\221\345\270\203\350\257\204\346\225\231", Q_NULLPTR));
        quitcourse->setText(QApplication::translate("studentview", "\351\200\200\345\207\272\350\257\276\347\250\213", Q_NULLPTR));
        label_4->setText(QString());
        pushButton->setText(QApplication::translate("studentview", "\346\237\245\350\257\242\346\211\200\346\234\211\350\257\276\347\250\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class studentview: public Ui_studentview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTVIEW_H
