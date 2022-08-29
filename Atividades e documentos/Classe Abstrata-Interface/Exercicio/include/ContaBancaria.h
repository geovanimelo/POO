#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include<iostream>

using namespace std;

class ContaBancaria
{
    public:
        ContaBancaria(int num, double saldo);

    protected:
        int num;
        double saldo;
        void sacar(float valor) = 0;
        void depositar(float valor) = 0;

    private:
};

#endif // CONTABANCARIA_H
