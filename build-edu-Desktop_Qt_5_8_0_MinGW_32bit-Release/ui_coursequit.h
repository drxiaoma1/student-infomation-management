/********************************************************************************
** Form generated from reading UI file 'coursequit.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEQUIT_H
#define UI_COURSEQUIT_H

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

class Ui_coursequit
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *coursename;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *teachername;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *join;
    QSpacerItem *horizontalSpacer;
    QPushButton *goback;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *coursequit)
    {
        if (coursequit->objectName().isEmpty())
            coursequit->setObjectName(QStringLiteral("coursequit"));
        coursequit->resize(800, 600);
        centralwidget = new QWidget(coursequit);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 80, 227, 92));
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

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        teachername = new QLineEdit(widget);
        teachername->setObjectName(QStringLiteral("teachername"));

        horizontalLayout_2->addWidget(teachername);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        join = new QPushButton(widget);
        join->setObjectName(QStringLiteral("join"));

        horizontalLayout_3->addWidget(join);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        goback = new QPushButton(widget);
        goback->setObjectName(QStringLiteral("goback"));

        horizontalLayout_3->addWidget(goback);


        verticalLayout->addLayout(horizontalLayout_3);

        coursequit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(coursequit);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        coursequit->setMenuBar(menubar);
        statusbar = new QStatusBar(coursequit);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        coursequit->setStatusBar(statusbar);

        retranslateUi(coursequit);

        QMetaObject::connectSlotsByName(coursequit);
    } // setupUi

    void retranslateUi(QMainWindow *coursequit)
    {
        coursequit->setWindowTitle(QApplication::translate("coursequit", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("coursequit", "\350\257\276\347\250\213\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("coursequit", "\346\225\231\345\270\210\345\220\215", Q_NULLPTR));
        label_3->setText(QString());
        join->setText(QApplication::translate("coursequit", "\351\200\200\345\207\272\350\257\276\347\250\213", Q_NULLPTR));
        goback->setText(QApplication::translate("coursequit", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class coursequit: public Ui_coursequit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEQUIT_H
