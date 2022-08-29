#ifndef CARRO_H
#define CARRO_H
#include <iostream>

using namespace std;

class Carro
{
    public:
        Carro();
        Carro(int numPortas,string cor);
        void exibir();
    private:
        int numPortas;
        string cor;
};

#endif // CARRO_H
