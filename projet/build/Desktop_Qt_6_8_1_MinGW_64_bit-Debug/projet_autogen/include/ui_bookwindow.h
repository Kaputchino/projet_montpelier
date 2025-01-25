/********************************************************************************
** Form generated from reading UI file 'bookwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKWINDOW_H
#define UI_BOOKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bookWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_12;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *bookWindow)
    {
        if (bookWindow->objectName().isEmpty())
            bookWindow->setObjectName("bookWindow");
        bookWindow->resize(800, 600);
        centralwidget = new QWidget(bookWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 801, 561));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout_12->addWidget(label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_5->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout_5->addWidget(pushButton_4);


        verticalLayout_12->addLayout(horizontalLayout_5);


        horizontalLayout_4->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_8->addWidget(label_2);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_8->addWidget(lineEdit_3);


        verticalLayout_11->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_6->addWidget(label_3);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_6->addWidget(lineEdit_2);


        verticalLayout_11->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_7->addWidget(label_4);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_7->addWidget(lineEdit);


        verticalLayout_11->addLayout(horizontalLayout_7);


        horizontalLayout_4->addLayout(verticalLayout_11);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_9->addLayout(horizontalLayout_3);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout_10->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_10->addWidget(pushButton_2);


        verticalLayout_9->addLayout(verticalLayout_10);

        bookWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(bookWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        bookWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(bookWindow);
        statusbar->setObjectName("statusbar");
        bookWindow->setStatusBar(statusbar);

        retranslateUi(bookWindow);

        QMetaObject::connectSlotsByName(bookWindow);
    } // setupUi

    void retranslateUi(QMainWindow *bookWindow)
    {
        bookWindow->setWindowTitle(QCoreApplication::translate("bookWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("bookWindow", "TextLabel", nullptr));
        pushButton_3->setText(QCoreApplication::translate("bookWindow", "<", nullptr));
        pushButton_4->setText(QCoreApplication::translate("bookWindow", ">", nullptr));
        label_2->setText(QCoreApplication::translate("bookWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("bookWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("bookWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("bookWindow", "edit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("bookWindow", "read", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookWindow: public Ui_bookWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKWINDOW_H
