/********************************************************************************
** Form generated from reading UI file 'adminnotification.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINNOTIFICATION_H
#define UI_ADMINNOTIFICATION_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Adminnotification
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
    QLineEdit *notification;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *send;
    QSpacerItem *horizontalSpacer;
    QPushButton *goback;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Adminnotification)
    {
        if (Adminnotification->objectName().isEmpty())
            Adminnotification->setObjectName(QStringLiteral("Adminnotification"));
        Adminnotification->resize(800, 600);
        centralwidget = new QWidget(Adminnotification);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 60, 242, 92));
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

        notification = new QLineEdit(widget);
        notification->setObjectName(QStringLiteral("notification"));

        horizontalLayout_2->addWidget(notification);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        send = new QPushButton(widget);
        send->setObjectName(QStringLiteral("send"));

        horizontalLayout_3->addWidget(send);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        goback = new QPushButton(widget);
        goback->setObjectName(QStringLiteral("goback"));

        horizontalLayout_3->addWidget(goback);


        verticalLayout->addLayout(horizontalLayout_3);

        Adminnotification->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Adminnotification);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Adminnotification->setMenuBar(menubar);
        statusbar = new QStatusBar(Adminnotification);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Adminnotification->setStatusBar(statusbar);

        retranslateUi(Adminnotification);

        QMetaObject::connectSlotsByName(Adminnotification);
    } // setupUi

    void retranslateUi(QMainWindow *Adminnotification)
    {
        Adminnotification->setWindowTitle(QApplication::translate("Adminnotification", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("Adminnotification", "\346\225\231\345\270\210\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("Adminnotification", "\351\200\232\347\237\245\345\206\205\345\256\271", Q_NULLPTR));
        label_3->setText(QString());
        send->setText(QApplication::translate("Adminnotification", "\345\217\221\351\200\201\351\200\232\347\237\245", Q_NULLPTR));
        goback->setText(QApplication::translate("Adminnotification", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Adminnotification: public Ui_Adminnotification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINNOTIFICATION_H
