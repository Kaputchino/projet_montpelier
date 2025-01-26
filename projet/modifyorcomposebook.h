#ifndef MODIFYORCOMPOSEBOOK_H
#define MODIFYORCOMPOSEBOOK_H

#include "book.h"
#include <QMainWindow>

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
    void onEdditPage(page p);

private:
    Ui::ModifyOrComposeBook *ui;
    book book;
};

#endif // MODIFYORCOMPOSEBOOK_H
