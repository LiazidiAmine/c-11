//
// Created by phoenix on 3/17/18.
//

#ifndef CPP_IMAGES_POINT_H
#define CPP_IMAGES_POINT_H


class Point {

    public:
        Point();
        ~Point();
        void init(float, float);
        void move(float, float);
        void info() const;
        float get_x() const;
        float get_y() const;
    private:
        float x,y;
};


#endif //CPP_IMAGES_POINT_H
