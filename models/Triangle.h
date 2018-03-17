//
// Created by phoenix on 3/16/18.
//

#ifndef CPP_IMAGES_TRIANGLE_H
#define CPP_IMAGES_TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape{
    public:
        Triangle(float Base, float Height);
        float get_area();


    private:
        float base, height;
};


#endif //CPP_IMAGES_TRIANGLE_H
