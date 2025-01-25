#include "page.h"
#include <iostream>
#include <ostream>

page::page() {}
page::page(std::string url2){
    url = url2;
    std::cout<<url<<std::endl;
    //imgBit = ImageBitmap(url2);
}
/*
ImageBitmap page::getImgBit() const
{
    return imgBit;
}

void page::setImgBit(const ImageBitmap &newImgBit)
{
    imgBit = newImgBit;
}
*/
std::string page::getUrl(){
    return url;
}
