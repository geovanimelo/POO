#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "Pessoa.h"

class Funcionario: public Pessoa
{
    public:
        Funcionario();

    protected:
        float salario;
    private:
};

#endif // FUNCIONARIO_H
