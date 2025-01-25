#ifndef LIBRARYSYSTEM_H
#define LIBRARYSYSTEM_H
#include <string>
#include <vector>
#include <memory>

#include "ImageFilter.h"
#include "FileFormatHandler.h"

// Classe représentant une image
class Image {
private:
    std::string filePath;  // Chemin de l'image sur le disque

public:
    explicit Image(const std::string& path);
    const std::string& getPath() const;
    std::shared_ptr<Image> applyFilter(const ImageFilter& filter) const;
};

// Classe représentant une page dans un livre
class Page {
private:
    std::shared_ptr<Image> image;  // Image associée à la page

public:
    explicit Page(const std::shared_ptr<Image>& img);
    const std::shared_ptr<Image>& getImage() const;
};

// Classe représentant un livre
class Book {
private:
    std::string title;              // Titre du livre
    std::vector<std::shared_ptr<Page>> pages;  // Pages du livre

public:
    explicit Book(const std::string& bookTitle);
    void addPage(const std::shared_ptr<Page>& page);
    const std::vector<std::shared_ptr<Page>>& getPages() const;
    const std::string& getTitle() const;
};

// Classe représentant la bibliothèque
class Library {
private:
    std::vector<std::shared_ptr<Book>> books;  // Liste des livres
    std::vector<std::unique_ptr<FileFormatHandler>> fileHandlers;  // Gestionnaires de format de fichier

public:
    Library();
    void registerFileHandler(std::unique_ptr<FileFormatHandler> handler);
    bool importBooksFromFolder(const std::string& folderPath);
    const std::vector<std::shared_ptr<Book>>& getBooks() const;
};
#endif // LIBRARYSYSTEM_H
