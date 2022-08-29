#include "Aluno.h"

Aluno::Aluno()
{
    //ctor
}

int Aluno::getMat(){
    return mat;
}

string Aluno::getNome(){
    return nome;
}

void Aluno::setMat(int mat){
    this->mat = mat;
}

void Aluno::setNome(string nome){
    this->nome = nome;
}

void Aluno::mostrarDados(){
    cout <<"Matricula: "<< mat<< endl;
    cout <<"Nome: "<< nome<< endl;
}
