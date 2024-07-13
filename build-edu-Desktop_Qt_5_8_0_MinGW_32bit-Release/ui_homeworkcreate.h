/********************************************************************************
** Form generated from reading UI file 'homeworkcreate.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWORKCREATE_H
#define UI_HOMEWORKCREATE_H

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

class Ui_homeworkcreate
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
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *instruction;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *release;
    QSpacerItem *horizontalSpacer;
    QPushButton *goback;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *homeworkcreate)
    {
        if (homeworkcreate->objectName().isEmpty())
            homeworkcreate->setObjectName(QStringLiteral("homeworkcreate"));
        homeworkcreate->resize(800, 600);
        centralwidget = new QWidget(homeworkcreate);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 50, 265, 122));
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

        release = new QPushButton(widget);
        release->setObjectName(QStringLiteral("release"));

        horizontalLayout_4->addWidget(release);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        goback = new QPushButton(widget);
        goback->setObjectName(QStringLiteral("goback"));

        horizontalLayout_4->addWidget(goback);


        verticalLayout->addLayout(horizontalLayout_4);

        homeworkcreate->setCentralWidget(centralwidget);
        menubar = new QMenuBar(homeworkcreate);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        homeworkcreate->setMenuBar(menubar);
        statusbar = new QStatusBar(homeworkcreate);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        homeworkcreate->setStatusBar(statusbar);

        retranslateUi(homeworkcreate);

        QMetaObject::connectSlotsByName(homeworkcreate);
    } // setupUi

    void retranslateUi(QMainWindow *homeworkcreate)
    {
        homeworkcreate->setWindowTitle(QApplication::translate("homeworkcreate", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("homeworkcreate", "\346\225\231\345\270\210\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("homeworkcreate", "\350\257\276\347\250\213\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("homeworkcreate", "\344\275\234\344\270\232\345\220\215/\346\217\217\350\277\260", Q_NULLPTR));
        label_4->setText(QString());
        release->setText(QApplication::translate("homeworkcreate", "\345\217\221\345\270\203\344\275\234\344\270\232", Q_NULLPTR));
        goback->setText(QApplication::translate("homeworkcreate", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class homeworkcreate: public Ui_homeworkcreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWORKCREATE_H
