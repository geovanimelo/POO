#ifndef CACHORRO_H
#define CACHORRO_H
#include <iostream>
#include "Animal.h"

using namespace std;

class Cachorro: public Animal
{
    public:
        Cachorro();
        void emitirSom();
        void viver();
    protected:
    private:
};

#endif // CACHORRO_H
