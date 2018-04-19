//
// Created by phoenix on 3/16/18.
//

#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape(int x, int y){
    setPosition(x, y);
}

int Shape::getX() {
    return x;
}

int Shape::getY() {
    return y;
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

void Shape::draw() {

}