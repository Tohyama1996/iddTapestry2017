#pragma once
#include "ofMain.h"

class Meshes {
public:
    vector<vector<ofPoint>> triangles;
    vector<ofColor> colors;
    Meshes();
    Meshes(int _tiriangleNum);
    void add(ofPoint _point0, ofPoint _point1, ofPoint _point2, ofColor _color);
};
