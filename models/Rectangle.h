//
// Created by phoenix on 3/17/18.
//

#ifndef CPP_IMAGES_RECTANGLE_H
#define CPP_IMAGES_RECTANGLE_H


#include "Shape.h"

class Rectangle : public Shape{
    public:
        Rectangle(int width, int height, int x, int y);
        int getWidth();
        void setWidth(int width);
        int getHeight();
        void setHeight(int height);
        void draw();

    private:
        int width, height;
};


#endif //CPP_IMAGES_RECTANGLE_H
