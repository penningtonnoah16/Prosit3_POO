#include "rectangle.h"
#include "Vector.h"

namespace formes {

    rectangle::rectangle() : Poly_ferme(), vector2(Vecteur()), vector1(Vecteur()), Point1(Point()){}

    rectangle::rectangle(double ang1, double nor1, double ang2, double nor2, double x, double y) : Poly_ferme(), vector2(Vecteur(ang1, nor1)), vector1(Vecteur(ang2,nor2)), Point1(Point(x,y)){}

    rectangle::~rectangle(){}

    rectangle::aire(){
        return vector1.get_norme()*vector2.get_norme();
    }
    rectangle::perimetre(){
        return 2*vector1.get_norme() + 2*vector2.get_norme();
    }

}