//
// Created by phoenix on 4/19/18.
//

#include "models/Shape.h"
#include "models/Rectangle.h"
#include "models/Circle.h"
#include "models/Triangle.h"

int main(void) {
    int const N_SHAPE = 10;
    Shape *array[N_SHAPE];
    array[0] = new Rectangle(5, 5, 0, 0);
    array[1] = new Circle(6,6,5);
    array[2] = new Triangle(5,5,3,3);
    // Todo: Right

    for (int i = 0; i < N_SHAPE; ++i) {
        array[i]->draw();
        array[i]->moveTo(5,5);
        array[i]->draw();
    }
}