#include "polyferme.h"

namespace formes {
    class Carre : public poly_ferme {
        private :
            double angle_vector2;
        public :
            Carre(double ,double, double, double);
            double aire();
            double perimetre();
            ~Carre();
    };
}