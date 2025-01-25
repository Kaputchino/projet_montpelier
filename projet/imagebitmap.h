#ifndef IMAGEBITMAP_H
#define IMAGEBITMAP_H

#include <string>
class ImageBitmap
{
public:
    ImageBitmap();
    ImageBitmap(std::string url2);
    std::string getUntreatedurl() const;
    void setUntreatedurl(const std::string &newUntreatedurl);
    std::string getTratedurl() const;
    void setTratedurl(const std::string &newTratedurl);

    std::string getUntreatedImage() const;
    void setUntreatedImage(const std::string &newUntreatedImage);
    std::string getImage() const;
    void setImage(const std::string &newImage);

private:
    std::string untreatedImage; //not url
    std::string image;
};

#endif // IMAGEBITMAP_H
