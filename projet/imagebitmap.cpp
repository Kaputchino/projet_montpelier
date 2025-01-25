#include "imagebitmap.h"
#include <fstream>
#include <iostream>
#include <vector>

ImageBitmap::ImageBitmap(){
    std::cout<<"if you read this, somehow, sometime, a bitmap is poorly generated"<<std::endl;
    //ImageBitmap("C:/Users/andre/OneDrive/Documents/devoir/fac/MPRO/m1/cplusplus/projets/qt/firstnewtry/projet/image/default.bmp");
}
ImageBitmap::ImageBitmap(std::string url2) {

    std::ifstream file("image.bmp", std::ios::binary); // Ouvre en mode binaire
    if (!file) {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier.\n";
        //return 1;
    }

    // Lecture des données
    file.seekg(0, std::ios::end);
    std::streamsize size = file.tellg();
    file.seekg(0, std::ios::beg);

    std::vector<char> buffer(size);
    if (file.read(buffer.data(), size)) {
        std::cout << "Fichier lu avec succès. Taille : " << size << " octets.\n";
    } else {
        std::cerr << "Erreur de lecture.\n";
    }




    std::ifstream filed(url2, std::ios::binary);
    if (!filed) {
        throw std::runtime_error("Unable to open file: " + url2);
    }

    // Get the file size
    std::streamsize fileSize = filed.tellg();
    filed.seekg(0, std::ios::beg);

    // Read the content into a string
    std::string bmpData(fileSize, '\0'); // Allocate space
    if (!filed.read(&bmpData[0], fileSize)) {
        throw std::runtime_error("Failed to read the file: " + url2);
    }
    untreatedImage = bmpData;
    std::cout<<"blasa "<<bmpData;
}

std::string ImageBitmap::getUntreatedurl() const
{
    return untreatedImage;
}

void ImageBitmap::setUntreatedurl(const std::string &newUntreatedurl)
{
    untreatedImage = newUntreatedurl;
}

std::string ImageBitmap::getTratedurl() const
{
    return image;
}

void ImageBitmap::setTratedurl(const std::string &newTratedurl)
{
    image = newTratedurl;
}

std::string ImageBitmap::getUntreatedImage() const
{
    return untreatedImage;
}

void ImageBitmap::setUntreatedImage(const std::string &newUntreatedImage)
{
    untreatedImage = newUntreatedImage;
}

std::string ImageBitmap::getImage() const
{
    return image;
}

void ImageBitmap::setImage(const std::string &newImage)
{
    image = newImage;
}
