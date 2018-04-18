//
// Created by phoenix on 3/17/18.
//

#ifndef CPP_IMAGES_RIGHT_H
#define CPP_IMAGES_RIGHT_H


#include "Point.h"

class Right {

    public:
        Right();
        ~Right();
        void init(Point &a_,Point &b_);
        void move(Point &a_,Point &b_);
        void info() const;

    private:
        Point a,b;
};


#endif //CPP_IMAGES_RIGHT_H
