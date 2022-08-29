#ifndef SEGURANCA_H
#define SEGURANCA_H
#include<Pessoa.h>
#include<Funcionario.h>

class Seguranca:: public Pessoa, public Funcionario
{
    public:
        Seguranca();


    protected:

float salario;
void Trabalhar();

    private:
};

#endif // SEGURANCA_H
