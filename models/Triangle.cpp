//
// Created by phoenix on 3/16/18.
//

#include "Triangle.h"
#include "Shape.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;


Triangle::Triangle(int base, int height, int x, int y): Shape(x, y){
    setBase(base);
    setHeight(height);
}

int Triangle::getBase() {
    return base;
}

int Triangle::getHeight() {
    return height;
}

void Triangle::setHeight(int heigh_in) {
    height = heigh_in;
}

void Triangle::setBase(int base_in) {
    base = base_in;
}

void Triangle::draw() {
    cout << "Triangle :(" << getX() << "," << getY() <<
         "), Base : " << getBase() << ", Height : " << getBase() << endl;
}
