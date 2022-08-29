#include "Usuario.h"

Usuario::Usuario(string nome, int id)
{
    this->nome = nome;
    this->id = id;
}


string Usuario::getNome(){
    return nome;
}

int Usuario::getId(){
    return id;
}

void Usuario::setNome(string nome){
    this->nome = nome;
}

void Usuario::setId(int id){
    if(id > 0){
        this->id = id;
    }else{
        cout <<"Id invalida"<<endl;
    }
}
