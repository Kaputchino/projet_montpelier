#include "page.h"

page::page() {}
page::page(std::string url2){
    url = url2;
}

std::string page::getUrl(){
    return url;
}
