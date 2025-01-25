#include "readerwindows.h"
#include "ui_readerwindows.h"
#include <iostream>
#include <ostream>

void ReaderWindows::startProcess()
{
    int v = b.getProgress();
    page p1 = b.getUrlImage(v-1);
    page p2 = b.getUrlImage(v);
    std::cout <<"dfdsf"<< p1.getUrl()<<std::endl;
    QPixmap pixmapLeft(QString::fromStdString(p1.getUrl()));

    ui->leftImg->setPixmap(pixmapLeft);
    if(p1.getUrl() != p2.getUrl()){
        QPixmap pixmapRight(QString::fromStdString(p2.getUrl()));

        ui->rightImg->setPixmap(pixmapRight);
    }
    ui->inputNumber->setText(QString::fromStdString(std::to_string(v)));
}

void ReaderWindows::setB(book newB)
{
    b = newB;
}

ReaderWindows::ReaderWindows(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ReaderWindows)
{
    ui->setupUi(this);
    /**
    QPixmap pleft("C:/Users/andre/OneDrive/Documents/devoir/fac/MPRO/m1/cplusplus/projets/qt/firstnewtry/projet/left.png");
    QPixmap pright("C:/Users/andre/OneDrive/Documents/devoir/fac/MPRO/m1/cplusplus/projets/qt/firstnewtry/projet/right.png");
    ui->leftImg->setPixmap(pleft);
    ui->rightImg->setPixmap(pright);**/


}

ReaderWindows::~ReaderWindows()
{
    delete ui;
}

book ReaderWindows::getB() const
{
    return b;
}



ImageFilter*ReaderWindows::getImageFilter() const
{
    return imageFilter.get();
}

void ReaderWindows::setImageFilter(std::unique_ptr<ImageFilter> newImageFilter)
{
    imageFilter = std::move(newImageFilter);
}
