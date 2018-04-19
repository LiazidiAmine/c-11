//
// Created by phoenix on 4/19/18.
//
#include <iostream>
#include "Shape.h"
#include "Circle.h"
const double PI = 3.141592653589793;
Circle::Circle(int x, int y, int radius): Shape(x, y) {
        setRadius(radius);
}

int Circle::getRadius() {
    return radius;
}

void Circle::setRadius(int radius_in) {
    radius = radius_in;
}

double Circle::getArea(){
    return (PI*radius*radius);
}

void Circle::draw() {
    //cout << "Circle :(" << getX() << "," << getY() << "), radius " << getRadius() << ", area :" << getArea() << ", angle :" << geAngle() << endl;
}
