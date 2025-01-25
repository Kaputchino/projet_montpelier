#ifndef CREATEBOOK_H
#define CREATEBOOK_H

#include <QMainWindow>

namespace Ui {
class createBook;
}

class createBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit createBook(QWidget *parent = nullptr);
    ~createBook();

private:
    Ui::createBook *ui;
};

#endif // CREATEBOOK_H
