#ifndef BOOK_H
#define BOOK_H

#include "page.h"
#include <string>
#include <vector>
class book
{
public:
    static std::vector<book> listBooks;
    book();

    book(std::string url2);
    book(std::string authors, std::string url, std::string description, std::string title);
    bool addPage(page p);
    bool addPage(std::string url);
    bool importBook();
    bool exportBook(std::string url);
    bool addTag(std::string str);
    std::string getAllTagOneLine();
    bool isCorrect();
    bool operator==(const book b2){
        return url == b2.url;
    }
    bool operator==(const book* b2){
        return url == b2->url;
    }
    static int getPosition(book* b);
    int getNumberPage();
    std::string getAuthors() const;
    void setAuthors(const std::string &newAuthors);
    std::string getUrl();
    void setUrl(const std::string &newUrl);
    std::string getDescription() const;
    void setDescription(const std::string &newDescription);
    std::string getTitle() const;
    void setTitle(const std::string &newTitle);
    int getProgress() const;
    void setProgress(int newProgress);
    page getUrlImage(int nb);

private:
    std::string authors;
    std::string url;
    std::string description;
    std::string title;
    std::vector<page> listPages;
    std::vector<std::string> listTags;
    int progress;
};

#endif // BOOK_H
