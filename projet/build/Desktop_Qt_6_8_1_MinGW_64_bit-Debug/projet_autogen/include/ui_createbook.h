/********************************************************************************
** Form generated from reading UI file 'createbook.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEBOOK_H
#define UI_CREATEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createBook
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *createBook)
    {
        if (createBook->objectName().isEmpty())
            createBook->setObjectName("createBook");
        createBook->resize(800, 600);
        centralwidget = new QWidget(createBook);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 801, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout_6->addWidget(label);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_6->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_5->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit->setObjectName("plainTextEdit");

        horizontalLayout_4->addWidget(plainTextEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_7->addWidget(label_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);


        horizontalLayout_7->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_7);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        createBook->setCentralWidget(centralwidget);
        menubar = new QMenuBar(createBook);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        createBook->setMenuBar(menubar);
        statusbar = new QStatusBar(createBook);
        statusbar->setObjectName("statusbar");
        createBook->setStatusBar(statusbar);

        retranslateUi(createBook);

        QMetaObject::connectSlotsByName(createBook);
    } // setupUi

    void retranslateUi(QMainWindow *createBook)
    {
        createBook->setWindowTitle(QCoreApplication::translate("createBook", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("createBook", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("createBook", "Authors", nullptr));
        label_3->setText(QCoreApplication::translate("createBook", "Description", nullptr));
        label_4->setText(QCoreApplication::translate("createBook", "Path", nullptr));
        pushButton_2->setText(QCoreApplication::translate("createBook", "PushButton", nullptr));
        label_5->setText(QCoreApplication::translate("createBook", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("createBook", "Confirmer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createBook: public Ui_createBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEBOOK_H
