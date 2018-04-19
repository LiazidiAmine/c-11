//
// Created by phoenix on 4/19/18.
//
#include "Shape.h"
#include "Circle.h"
#include <iostream>

Circle::Circle(int x, int y, int radius): Shape(x, y) {
        setRadius(radius);
}

int Circle::getRadius() {
    return radius;
}

void Circle::setRadius(int radius_in) {
    radius = radius_in;
}

void Circle::draw() {
    cout << "Circle :(" << getX() << "," << getY() <<
         "), radius " << getRadius()<< endl;
}
