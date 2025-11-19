#pragma once
#include "Vector.h"

namespace formes {

    class rectangle {
        private : 
            Vector vector2;

        public :
            rectangle();
            rectangle(double, double);
            ~rectangle();
            double aire();
            double perimetre();
    };
}