//
// Created by phoenix on 4/19/18.
//

#ifndef CPP_IMAGES_CIRCLE_H
#define CPP_IMAGES_CIRCLE_H

#include "Shape.h"

class Circle: public Shape {
public:
    Circle(int x, int y, int radius);
    int getRadius();
    void setRadius(int radius_in);
    double getArea();
    void draw();

private:
    int radius;

};
#endif //CPP_IMAGES_CIRCLE_H
