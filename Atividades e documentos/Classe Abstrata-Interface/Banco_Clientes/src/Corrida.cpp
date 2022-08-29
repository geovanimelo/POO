#include "Corrida.h"

Corrida::Corrida()
{
    //ctor
}

Corrida::~Corrida()
{
    //dtor
}
void adicionar(Carro* c){
    carros.push_back(c);
}
int buscar(string placa){
    for(i=0;i<carros.size();i++){
        if(carros.at(i)->getPlaca()==placa){
            return i;
        }
    }
    return -1;
}
void remover(string placa){
    int p = buscar(placa);
    if(p != -1){
        carros.erase(carros.begin()+p);
    }
}
