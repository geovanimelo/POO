#include "Matematica.h"
#include <iostream>

using namespace std;

Matematica::Matematica()
{
    //ctor
}


int Matematica::somar(int a,int b){
    cout <<"Chamando o primeiro"<<endl;
    return a+b;
}

int Matematica::somar(int a,int b,int c){
    cout <<"Chamando o segundo"<<endl;
    return a+b+c;
}
