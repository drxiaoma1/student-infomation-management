/********************************************************************************
** Form generated from reading UI file 'score.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORE_H
#define UI_SCORE_H

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

class Ui_score
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
    QLineEdit *instructions;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *studentname;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *score_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QPushButton *givescore;
    QSpacerItem *horizontalSpacer;
    QPushButton *goback;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *score)
    {
        if (score->objectName().isEmpty())
            score->setObjectName(QStringLiteral("score"));
        score->resize(800, 600);
        centralwidget = new QWidget(score);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 60, 265, 182));
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

        instructions = new QLineEdit(widget);
        instructions->setObjectName(QStringLiteral("instructions"));

        horizontalLayout_3->addWidget(instructions);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        studentname = new QLineEdit(widget);
        studentname->setObjectName(QStringLiteral("studentname"));

        horizontalLayout_4->addWidget(studentname);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        score_2 = new QLineEdit(widget);
        score_2->setObjectName(QStringLiteral("score_2"));

        horizontalLayout_5->addWidget(score_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        givescore = new QPushButton(widget);
        givescore->setObjectName(QStringLiteral("givescore"));

        horizontalLayout_6->addWidget(givescore);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        goback = new QPushButton(widget);
        goback->setObjectName(QStringLiteral("goback"));

        horizontalLayout_6->addWidget(goback);


        verticalLayout->addLayout(horizontalLayout_6);

        score->setCentralWidget(centralwidget);
        menubar = new QMenuBar(score);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        score->setMenuBar(menubar);
        statusbar = new QStatusBar(score);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        score->setStatusBar(statusbar);

        retranslateUi(score);

        QMetaObject::connectSlotsByName(score);
    } // setupUi

    void retranslateUi(QMainWindow *score)
    {
        score->setWindowTitle(QApplication::translate("score", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("score", "\346\225\231\345\270\210\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("score", "\350\257\276\347\250\213\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("score", "\344\275\234\344\270\232\345\220\215/\346\217\217\350\277\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("score", "\345\255\246\347\224\237\345\220\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("score", "\345\210\206\346\225\260", Q_NULLPTR));
        label_6->setText(QString());
        givescore->setText(QApplication::translate("score", "\346\211\223\345\210\206", Q_NULLPTR));
        goback->setText(QApplication::translate("score", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class score: public Ui_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORE_H
