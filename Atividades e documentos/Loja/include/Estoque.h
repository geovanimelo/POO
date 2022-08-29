#ifndef ESTOQUE_H
#define ESTOQUE_H
#include<iostream>

using namespace std;

class Estoque
{
    public:
        Estoque();
        void registrarProdutos(int cod, int qnt, float PrecoUni);
        string lerProdutos();

    private:
        int cod;
        int qnt;
        float precUni;
};

#endif // ESTOQUE_H
