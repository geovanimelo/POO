#ifndef CONTA_H
#define CONTA_H
#include<iostream>

using namespace std;

class Conta
{
private:
   string nome;
   int agencia;
   int num;
   float saldo;

public:
   void depositar(float valor);
   void sacar(float valor);

   string getNome();
   void setNome(string nome);

   int getAgencia();
   void setAgencia(int agencia);

   int getNum();
   void setNum(int NumeroDaConta);

   float getSaldo();

   Conta();

};

#endif // CONTA_H
