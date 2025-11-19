#include "Triangle.h"
#include "Vector.h"
#include <iostream>
#include <cmath>

namespace formes{

Triangle::Triangle(){
    Vector V1;
    Vector V2;
    Point P1;
}

Triangle::Triangle(Vecteur V1, Vecteur V2, Point P1){
    this->V1 = V1;
    this->V2 = V2;
    this->P1 = P1;
}

Triangle::perimetre() override{
    Point P2 = P1;
    Point P3 = P1;
    P2.Point_add(V1);
    P3.Point_add(V2);
    return V1.get_norm() + V2.get_norm() + sqrt(std::carre(P2.get_x()+P3.get_x()) + std::carre(P2.get_y()+P3.get_y()));

Triangle::aire() override{
    Point P2 = P1;
    Point P3 = P1;
    P2.Point_add(V1);
    P3.Point_add(V2);
    Point moy_P2_P3 = Point((P2.get_x()+P3.get_x())/2, (P2.get_y()+P3.get_y())/2);
    return (sqrt(std::carre(P1.get_x()+moy_P2_P3.get_x()) + std::carre(P1.get_y()+moy_P2_P3.get_y()))*sqrt(std::carre(P2.get_x()+P3.get_y()) + std::carre(P2.get_y()+P3.get_y())))/2;

}
}
}