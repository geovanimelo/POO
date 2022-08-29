#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include<ContaBancaria.h>
#include<iostream>

using namespace std;

class ContaPoupanca : ContaBancaria
{
    public:
        ContaPoupanca(float limite);

    protected:
    private:
        float limite;
        void sacar(float valor);
        void depositar(float valor);
};

#endif // CONTAPOUPANCA_H
