#include "Carro.h"

Carro::Carro()
{
    numPortas = 2;
    cor = "branco";
}
Carro::Carro(int numPortas, string cor){
        if(numPortas > 0){
            this->numPortas = numPortas;
        }else{
            this->numPortas = 0;
        }
        this->cor = cor;
}
void Carro::exibir(){
    cout <<"Numero de portas: "<< numPortas <<endl;
    cout <<"Cor: "<<cor<<endl;
}
