//
// Created by phoenix on 3/17/18.
//

#include <cassert>
#include <iostream>
#include "Right.h"

using namespace std;

Right::Right() : a(), b() {}

Right::~Right() {}
void Right::init(Point &a_, Point &b_)
{
    assert((&a_ != NULL) && (&b_ != NULL));
    a.init(a_.get_x(), a_.get_y());
    b.init(b_.get_x(), b_.get_y());
}
void Right::move(Point &a_, Point &b_)
{
    // Todo: assert limit moving
    assert((&a_ != NULL) && (&b_ != NULL));
    a.move(a_.get_x(), a_.get_y());
    b.move(b_.get_x(), b_.get_y());
}
void Right::info() const
{
    cout<<"Right [a,b] : ";
    a.info();
    b.info();
}