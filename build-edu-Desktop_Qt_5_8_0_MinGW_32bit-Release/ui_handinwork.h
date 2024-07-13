/********************************************************************************
** Form generated from reading UI file 'handinwork.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HANDINWORK_H
#define UI_HANDINWORK_H

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

class Ui_handinwork
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
    QLineEdit *instruction;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *work;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QPushButton *handin;
    QSpacerItem *horizontalSpacer;
    QPushButton *goback;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *handinwork)
    {
        if (handinwork->objectName().isEmpty())
            handinwork->setObjectName(QStringLiteral("handinwork"));
        handinwork->resize(800, 600);
        centralwidget = new QWidget(handinwork);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 50, 265, 152));
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

        instruction = new QLineEdit(widget);
        instruction->setObjectName(QStringLiteral("instruction"));

        horizontalLayout_3->addWidget(instruction);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        work = new QLineEdit(widget);
        work->setObjectName(QStringLiteral("work"));

        horizontalLayout_4->addWidget(work);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        handin = new QPushButton(widget);
        handin->setObjectName(QStringLiteral("handin"));

        horizontalLayout_5->addWidget(handin);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        goback = new QPushButton(widget);
        goback->setObjectName(QStringLiteral("goback"));

        horizontalLayout_5->addWidget(goback);


        verticalLayout->addLayout(horizontalLayout_5);

        handinwork->setCentralWidget(centralwidget);
        menubar = new QMenuBar(handinwork);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        handinwork->setMenuBar(menubar);
        statusbar = new QStatusBar(handinwork);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        handinwork->setStatusBar(statusbar);

        retranslateUi(handinwork);

        QMetaObject::connectSlotsByName(handinwork);
    } // setupUi

    void retranslateUi(QMainWindow *handinwork)
    {
        handinwork->setWindowTitle(QApplication::translate("handinwork", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("handinwork", "\350\257\276\347\250\213\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("handinwork", "\346\225\231\345\270\210\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("handinwork", "\344\275\234\344\270\232\345\220\215/\346\217\217\350\277\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("handinwork", "\344\275\234\344\270\232\345\206\205\345\256\271", Q_NULLPTR));
        label_5->setText(QString());
        handin->setText(QApplication::translate("handinwork", "\346\217\220\344\272\244\344\275\234\344\270\232", Q_NULLPTR));
        goback->setText(QApplication::translate("handinwork", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class handinwork: public Ui_handinwork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HANDINWORK_H
