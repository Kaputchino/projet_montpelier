#ifndef LIBRARYWINDOW_H
#define LIBRARYWINDOW_H

#include "book.h"
#include "readerwindows.h"
#include <QMainWindow>
#include <qpushbutton.h>

namespace Ui {
class LibraryWindow;
}

class LibraryWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LibraryWindow(QWidget *parent = nullptr);
    ~LibraryWindow();
    void openFileDialogue();
    void addBook(book b);
    void toLaunchNewBook(book b);

private slots:
    void handleButton();
    void on_addBookBtn_clicked();
    void on_clicked_btn_to_book();

private:
    Ui::LibraryWindow *ui;
    QPushButton *addBookBtn;
    ReaderWindows *readerWindow;
};


#endif // LIBRARYWINDOW_H
