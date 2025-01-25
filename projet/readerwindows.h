#ifndef READERWINDOWS_H
#define READERWINDOWS_H

#include "ImageFilter.h"
#include "book.h"
#include <QMainWindow>

namespace Ui {
class ReaderWindows;
}

class ReaderWindows : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReaderWindows(QWidget *parent = nullptr);
    ~ReaderWindows();

    book getB() const;

    ImageFilter*getImageFilter() const;
    void setImageFilter(std::unique_ptr<ImageFilter> newImageFilter);
    
    void startProcess();
    
    void setB(book newB);

    void onTextChanged();

    void loadImages(int v);
    void beforeBtnPressed();
    void endBtnPressed();
    void afterBtnPressed();
    void beginBtnPressed();

private:
    Ui::ReaderWindows *ui;
    book b;
    std::unique_ptr<ImageFilter> imageFilter;
};

#endif // READERWINDOWS_H
