#ifndef MODIFYORCOMPOSEBOOK_H
#define MODIFYORCOMPOSEBOOK_H

#include "book.h"
//#include "librarywindow.h"
#include <QMainWindow>
#include <qlineedit.h>

namespace Ui {
class ModifyOrComposeBook;
}

class ModifyOrComposeBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit ModifyOrComposeBook(QWidget *parent = nullptr);
    ~ModifyOrComposeBook();

    book getBook() const;
    void setB(book newBook);
    void onUpdateAuthor();
    void onUpdateTitle();
    void onUpdateDescription();
    void onUpdateProgress();
    void onUpdatePage();
    void onEdditPage(page p,QLineEdit ql);
    //void home();

private:
    Ui::ModifyOrComposeBook *ui;
    //LibraryWindow* lbw;
    book book;
};

#endif // MODIFYORCOMPOSEBOOK_H
