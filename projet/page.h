#ifndef PAGE_H
#define PAGE_H

#include "imagebitmap.h"
#include <string>
class page
{
public:
    std::string getUrl();
    page();
    page(std::string url2);
    bool operator==(const page b2){
        return url == b2.url;
    }
    //ImageBitmap getImgBit() const;
    //void setImgBit(const ImageBitmap &newImgBit);

private:
    std::string url;
    //ImageBitmap imgBit;

    //image image;
    //std::string urlfilter;
    //image untrated image;
};

#endif // PAGE_H
