#pragma once
#include "ofMain.h"

class Images {
    public :
    string dir;
    int pictureLength;
    int pictureBegin;
    vector<ofImage> images;
    
    Images();
    Images(string _dir, int _begin, int _length);
};
