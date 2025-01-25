#include "book.h"
#include "librarywindow.h"
#include <QApplication>
#include <filesystem>
#include <iostream>


bool addBook(book *b){
    if(!b->isCorrect()){
        return false;
    }
    if(std::find(book::listBooks.begin(),  book::listBooks.end(), b) ==  book::listBooks.end()){
        std::cout<<"dfdf"<<b->getAuthors()<<std::endl;;
        book::listBooks.push_back(*b);

        std::cout<<"hi s "<<b->getNumberPage()<<" v "<<b->getUrlImage(0).getUrl()<<std::endl;
        return true;
    }
    return false;
}

void processReadBooksSaved(std::string bookDefaultPath){
    for (const auto & entry : std::filesystem::directory_iterator(bookDefaultPath)){
        book b1 = book(entry.path().string());
        addBook(&b1);
        std::cout << entry.path().string()<<std::endl;
    }
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();


    processReadBooksSaved("C:/Users/andre/OneDrive/Documents/devoir/fac/MPRO/m1/cplusplus/projets/qt/firstnewtry/projet/books");

    std::cout<<"deb lib"<<std::endl;

    LibraryWindow l;
    std::cout<<book::listBooks.size();
    for(book b:  book::listBooks){
        std::cout<<b.getUrl();
        l.addBook(b);
        b.update();
        //b.exportBook("C:/Users/andre/OneDrive/Documents/devoir/fac/MPRO/m1/cplusplus/projets/qt/firstnewtry/projet/books/t.txt");
    }
    std::cout<<"fin lib"<<std::endl;



    l.show();



    return a.exec();
}
