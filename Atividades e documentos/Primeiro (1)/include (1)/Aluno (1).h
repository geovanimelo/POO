#ifndef ALUNO_H
#define ALUNO_H
#include<iostream>

using namespace std;

class Aluno
{
private:
       float np1;
       float np2;
       int freq;

    public:
       string nome;

       float calcularMedia();
       void verStatus();
       void setFreq();
       void setNp1(float np1);
       void setNp2(float np2);
       void getNp1();
       void getNp2();
       void getFreq();
       void Exibir();
};

#endif // ALUNO_H
