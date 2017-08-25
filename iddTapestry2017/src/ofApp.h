#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "Images.h"
#include "Meshes.h"

#define WIDTH 1118
#define HEIGHT 5000
#define SCALE 1/5

class ofApp : public ofBaseApp{
public:
    void setup();
    void draw();
    void keyPressed(int key);
    void generateImage();
    void setMesh();
    void drawMesh();
    ofColor pickColor(ofPoint _point, Images _images);
    
    //画像配列の設定
    static const int imagesLength = 4;
    float imageWidth;
    float imageHeight;
    Images images[imagesLength];
    ofxCvHaarFinder finder;
    
    //メッシュの設定
    static const int blockNumX = 10;
    static const int blockNumY = 10;
    int triangleNum = blockNumX*blockNumY*2;
    float blockSizeX;
    float blockSizeY;
    Meshes meshes[imagesLength];
    
    Boolean save = false;
};
