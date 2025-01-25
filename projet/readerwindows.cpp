#include "readerwindows.h"
#include "ui_readerwindows.h"

ReaderWindows::ReaderWindows(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ReaderWindows)
{
    ui->setupUi(this);
    QPixmap pleft("C:/Users/andre/OneDrive/Documents/devoir/fac/MPRO/m1/cplusplus/projets/qt/firstnewtry/projet/left.png");
    QPixmap pright("C:/Users/andre/OneDrive/Documents/devoir/fac/MPRO/m1/cplusplus/projets/qt/firstnewtry/projet/right.png");
    ui->leftImg->setPixmap(pleft);
    ui->rightImg->setPixmap(pright);
}

ReaderWindows::~ReaderWindows()
{
    delete ui;
}

book ReaderWindows::getB() const
{
    return b;
}

void ReaderWindows::setB(const book &newB)
{
    b = newB;
}
