//
// Created by phoenix on 3/17/18.
//

#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"
#include <iostream>

using namespace std;


Rectangle::Rectangle(float Width, float Length){
    width = Width;
    length = Length;
}

float Rectangle::get_area(){
    return width*length;
}

float Rectangle::get_perimeter(){
    return 2*(length+width);
}