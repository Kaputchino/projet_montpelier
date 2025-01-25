#include "librarywindow.h"
#include "ui_librarywindow.h"
#include "QFileDialog"
#include <iostream>
#include <qlabel.h>

LibraryWindow::LibraryWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LibraryWindow)
{
    ui->setupUi(this);
}

LibraryWindow::~LibraryWindow()
{
    delete ui;
}

void LibraryWindow::addBook(book b)
{
    QHBoxLayout* newLayoutGeneral = new QHBoxLayout;
    QLabel* image = new QLabel;
    QVBoxLayout* rightLayout = new QVBoxLayout;
    newLayoutGeneral->addWidget(image);
    QLabel* titre = new QLabel;
    titre->setText(QString::fromStdString("Titre: "+b.getTitle()));
    QLabel* auteur = new QLabel;
    auteur->setText(QString::fromStdString("Auteurs: "+b.getAuthors()));
    QLabel* progpage = new QLabel;
    std::string pagesstr = &"Page: "[b.getProgress()];
    pagesstr += &" /"[b.getNumberPage()];
    QString qr = QString::fromStdString(pagesstr);
    progpage->setText(qr);
    QLabel* description = new QLabel;
    description->setText(QString::fromStdString("Description: " + b.getDescription()));
    rightLayout->addWidget(titre);
    rightLayout->addWidget(auteur);
    rightLayout->addWidget(progpage);
    rightLayout->addWidget(description);

    QPushButton* button = new QPushButton;
    button->setText(QString::fromStdString("Read"));
    rightLayout->addWidget(button);
    button->setProperty("id",book::getPosition(b));

    //QObject::connect(button,&QPushButton::clicked,this,&LibraryWindow::on_clicked_btn_to_book);
    int i = book::getPosition(b);
    connect(button, &QPushButton::clicked, this, [this, i, &b]() {
        this->toLaunchNewBook(&b);
    });

    newLayoutGeneral->addLayout(rightLayout);
    ui->bookLayout->addLayout(newLayoutGeneral);

}

void LibraryWindow::toLaunchNewBook(book* b)
{
    readerWindow = new ReaderWindows(this);
    readerWindow->setB(*b);
    readerWindow->show();
    this->hide();
}
void LibraryWindow::handleButton()
{
    QObject* obj = sender();
    auto fileName = QFileDialog::getOpenFileName(this,
                                            tr("Open Image"), "/home", tr("Image Files (*.png *.jpg *.bmp)"));
}


void LibraryWindow::on_addBookBtn_clicked()
{

    auto fileName = QFileDialog::getOpenFileName(this,
                                                 tr("Open Image"), "/home", tr("Image Files (*.png *.jpg *.bmp)"));
    using namespace std::chrono;
    milliseconds ms = duration_cast< milliseconds >(
        system_clock::now().time_since_epoch());
    std::string str2 = "C:/Users/andre/OneDrive/Documents/devoir/fac/MPRO/m1/cplusplus/projets/qt/firstnewtry/projet/books/" + std::to_string(ms.count());;

    QString booksPath = QString::fromStdString(str2);


    /**

    if(!QFile::copy(fileName, booksPath)){
        std::cout<<"something went wrong with the cloning stuff"<<std::endl;
        std::cout<<fileName.toStdString()<<std::endl;
        std::cout<<booksPath.toStdString()<<std::endl;
    }**/

}



void LibraryWindow::on_clicked_btn_to_book()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    QString qstr = button->property("id").toString();
    std::string str = qstr.toStdString();
    int id = atoi( str.c_str());




}

