#ifndef FILEFORMATHANDLER_H
#define FILEFORMATHANDLER_H
#include <string>
#include <vector>

// Classe abstraite pour représenter un format de fichier
class FileFormatHandler {
public:
    virtual bool loadFile(const std::string& filePath) = 0;
    virtual std::vector<std::string> extractPages() = 0;
    virtual ~FileFormatHandler() = default;
};

// Gestionnaire pour les fichiers ZIP (CBZ)
class ZipFileHandler : public FileFormatHandler {
public:
    bool loadFile(const std::string& filePath) override;
    std::vector<std::string> extractPages() override;
};
// Gestionnaire pour les fichiers RAR (CBR)
class RarFileHandler : public FileFormatHandler {
public:
    bool loadFile(const std::string& filePath) override;
    std::vector<std::string> extractPages() override;
};
#endif // FILEFORMATHANDLER_H
