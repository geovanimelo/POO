#ifndef GALINHA_H
#define GALINHA_H
#include <iostream>
#include "Animal.h"

using namespace std;

class Galinha: public Animal
{
    public:
        Galinha();
        void emitirSom();
    protected:
    private:
};

#endif // GALINHA_H
