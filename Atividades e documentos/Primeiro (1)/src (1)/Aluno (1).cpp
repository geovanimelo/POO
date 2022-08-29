#include "Aluno.h"
#include <iostream>

using namespace std;

float Aluno::calcularMedia()
{
 float media;
 media = (np1 + np2)/2;

 return media;
}

void Aluno::verStatus()
{
float media = calcularMedia();
 if(media>= 8 && freq >= 75)
 {

   cout << "Aprovado!" << endl;
 }else if(media < 8 && media >= 4 && freq >=75)
 {
    cout << "Final!" << endl;
 }else
 {
     cout << "Reprovado!" << endl;
 }

}

void Aluno::setNp1(float np1)
{
    if(np1>= 0 && np1<=10)
    {
    this->np1= np1;
    }else
    {
        cout<<"Nota invalida"<< endl;
    }
}
void Aluno::setNp2(float np2)
{
    if(np1>= 0 && np1<=10)
    {
    this->np2= np2;
    }else
    {
        cout<<"Nota invalida"<< endl;
    }
}
void Aluno::setFreq(float freq)
{
    if(freq>= 0 && freq<=100)
    {
    this->freq= freq;
    }else
    {
        cout<<"Freq. invalida"<< endl;
    }
}

void Aluno::Exibir()
{
 cout<< "Nome: "<< nome << endl;
 cout<< "Np1: "<< np1 << endl;
 cout<< "Np2: "<< np2 << endl;
 cout<< "Freq.: "<< freq << endl;

}

void Aluno::getNp1()
{
return np1;
}
void Aluno::getNp1()
{
    return np2;
}
void Aluno::getFreq()
{
    return freq;
}


