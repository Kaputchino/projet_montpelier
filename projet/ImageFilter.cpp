#include "ImageFilter.h"
#include "LibrarySystem.h"
#include <iostream>

// Implementation de GrayscaleFilter
ImageBitmap GrayscaleFilter::apply(ImageBitmap image) const {
    //std::cout << "Applying grayscale filter to: " << image << std::endl;
    return image;
}

// Implementation de SepiaFilter
ImageBitmap SepiaFilter::apply(ImageBitmap image) const {
    //std::cout << "Applying sepia filter to: " << image << std::endl;
    return image;
}
// Implementation du IdentityFilter (nothing)
ImageBitmap IdentityFilter::apply(ImageBitmap image) const {
    image.setImage(image.getUntreatedImage());
    return image;
}
