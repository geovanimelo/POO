#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>

using namespace std;

class Aluno
{
    public:
        Aluno();
        int getMat();
        string getNome();
        void setMat(int mat);
        void setNome(string nome);
        void mostrarDados();
    protected:
    private:
        int mat;
        string nome;
};

#endif // ALUNO_H
