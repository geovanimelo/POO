#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "ContaBancaria.h"
#include "Imprimivel.h"
#include <iostream>

using namespace std;
class ContaCorrente: public ContaBancaria, public Imprimivel
{
    public:
        ContaCorrente();
        void sacar(float valor);
        void depositar(float valor);
        void mostrarDados();
    protected:
    private:
        float taxaOp;
};

#endif // CONTACORRENTE_H
