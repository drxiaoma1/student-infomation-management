/********************************************************************************
** Form generated from reading UI file 'adminview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINVIEW_H
#define UI_ADMINVIEW_H

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

class Ui_adminview
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *logout;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *checkout;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *course;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *teacher;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *student;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *subteacher;
    QSpacerItem *horizontalSpacer_9;
    QRadioButton *sentmessage;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QRadioButton *endclass;
    QSpacerItem *horizontalSpacer_7;
    QRadioButton *sendmes;
    QSpacerItem *horizontalSpacer_8;
    QRadioButton *stumanage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminview)
    {
        if (adminview->objectName().isEmpty())
            adminview->setObjectName(QStringLiteral("adminview"));
        adminview->resize(800, 600);
        centralwidget = new QWidget(adminview);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 60, 648, 305));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        logout = new QPushButton(layoutWidget);
        logout->setObjectName(QStringLiteral("logout"));

        horizontalLayout->addWidget(logout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


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

        teacher = new QRadioButton(layoutWidget);
        teacher->setObjectName(QStringLiteral("teacher"));

        horizontalLayout_2->addWidget(teacher);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        student = new QRadioButton(layoutWidget);
        student->setObjectName(QStringLiteral("student"));

        horizontalLayout_2->addWidget(student);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        subteacher = new QRadioButton(layoutWidget);
        subteacher->setObjectName(QStringLiteral("subteacher"));

        horizontalLayout_2->addWidget(subteacher);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        sentmessage = new QRadioButton(layoutWidget);
        sentmessage->setObjectName(QStringLiteral("sentmessage"));

        horizontalLayout_2->addWidget(sentmessage);


        verticalLayout->addLayout(horizontalLayout_2);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        endclass = new QRadioButton(layoutWidget);
        endclass->setObjectName(QStringLiteral("endclass"));

        horizontalLayout_3->addWidget(endclass);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        sendmes = new QRadioButton(layoutWidget);
        sendmes->setObjectName(QStringLiteral("sendmes"));

        horizontalLayout_3->addWidget(sendmes);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        stumanage = new QRadioButton(layoutWidget);
        stumanage->setObjectName(QStringLiteral("stumanage"));

        horizontalLayout_3->addWidget(stumanage);


        verticalLayout->addLayout(horizontalLayout_3);

        adminview->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminview);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        adminview->setMenuBar(menubar);
        statusbar = new QStatusBar(adminview);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        adminview->setStatusBar(statusbar);

        retranslateUi(adminview);

        QMetaObject::connectSlotsByName(adminview);
    } // setupUi

    void retranslateUi(QMainWindow *adminview)
    {
        adminview->setWindowTitle(QApplication::translate("adminview", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("adminview", "\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
        logout->setText(QApplication::translate("adminview", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        label_2->setText(QString());
        checkout->setText(QApplication::translate("adminview", "\344\277\241\346\201\257\346\237\245\350\257\242", Q_NULLPTR));
        course->setText(QApplication::translate("adminview", "\350\257\276\347\250\213\344\277\241\346\201\257", Q_NULLPTR));
        teacher->setText(QApplication::translate("adminview", "\346\225\231\345\270\210\344\277\241\346\201\257", Q_NULLPTR));
        student->setText(QApplication::translate("adminview", "\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        subteacher->setText(QApplication::translate("adminview", "\345\212\251\346\225\231\344\277\241\346\201\257", Q_NULLPTR));
        sentmessage->setText(QApplication::translate("adminview", "\345\267\262\345\217\221\351\200\201\347\232\204\351\200\232\347\237\245", Q_NULLPTR));
        label_3->setText(QString());
        pushButton->setText(QApplication::translate("adminview", "\344\277\241\346\201\257\346\233\264\346\224\271", Q_NULLPTR));
        endclass->setText(QApplication::translate("adminview", "\350\247\243\346\225\243\350\257\276\347\250\213", Q_NULLPTR));
        sendmes->setText(QApplication::translate("adminview", "\351\200\232\347\237\245\346\225\231\345\270\210", Q_NULLPTR));
        stumanage->setText(QApplication::translate("adminview", "\345\255\246\347\224\237\347\256\241\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminview: public Ui_adminview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINVIEW_H
