/********************************************************************************
** Form generated from reading UI file 'stucomment.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUCOMMENT_H
#define UI_STUCOMMENT_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stucomment
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
    QLineEdit *comment;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QPushButton *release;
    QSpacerItem *horizontalSpacer;
    QPushButton *goback;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *stucomment)
    {
        if (stucomment->objectName().isEmpty())
            stucomment->setObjectName(QStringLiteral("stucomment"));
        stucomment->resize(800, 600);
        centralwidget = new QWidget(stucomment);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 60, 227, 152));
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

        comment = new QLineEdit(widget);
        comment->setObjectName(QStringLiteral("comment"));

        horizontalLayout_3->addWidget(comment);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(5);

        horizontalLayout_4->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        release = new QPushButton(widget);
        release->setObjectName(QStringLiteral("release"));

        horizontalLayout_5->addWidget(release);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        goback = new QPushButton(widget);
        goback->setObjectName(QStringLiteral("goback"));

        horizontalLayout_5->addWidget(goback);


        verticalLayout->addLayout(horizontalLayout_5);

        stucomment->setCentralWidget(centralwidget);
        menubar = new QMenuBar(stucomment);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        stucomment->setMenuBar(menubar);
        statusbar = new QStatusBar(stucomment);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        stucomment->setStatusBar(statusbar);

        retranslateUi(stucomment);

        QMetaObject::connectSlotsByName(stucomment);
    } // setupUi

    void retranslateUi(QMainWindow *stucomment)
    {
        stucomment->setWindowTitle(QApplication::translate("stucomment", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("stucomment", "\350\257\276\347\250\213\345\220\215", Q_NULLPTR));
        label_2->setText(QApplication::translate("stucomment", "\346\225\231\345\270\210\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("stucomment", "\350\257\204\350\257\255", Q_NULLPTR));
        label_4->setText(QApplication::translate("stucomment", "\350\257\204\345\210\206", Q_NULLPTR));
        label_5->setText(QString());
        release->setText(QApplication::translate("stucomment", "\345\217\221\345\270\203\350\257\204\346\225\231", Q_NULLPTR));
        goback->setText(QApplication::translate("stucomment", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class stucomment: public Ui_stucomment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUCOMMENT_H
