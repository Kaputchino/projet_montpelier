/********************************************************************************
** Form generated from reading UI file 'readerwindows.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERWINDOWS_H
#define UI_READERWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReaderWindows
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *leftImg;
    QSpacerItem *verticalSpacer;
    QLabel *rightImg;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *beginBtn;
    QPushButton *beforeBtn;
    QTextEdit *textEdit;
    QPushButton *afterBtn;
    QPushButton *endBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ReaderWindows)
    {
        if (ReaderWindows->objectName().isEmpty())
            ReaderWindows->setObjectName("ReaderWindows");
        ReaderWindows->resize(860, 633);
        centralwidget = new QWidget(ReaderWindows);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 861, 581));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        leftImg = new QLabel(verticalLayoutWidget);
        leftImg->setObjectName("leftImg");

        horizontalLayout_5->addWidget(leftImg);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer);

        rightImg = new QLabel(verticalLayoutWidget);
        rightImg->setObjectName("rightImg");

        horizontalLayout_5->addWidget(rightImg);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        beginBtn = new QPushButton(verticalLayoutWidget);
        beginBtn->setObjectName("beginBtn");

        horizontalLayout_6->addWidget(beginBtn);

        beforeBtn = new QPushButton(verticalLayoutWidget);
        beforeBtn->setObjectName("beforeBtn");

        horizontalLayout_6->addWidget(beforeBtn);

        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout_6->addWidget(textEdit);

        afterBtn = new QPushButton(verticalLayoutWidget);
        afterBtn->setObjectName("afterBtn");

        horizontalLayout_6->addWidget(afterBtn);

        endBtn = new QPushButton(verticalLayoutWidget);
        endBtn->setObjectName("endBtn");

        horizontalLayout_6->addWidget(endBtn);


        verticalLayout_6->addLayout(horizontalLayout_6);

        ReaderWindows->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ReaderWindows);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 860, 22));
        ReaderWindows->setMenuBar(menubar);
        statusbar = new QStatusBar(ReaderWindows);
        statusbar->setObjectName("statusbar");
        ReaderWindows->setStatusBar(statusbar);

        retranslateUi(ReaderWindows);

        QMetaObject::connectSlotsByName(ReaderWindows);
    } // setupUi

    void retranslateUi(QMainWindow *ReaderWindows)
    {
        ReaderWindows->setWindowTitle(QCoreApplication::translate("ReaderWindows", "MainWindow", nullptr));
        leftImg->setText(QCoreApplication::translate("ReaderWindows", "TextLabel", nullptr));
        rightImg->setText(QCoreApplication::translate("ReaderWindows", "TextLabel", nullptr));
        beginBtn->setText(QCoreApplication::translate("ReaderWindows", "<<", nullptr));
        beforeBtn->setText(QCoreApplication::translate("ReaderWindows", "<", nullptr));
        afterBtn->setText(QCoreApplication::translate("ReaderWindows", ">", nullptr));
        endBtn->setText(QCoreApplication::translate("ReaderWindows", ">>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReaderWindows: public Ui_ReaderWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERWINDOWS_H
