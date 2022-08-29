#ifndef RETANGULO_H
#define RETANGULO_H
#include "Forma.h"

class Retangulo: public Forma
{
    public:
        Retangulo(int base, int altura);
    protected:
        int base;
        int altura;
    private:

};

#endif // RETANGULO_H
