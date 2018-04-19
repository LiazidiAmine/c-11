//
// Created by phoenix on 3/16/18.
//

#ifndef CPP_IMAGES_TRIANGLE_H
#define CPP_IMAGES_TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape{
    public:
        Triangle(int base, int height, int x, int y);
        int getBase();
        int getHeight();
        void setHeight(int heigh_in);
        void setBase(int base_in);
        double getArea();
        void draw();



    private:
        int base, height;
};


#endif //CPP_IMAGES_TRIANGLE_H
