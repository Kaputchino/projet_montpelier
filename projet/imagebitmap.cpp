#include "imagebitmap.h"
#include <fstream>
#include <iostream>
#include <vector>

ImageBitmap::ImageBitmap(){
    std::cout<<"if you read this, somehow, sometime, a bitmap is poorly generated"<<std::endl;
    //ImageBitmap("C:/Users/andre/OneDrive/Documents/devoir/fac/MPRO/m1/cplusplus/projets/qt/firstnewtry/projet/image/default.bmp");
}
ImageBitmap::ImageBitmap(std::string url2) {


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
