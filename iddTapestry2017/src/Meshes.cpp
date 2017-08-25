#include "Meshes.h"

Meshes::Meshes() {
    
}

Meshes::Meshes(int _triangleNum) {
    triangles.resize(_triangleNum);
    for (int i=0; i<_triangleNum; i++) {
        triangles[i].resize(3);
    }
    colors.resize(_triangleNum);
}

void Meshes::add(ofPoint _point0, ofPoint _point1, ofPoint _point2, ofColor _color) {
    vector<ofPoint> _points;
    _points.resize(3);
    _points[0] = _point0;
    _points[1] = _point1;
    _points[2] = _point2;
    triangles.push_back(_points);
    colors.push_back(_color);
}
