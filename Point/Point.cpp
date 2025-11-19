#include "Point.h"
#include <iostream>
#include <cstdio>

namespace Point{

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(double a, double b){
    x = a;
    y = b;
}

double Point::get_x() const {
    return x;
}

double Point::get_y() const {
    return y;
}

void Point::set_x(double a){
    x = a;
}

void Point::set_y(double b){
    y = b;
}

void Point::Point_print() const {
    printf("{%f, %f}/n", x, y);
}

Point Point::Point_add(Vecteur V){
    Point result;
    result.x = x + V.get_x();
    result.y = y + V.get_y();
    return result;
}

Vecteur Point::Point_sub(Point P){
    Vecteur result(this->x - P.x, this->y = P.y);
    return result;
}
}