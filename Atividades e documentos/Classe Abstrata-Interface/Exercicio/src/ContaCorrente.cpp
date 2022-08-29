#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(float taxaDeOperacao)
{
    this->taxaDeOperacao = taxaDeOperacao;
}
void ContaCorrente::sacar(float valor)
{
    if(valor>0 && (valor + taxaDeOperacao)<=saldo)
    {

    saldo = saldo - valor - taxaDeOperacao;
    }else{cout<<"Erro"<<endl;}
}

void ContaCorrente::depositar(float valor)
{
    if(valor>0 && (valor + taxaDeOperacao)<=saldo)
    {

    saldo = saldo - valor - taxaDeOperacao;
    }else{cout<<"Erro"<<endl;}
}
