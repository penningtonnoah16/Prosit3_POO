#include "polyferme.h"
#include <iostream>
#include "vecteur.h"
#include "point.h"

using namespace std;

namespace formes {

    Polyferme::Polyferme(double x, double y, double norme, double angle) : point1(Point::point(x, y)), vecteur1(Vecteur::vecteur(norme, angle)){
    };
}