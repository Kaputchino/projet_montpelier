#include "imagebitmap.h"

ImageBitmap::ImageBitmap() {}

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
