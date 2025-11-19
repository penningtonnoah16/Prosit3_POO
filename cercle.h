#pragma once
#include <iostream>

using namespace std;

namespace formes {
    class Cercle{
        public :
            double aire() override;
            double perimetre() override;
            Cercle();
            double getRayon();
            double getCentre();
        private: 
            double rayon;
            point centre;
    }
}