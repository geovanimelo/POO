#include "Conta.h"

Conta::Conta(float valor){
    if(valor > 0){
        saldo = valor;
    }else{
        saldo = 0;
    }
    cout <<"Criando um nova conta"<<endl;
}

void Conta::depositar(float valor){
    if(valor < 0){
        cout <<"Valor invalido"<<endl;
    }else{
        saldo = saldo + valor;
    }
}

void Conta::sacar(float valor){
    if(valor < 0){
        cout <<"Valor invalido"<<endl;
    }else if(valor > saldo){
        cout <<"Saldo insuficiente"<<endl;
    }else{
        saldo = saldo - valor;
    }
}
float Conta::getSaldo(){
    return saldo;
}
