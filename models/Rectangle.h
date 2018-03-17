//
// Created by phoenix on 3/17/18.
//

#ifndef CPP_IMAGES_RECTANGLE_H
#define CPP_IMAGES_RECTANGLE_H


#include "Shape.h"

class Rectangle : public Shape{
    public:
        Rectangle(float Width, float Length);
        float get_area();
        float get_perimeter();

    private:
        float width, length;
};


#endif //CPP_IMAGES_RECTANGLE_H
