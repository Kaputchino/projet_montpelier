/********************************************************************************
** Form generated from reading UI file 'librarywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYWINDOW_H
#define UI_LIBRARYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LibraryWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *addBookBtn;
    QVBoxLayout *bookLayout;
    QListView *listBooks;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LibraryWindow)
    {
        if (LibraryWindow->objectName().isEmpty())
            LibraryWindow->setObjectName("LibraryWindow");
        LibraryWindow->resize(800, 600);
        centralwidget = new QWidget(LibraryWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 801, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addBookBtn = new QPushButton(verticalLayoutWidget);
        addBookBtn->setObjectName("addBookBtn");

        horizontalLayout->addWidget(addBookBtn);


        verticalLayout->addLayout(horizontalLayout);

        bookLayout = new QVBoxLayout();
        bookLayout->setObjectName("bookLayout");

        verticalLayout->addLayout(bookLayout);

        listBooks = new QListView(verticalLayoutWidget);
        listBooks->setObjectName("listBooks");

        verticalLayout->addWidget(listBooks);

        LibraryWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LibraryWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        LibraryWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LibraryWindow);
        statusbar->setObjectName("statusbar");
        LibraryWindow->setStatusBar(statusbar);

        retranslateUi(LibraryWindow);

        QMetaObject::connectSlotsByName(LibraryWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LibraryWindow)
    {
        LibraryWindow->setWindowTitle(QCoreApplication::translate("LibraryWindow", "MainWindow", nullptr));
        addBookBtn->setText(QCoreApplication::translate("LibraryWindow", "Add book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LibraryWindow: public Ui_LibraryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYWINDOW_H
