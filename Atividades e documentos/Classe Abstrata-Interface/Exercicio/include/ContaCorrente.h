#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include<ContaBancaria.h>
#include<iostream>

using namespace std;

class ContaCorrente : public ContaBancaria
{
    public:
        ContaCorrente(float taxaDeOperacao);

    protected:
    private:
        void sacar(float valor);
        void depositar(float valor);
        float taxaDeOperacao;
};

#endif // CONTACORRENTE_H
