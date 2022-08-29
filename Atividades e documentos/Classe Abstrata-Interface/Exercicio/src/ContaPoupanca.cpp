#include "ContaPoupanca.h"

ContaPoupanca::ContaPoupanca(float limite)
{
    this->limite = limite;
}
void ContaPoupanca::sacar(float valor)
{
    if(valor>0 && (valor + limite)<=saldo)
    {
    saldo = saldo - valor - limite;
    }else{cout<<"Erro"<<endl;}
}

void ContaPoupanca::depositar(float valor)
{
    if(valor>0 && (valor + limite)<=saldo)
    {
    saldo = saldo - valor - limite;
    }else{cout<<"Erro"<<endl;}
}
