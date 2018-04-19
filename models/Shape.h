//
// Created by phoenix on 3/16/18.
//

#ifndef CPP_IMAGES_SHAPE_H
#define CPP_IMAGES_SHAPE_H


class Shape {
    public:
        Shape(int x, int y);
        int getX();
        int getY();
        void setX(int x);
        void setY(int y);
        void setPosition(int x, int y);
        void moveTo(int dx, int dy);
        virtual double getArea();
        virtual double getPerimeter();
        virtual void draw();

    private:
        int x, y;
};


#endif //CPP_IMAGES_SHAPE_H
