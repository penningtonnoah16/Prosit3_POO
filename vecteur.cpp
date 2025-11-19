#include "vecteur.h"


namespace formes {
    Vecteur::Vecteur(double nrm, double agl) : norme(nrm), angle(agl){};
    double Vecteur::get_angle(){
        return angle;
    }
    int Vecteur::get_norme(){
        return norme;
    }
    void Vecteur::set_angle(int agl){
        angle = agl;
    }
    void Vecteur::set_norme(int nrm){
        norme = nrm;
    }
}