//
// Created by phoenix on 3/16/18.
//

#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

Shape::Shape(){
    area = 0.0;
    perimeter = 0.0;
}

float Shape::get_area(){
    return area;
}