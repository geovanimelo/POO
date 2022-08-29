#include "Aluno.h"
#include <iostream>>

float Aluno::calcularMedia()
{
 float media;
 media = (np1 + np2)/2;

 return media;
}

void Aluno::verStatus()
{
media = calcularMedia();
 if(media>= 8 && freq >= 75)
 {

   cout << "Aprovado!" << endl;
 }else if(media < 8 && media >= 4 && freq >=75)
 {
    cout << "Final!" << endl;

 }
 else
 {
     cout << "Reprovado!" << endl;

 }

}


