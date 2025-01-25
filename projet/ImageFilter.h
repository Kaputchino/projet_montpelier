#ifndef IMAGEFILTER_H
#define IMAGEFILTER_H
#include <memory>

class Image;

// Classe abstraite pour les filtres d'image
class ImageFilter {
public:
    virtual std::shared_ptr<Image> apply(const std::shared_ptr<Image>& image) const = 0;
    virtual ~ImageFilter() = default;
};

// Filtres concrets
class GrayscaleFilter : public ImageFilter {
public:
    std::shared_ptr<Image> apply(const std::shared_ptr<Image>& image) const override;
};

class SepiaFilter : public ImageFilter {
public:
    std::shared_ptr<Image> apply(const std::shared_ptr<Image>& image) const override;
};

// Filtres concrets
class IdentityFilter : public ImageFilter {
public:
    std::shared_ptr<Image> apply(const std::shared_ptr<Image>& image) const override;
};
#endif // IMAGEFILTER_H
