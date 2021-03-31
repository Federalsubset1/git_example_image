#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480) {
    buffer = new char[width * height * 3];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg") {
        // load image file
        // decompress into buffer
        return true;
    }
    return false;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}

//I have implemented git repository via VCS - add vcs (ore something else)
//red files means that they are not versioned. To add them we can select the ones we want, and then right click-git
//-add. Also they become green


// check how to add local changes and console