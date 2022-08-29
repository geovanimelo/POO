#include "Viralata.h"

Viralata::Viralata(float peso,string cor,string raca,int qtdPulgas):Cachorro(peso,cor,raca,true)
{
    this->qtdPulgas = qtdPulgas;
    cout <<"Criando um viralata"<<endl;
}

void Viralata::comer(){
    cout <<"Comendo como um Viralata"<<endl;
}
