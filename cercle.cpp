#include "cercle.h"
#include "Point.h"
#include <iostream>

using namespace std;

namespace formes{

    Cercle::Cercle(){
        Point centre;
        double rayon;
    }

    double Cercle::getRayon(){
        return rayon;
    }

    double Cercle::getCentre(){
        return centre;
    }

    double Cercle::aire() override {
        double pi = 2*acos(0.0);
        return pi * (rayon * rayon);
    }

    double Cercle::perimetre() override {
        double pi = 2*acos(0.0);
        return 2*pi*rayon;
    }
}