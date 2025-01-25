#include "LibrarySystem.h"
#include <iostream>

// Implementation de Image
Image::Image(const std::string& path) : filePath(path) {}

const std::string& Image::getPath() const {
    return filePath;
}

std::shared_ptr<Image> Image::applyFilter(const ImageFilter& filter) const {
    return filter.apply(std::make_shared<Image>(*this));
}

// Implementation de Page
Page::Page(const std::shared_ptr<Image>& img) : image(img) {}

const std::shared_ptr<Image>& Page::getImage() const {
    return image;
}

// Implementation de Book
Book::Book(const std::string& bookTitle) : title(bookTitle) {}

void Book::addPage(const std::shared_ptr<Page>& page) {
    pages.push_back(page);
}

const std::vector<std::shared_ptr<Page>>& Book::getPages() const {
    return pages;
}

const std::string& Book::getTitle() const {
    return title;
}

// Implementation de Library
Library::Library() = default;

void Library::registerFileHandler(std::unique_ptr<FileFormatHandler> handler) {
    fileHandlers.push_back(std::move(handler));
}

bool Library::importBooksFromFolder(const std::string& folderPath) {
    // Implémentation simulée : toujours réussir
    std::cout << "Importing books from folder: " << folderPath << std::endl;
    return true;
}

const std::vector<std::shared_ptr<Book>>& Library::getBooks() const {
    return books;
}
