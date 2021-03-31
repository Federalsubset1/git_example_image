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

//master e' il repository sulla macchina   origin/master e' il repository remoto. Per farle coincidere, tasto destro-
//push. Cosi' mantengo aggiornato il repository remoto

//if u work with someone, first pull, then push

//newer language ambient has their own edit history, bu it's really raw.

//advice: use it also for a personal use

//create new branch. Checkout branch makes the new branch ready to work

//add zsh plugin for an easier view in terminal

//commit in git are free

//checkout let switch between branches

//added new branch image_saver

//now we do a checkout

//now we have two splitted developing