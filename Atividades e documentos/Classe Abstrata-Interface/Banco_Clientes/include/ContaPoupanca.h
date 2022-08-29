#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "ContaBancaria.h"
#include "Imprimivel.h"
#include <iostream>

using namespace std;
class ContaPoupanca: public ContaBancaria, public Imprimivel
{
    public:
        ContaPoupanca();
        void sacar(float valor);
        void depositar(float valor);
        void mostrarDados();
    protected:
    private:
        float limite;
};

#endif // CONTAPOUPANCA_H
