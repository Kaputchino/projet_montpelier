#include "book.h"
#include <bits/stdc++.h>

std::vector<book> book::listBooks;




book::book() {
    progress = 1;
}
book::book(std::string url2){
    url = url2;
    importBook();
}
book::book(std::string authors, std::string url, std::string description, std::string title){

}
//todo
bool book::isCorrect(){
    return true;
}

int book::getPosition(book* b)
{
    auto it = find(listBooks.begin(), listBooks.end(),b);
    return it - listBooks.begin();
}

int book::getNumberPage()
{
    return listPages.size();
}

std::string book::getAuthors() const
{
    return authors;
}

void book::setAuthors(const std::string &newAuthors)
{
    authors = newAuthors;
}

std::string book::getUrl()
{
    return url;
}

void book::setUrl(const std::string &newUrl)
{
    url = newUrl;
}

std::string book::getDescription() const
{
    return description;
}

void book::setDescription(const std::string &newDescription)
{
    description = newDescription;
}

std::string book::getTitle() const
{
    return title;
}

void book::setTitle(const std::string &newTitle)
{
    title = newTitle;
}

int book::getProgress() const
{
    return progress;
}

void book::setProgress(int newProgress)
{
    progress = newProgress;
}

page book::getUrlImage(int nb)
{
    if(nb >= listPages.size()){
        return listPages.at(listPages.size() - 1);
    }
    return listPages.at(nb);
}

bool book::update()
{
    return exportBook(url);
}
bool book::addPage(page page){
    std::cout <<page.getUrl()<<std::endl;
    if(std::find(listPages.begin(), listPages.end(), page) == listPages.end()){
        listPages.push_back(page);
        return true;
    }
    return false;
}

bool book::addTag(std::string str){
    if(std::find(listTags.begin(), listTags.end(), str) == listTags.end()){
        listTags.push_back(str);
        return true;
    }
    return false;
}


bool book::addPage(std::string url){
    return addPage(page(url));

}
bool book::importBook(){
    std::string myText;
    std::ifstream MyReadFile(url);
    bool pagePart = false;
    int count = 0;

    while (getline (MyReadFile, myText)) {
        if(!pagePart){
            //std::cout<<myText<<std::endl;
            if(count == 0){//title
                title = myText;
            }else if(count == 1){//autors
                authors = myText;
            }else if (count ==2){//page number
                progress = std::stoi(myText);
            }else if(count == 3 ){//tags
                std::stringstream ss(myText);

                // Temporary object to store the splitted
                // string
                std::string t;

                // Delimiter
                char del = '~';

                // Splitting the str string by delimiter
                while (getline(ss, t, del)){
                    addTag(t);
                }

            }
            else{
                if(myText.find("end%info") != std::string::npos){
                    pagePart = true;
                }else{
                    description.append("\n");
                    description.append(myText);
                }
            }
            count++;
        }
        else{
            addPage(myText);
        }
    }
    MyReadFile.close();
    return true;
}

std::string book::getAllTagOneLine(){
    std::string str ="";
    int count = 0;
    for(std::string tag : listTags){
        if(count != 0){
            str+= "~";
        }
        str+=tag;
        count++;
    }
    return str;
}

bool book::exportBook(std::string url){
    std::ofstream MyFile(url);
    MyFile << title <<std::endl;
    MyFile << authors <<std::endl;
    MyFile << progress<<std::endl;
    MyFile << getAllTagOneLine()<<std::endl;
    MyFile << description<<std::endl;
    MyFile <<"end%info"<<std::endl;
    for(page p : listPages){
        MyFile << p.getUrl()<<std::endl;
    }
    // Close the file
    MyFile.close();
    return true;
}



