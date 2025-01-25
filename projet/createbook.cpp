#include "createbook.h"
#include "ui_createbook.h"

createBook::createBook(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::createBook)
{
    ui->setupUi(this);
}

createBook::~createBook()
{
    delete ui;
}
