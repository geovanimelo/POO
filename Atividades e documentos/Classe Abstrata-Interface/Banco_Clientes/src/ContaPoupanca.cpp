#include "ContaPoupanca.h"

ContaPoupanca::ContaPoupanca()
{
    limite = 500;
}


void ContaPoupanca::sacar(float valor){
    if(valor > 0 && valor >= saldo + limite){
       saldo = saldo - valor;
    }else{
        cout <<"Erro"<<endl;
    }
}

void ContaPoupanca::depositar(float valor){
    if(valor > 0){
        saldo = saldo + valor;
    }else{
        cout <<"Erro"<<endl;
    }
}
void ContaPoupanca::mostrarDados(){
    cout <<"Num: "<<num<<endl;
    cout <<"Saldo: "<<saldo<<endl;
    cout <<"Limite: "<<limite<<endl;
}
