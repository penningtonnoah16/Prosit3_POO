#pragma once
#include "Vecteur.h"
#include <cstdio>
namespace Point{

class Point {
    public:
        Point();
        Point(double, double);
        double get_x() const;
        double get_y() const; 
        void set_x(double);
        void set_y(double);
        void Point_print() const;
        Point Point_add(Vecteur);
        Vecteur Point_sub(Point);
    private:
        double x;
        double y;
};

}