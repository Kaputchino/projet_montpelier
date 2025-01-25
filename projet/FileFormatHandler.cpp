//
// Created by andre on 06/01/2025.
//
#include "FileFormatHandler.h"
#include <iostream>

// Implementation de ZipFileHandler
bool ZipFileHandler::loadFile(const std::string& filePath) {
    std::cout << "Loading ZIP file: " << filePath << std::endl;
    return true;
}

std::vector<std::string> ZipFileHandler::extractPages() {
    std::cout << "Extracting pages from ZIP file." << std::endl;
    return { "page1.jpg", "page2.jpg" };
}
