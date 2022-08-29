#include "Estoque.h"
#include<iostream>

using namespace std;

Estoque::Estoque()
{
  this->cod=0;
  this->qnt=0;
  this->precUni=0;
}

void Estoque::registrarProdutos(int cod, int qnt, float PrecoUni)
{
    do
    {
        cout<<"=>Cod:"<<endl;
        cin>>cod;
        cout<<"=>Qnt:"<<endl;
        cin>>qnt;
        cout<<"=>PrecoUni:"<<endl;
        cin>>PrecoUni;

        if(cod==0)
        {
         break;
        }else
        {

            this->cod = cod;
            this->qnt = qnt;
            this->precUni = PrecoUni;
        }
    }while(cod>=0);
}
