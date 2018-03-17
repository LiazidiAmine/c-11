//
// Created by phoenix on 3/16/18.
//

#include "Triangle.h"
#include "Shape.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;


Triangle::Triangle(float Base, float Height){
    base = Base;
    height = Height;
}

float Triangle::get_area(){
    return (0.5*base*height);
}