#ifndef ESTACAO_H
#define ESTACAO_H


class Estacao
{
    public:
        Estacao(string endereco);

    private:
        string endereco;
        Carro carros[4];
};

#endif // ESTACAO_H
