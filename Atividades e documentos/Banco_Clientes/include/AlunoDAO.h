#ifndef ALUNODAO_H
#define ALUNODAO_H
#include <iostream>
#include <vector>
#include "Aluno.h"

using namespace std;

class AlunoDAO
{
    public:
        AlunoDAO();
        void adicionar(Aluno a);
        void exibir();
        Aluno* buscar(int mat);
        void remover(int mat);
    protected:
    private:
        vector <Aluno> alunos;
};

#endif // ALUNODAO_H
