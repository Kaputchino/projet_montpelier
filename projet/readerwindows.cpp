#include "readerwindows.h"
#include "ui_readerwindows.h"
#include <iostream>
#include <ostream>

void ReaderWindows::startProcess()
{
    int v = b.getProgress();
    page p1 = b.getUrlImage(v);
    page p2 = b.getUrlImage(v+1);
    std::cout<<"hiStart "<<std::endl;


    imageFilter->apply(p1.getImgBit());//print nth
    std::cout<<"hiStart jhdsfhbfdhbfd"<<std::endl;

    std::cout<<p1.getUrl()<<std::endl;
    // Convertir std::string en QByteArray

    std::cout<<"dfdfqgdfg "<<p1.getImgBit().getImage()<<"kbjdkbjbkdf"<<std::endl;
    QByteArray byteArrayLeft(p1.getImgBit().getImage().c_str(), static_cast<int>(p1.getImgBit().getImage().size()));

    // Charger l'image à partir des données
    QPixmap pixmapLeft;
    if (!pixmapLeft.loadFromData(byteArrayLeft, "BMP")) {
        qDebug() << "Erreur : Impossible de charger l'image depuis les données BMP.";
    }
    ui->leftImg->setPixmap(pixmapLeft);
    if(p1.getUrl() != p2.getUrl()){
        imageFilter->apply(p2.getImgBit());

        // Convertir std::string en QByteArray
        QByteArray byteArrayRight(p2.getImgBit().getImage().c_str(), static_cast<int>(p1.getImgBit().getImage().size()));

        // Charger l'image à partir des données
        QPixmap pixmapRight;
        if (!pixmapRight.loadFromData(byteArrayRight, "BMP")) {
            qDebug() << "Erreur : Impossible de charger l'image depuis les données BMP.";
        }
        ui->rightImg->setPixmap(pixmapRight);
    }
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
