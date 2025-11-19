#pragma once

namespace formes{

class Triangle : public Polygone_ferme(){
    public:
        Triangle();
        double aire() override;
        double perimetre() override;
    private:
        Vector Vector;
};
}