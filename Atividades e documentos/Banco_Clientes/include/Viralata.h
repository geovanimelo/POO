#ifndef VIRALATA_H
#define VIRALATA_H
#include "Cachorro.h"
#include <iostream>

using namespace std;

class Viralata: public Cachorro
{
    public:
        Viralata(float peso,string cor,string raca,int qtdPulgas);

        void comer();
    protected:
    private:
        int qtdPulgas;
};

#endif // VIRALATA_H
