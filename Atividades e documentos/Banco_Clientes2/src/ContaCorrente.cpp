#include "ContaCorrente.h"

ContaCorrente::ContaCorrente()
{

}

void ContaCorrente::sacar(float valor){
       if(valor >0 && valor + taxaOp <= saldo ){
            saldo = saldo - valor - taxaOp;
       }else{
            cout <<"Erro"<<endl;
       }
}

void ContaCorrente::depositar(float valor){
        if(valor >0 && valor >= taxaOp){
            saldo = saldo + valor - taxaOp;
       }else{
            cout <<"Erro"<<endl;
       }
}

void ContaCorrente::mostrarDados(){
    cout <<"Num: "<<num<<endl;
    cout <<"Saldo: "<<saldo<<endl;
    cout <<"Taxa de Operacao: "<<taxaOp<<endl;
}
