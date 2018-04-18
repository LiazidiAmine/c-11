//
// Created by phoenix on 3/17/18.
//

#include "Point.h"
#include <iostream>
#include <cassert>

using namespace std;

Point::Point() : x(0.0), y(0.0) {}
Point::~Point() {}

void Point::init(float x_, float y_)
{
    assert((x_ >= 0) && (y_ >= 0));
    x =+ x_;
    y =+ y_;
}
void Point::move(float x_, float y_)
{
    // Todo: assert limit moving
    x =+ x_;
    y =+ y_;
}
void Point::info() const
{
    cout<<"Point [x,y] : ["<<x<<","<<y<<"]";
}
float Point::get_x() const
{
    return x;
}
float Point::get_y() const
{
    return y;
}
bool operator==(Point const& point){
    if (point.get_x() == this->get_x() && point.get_y() == this->get_y())
    {
        return true;
    }
    return false;
}