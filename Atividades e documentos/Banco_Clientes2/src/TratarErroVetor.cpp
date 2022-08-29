#include "TratarErroVetor.h"

TratarErroVetor::TratarErroVetor(int posicao)
{
    this->posicao = posicao;
}

void TratarErroVetor::msg(){
    cout <<"Impossivel acessar a posicao: "<< posicao<<endl;
}

