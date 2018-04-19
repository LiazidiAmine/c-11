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
        double getAngle();
        void setX(int x);
        void setY(int y);
        void setPosition(int x, int y);
        void moveTo(int dx, int dy);
        void rotate(double angle_in);
        virtual double getArea();
        virtual void draw();

    private:
        int x, y, angle;
};


#endif //CPP_IMAGES_SHAPE_H
