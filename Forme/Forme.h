#include <iosteam>
#pragma once

namespace Forme {
    class Forme
    {      
    public:
        Forme() = default;
        virtual double aire() = 0;
        virtual double perimetre () = 0;
        ~Forme() = default;
    };
      
}