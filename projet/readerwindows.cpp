#include "readerwindows.h"
#include "ui_readerwindows.h"
#include <iostream>
#include <ostream>

void ReaderWindows::loadImages(int v)
{
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



void ReaderWindows::startProcess()
{
    int v = b.getProgress();
    loadImages(v);
    connect(ui->inputNumber, &QTextEdit::textChanged, this, &ReaderWindows::onTextChanged);
    connect(ui->beforeBtn, &QPushButton::clicked, this, &ReaderWindows::beforeBtnPressed);
    connect(ui->afterBtn, &QPushButton::clicked, this, &ReaderWindows::afterBtnPressed);
    connect(ui->beginBtn, &QPushButton::clicked, this, &ReaderWindows::beginBtnPressed);
    connect(ui->endBtn, &QPushButton::clicked, this, &ReaderWindows::endBtnPressed);




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

inline bool not_digit(char ch) {
    return '0' <= ch && ch <= '9';
}

std::string remove_non_digits(const std::string& input) {
    std::string result;
    std::copy_if(input.begin(), input.end(),
                 std::back_inserter(result),
                 not_digit);
    return result;
}



void ReaderWindows::onTextChanged(){
    ui->inputNumber->blockSignals(true);
    QString currentText = ui->inputNumber->toPlainText();
    std::string str = currentText.toStdString();
    str = remove_non_digits(str);

    try {
        int nValue = 0;
        if(!str.empty()){
            nValue = std::stoi(str);
        }
        if(nValue>b.getNumberPage()){
            nValue = b.getNumberPage();
        }
        if(nValue % 2 == 0){
            nValue--;
        }
        if(nValue < 1){
            nValue = 1;
        }
        b.setProgress(nValue);
        ui->inputNumber->setText(QString::fromStdString(str));
        b.update();
        loadImages(nValue);
    }
    catch (int i) {
        // Block of code to handle errors
        std::cout<<"ha"<<std::endl;
    }
    ui->inputNumber->blockSignals(false);


}


void ReaderWindows::beforeBtnPressed(){
    QString currentText = ui->inputNumber->toPlainText();
    std::string str = currentText.toStdString();
    str = remove_non_digits(str);
    try {
        int nValue = std::stoi(str);
        nValue--;
        ui->inputNumber->setText(QString::fromStdString(std::to_string(nValue)));
    }
    catch(int i){

    }
}

void ReaderWindows::afterBtnPressed(){
    QString currentText = ui->inputNumber->toPlainText();
    std::string str = currentText.toStdString();
    str = remove_non_digits(str);
    try {
        int nValue = std::stoi(str);
        nValue+=2;
        ui->inputNumber->setText(QString::fromStdString(std::to_string(nValue)));
    }
    catch(int i){

    }
}

void ReaderWindows::beginBtnPressed(){
    QString currentText = ui->inputNumber->toPlainText();
    std::string str = currentText.toStdString();
    str = remove_non_digits(str);
    try {

        ui->inputNumber->setText(QString::fromStdString("1"));
    }
    catch(int i){

    }
}
void ReaderWindows::endBtnPressed(){
    QString currentText = ui->inputNumber->toPlainText();
    std::string str = currentText.toStdString();
    str = remove_non_digits(str);
    try {
        int nValue = b.getNumberPage();
        ui->inputNumber->setText(QString::fromStdString(std::to_string(nValue)));
    }
    catch(int i){

    }
}
ImageFilter*ReaderWindows::getImageFilter() const
{
    return imageFilter.get();
}

void ReaderWindows::setImageFilter(std::unique_ptr<ImageFilter> newImageFilter)
{
    imageFilter = std::move(newImageFilter);
}
