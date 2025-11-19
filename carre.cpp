#include "carre.h"
#include "vecteur.h"

namespace formes {
    Carre::Carre(double norme, double angle, double x, double y) : angle_vector2(0.0), Vecteur1(Vecteur(norme, angle)), point1(point(x, y)){};
    double Carre::aire(){
        return  (2*Vecteur1.get_norme())*(2*Vecteur1.get_norme());
    }
    double Carre::perimetre(){
        return 4*Vecteur1.get_norme();
    }
}