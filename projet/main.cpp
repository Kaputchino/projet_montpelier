#include "book.h"
#include "librarywindow.h"
#include "mainwindow.h"
#include "readerwindows.h"
#include <QApplication>
#include <filesystem>
#include <iostream>


bool addBook(book b){
    if(!b.isCorrect()){
        return false;
    }
    if(std::find(book::listBooks.begin(),  book::listBooks.end(), b) ==  book::listBooks.end()){
        book::listBooks.push_back(b);
        return true;
    }
    return false;
}

void processReadBooksSaved(std::string bookDefaultPath){
    for (const auto & entry : std::filesystem::directory_iterator(bookDefaultPath)){
        addBook(book(entry.path().string()));
        std::cout << entry.path().string()<<std::endl;
    }
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    /**
    QImage right;
    right.load("C:/Users/andre/OneDrive/Documents/devoir/fac/MPRO/m1/cplusplus/projets/qt/firstnewtry/projet/right.png");
    QImage left;
    left.load("left.png");
    ReaderWindows r;
    r.show();**/

    processReadBooksSaved("C:/Users/andre/OneDrive/Documents/devoir/fac/MPRO/m1/cplusplus/projets/qt/firstnewtry/projet/books");


    LibraryWindow l;
    for(book b:  book::listBooks){
        l.addBook(&b);
    }



    l.show();



    return a.exec();
}
