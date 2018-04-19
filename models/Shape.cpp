//
// Created by phoenix on 3/16/18.
//

#include "Shape.h"
#include <iostream>
#include <cmath>

using namespace std;

Shape::Shape(int x, int y){
    setPosition(x, y);
    angle = 0;
}

int Shape::getX() {
    return x;
}

int Shape::getY() {
    return y;
}

double Shape::getAngle() {
    return angle;
}

void Shape::setX(int x_in) {
    x = x_in;
}

void Shape::setY(int y_in) {
    y = y_in;
}

void Shape::setPosition(int x, int y) {
    setX(x);
    setY(y);
}

void Shape::moveTo(int dx, int dy) {
    setPosition(getX() + dx, getY() + dy);
}

double Shape::getArea() {

}

double Shape::getPerimeter() {

}

void Shape::rotate(double angle) {
    int x_ = x;
    int y_ = y;
    int angle_ = angle;
    angle += angle_;
    x = x_*cos(angle) - y_*sin(angle);
    y = x_*sin(angle) - y_*cos(angle);
}

void Shape::draw() {

}