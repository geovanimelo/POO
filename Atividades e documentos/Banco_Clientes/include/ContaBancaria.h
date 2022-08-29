#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H


class ContaBancaria
{
    public:
        ContaBancaria();
        virtual void sacar(float valor) = 0;
        virtual void depositar(float valor) = 0;
    protected:
        float saldo;
        int num;
    private:
};

#endif // CONTABANCARIA_H
