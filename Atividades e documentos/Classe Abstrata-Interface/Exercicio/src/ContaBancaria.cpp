#include "ContaBancaria.h"

ContaBancaria::ContaBancaria(int num, float saldo)
{
    this->num = num;
    this->saldo = saldo;
}
void ContaBancaria::sacar(float valor)
{
    saldo-= valor;
}
void ContaBancaria::depositar(float valor)
{
    sacar();
}
