//
// Created by phoenix on 3/17/18.
//

#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"
#include <iostream>

using namespace std;


Rectangle::Rectangle(int x, int y, int width, int height): Shape(x, y){
    setWidth(width);
    setHeight(height);
}

int Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(int width_in) {
    width = width_in;
}

int Rectangle::getHeight() {
    return height;
}

void Rectangle::setHeight(int height_in) {
    height = height_in;
}

void Rectangle::draw() {
    cout << "Rectangle :(" << getX() << "," << getY() << "), width :" << getWidth() << ", height :" << getHeight() << endl;
}
