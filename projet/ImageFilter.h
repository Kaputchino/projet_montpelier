#ifndef IMAGEFILTER_H
#define IMAGEFILTER_H
#include "imagebitmap.h"

class Image;

// Classe abstraite pour les filtres d'image
class ImageFilter {
public:
    virtual ImageBitmap apply(ImageBitmap image) const = 0;
    virtual ~ImageFilter() = default;
};

// Filtres concrets
class GrayscaleFilter : public ImageFilter {
public:
    ImageBitmap apply(ImageBitmap image) const override;
};

class SepiaFilter : public ImageFilter {
public:
    ImageBitmap apply(ImageBitmap image) const override;
};

// Filtres concrets
class IdentityFilter : public ImageFilter {
public:
    ImageBitmap apply(ImageBitmap image) const override;
};
#endif // IMAGEFILTER_H
