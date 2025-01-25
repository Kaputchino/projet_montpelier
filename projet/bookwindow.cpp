#include "bookwindow.h"
#include "ui_bookwindow.h"

bookWindow::bookWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::bookWindow)
{
    ui->setupUi(this);
}

bookWindow::~bookWindow()
{
    delete ui;
}
