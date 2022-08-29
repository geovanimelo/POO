#include "Conta.h"
#include<iostream>

using namespace std;

Conta(string Nome, int Agencia, int NumeroDaConta, float Saldo)
{
nome= Nome;

}
void Conta::depositar(float valor)
{
    if(valor >0)
    {
    cout << "Digite o valor: " << valor;
    saldo+= valor;
    }
}

void Conta::sacar(float valor)
{
    if(valor >0 && valor<=saldo)
    {
    cout << "Digite o valor: " << valor;
    saldo-= valor;
    }
}

string Conta::getNome()
{
    return nome;
}

void Conta::setNome(string nome)
{
    this->nome = nome;
}

int Conta:: getAgencia()
{
    return agencia;
}

void Conta::setAgencia(int agencia)
{
   this->agencia = agencia;
}

int Conta::getNum()
{
    return num;
}

void Conta::setNum(int NumeroDaConta)
{
    num = NumeroDaConta;
}

float Conta::getSaldo()
{
    return saldo;
}
