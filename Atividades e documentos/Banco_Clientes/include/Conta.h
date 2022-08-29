#ifndef CONTA_H
#define CONTA_H
#include <iostream>

using namespace std;

class Conta
{
    public:
        Conta(float valor);
        void depositar(float valor);
        void sacar(float valor);
        float getSaldo();
    private:
        float saldo;
};

#endif // CONTA_H
