#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480), channels(3), depth(8) {
    buffer = new int[width * height * channels];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg") {
        // load image file
        // decompress into buffer
        // more code to handle pixel depth and channels
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


// check how to add local changes and console DONE
//add a unversioned directory with right click to file-add to gitignore-add to .gitignore(can be added to versioned)/
//.git.. (cannot be added to versioned)

//we removed in gitignore debug and release folders. Removing .idea

// now we need to commit .gitignore

//remember to share the project on github via git-github-share project on github. This is a push action

//blue files means that it is modified from the original (the one that i commit)