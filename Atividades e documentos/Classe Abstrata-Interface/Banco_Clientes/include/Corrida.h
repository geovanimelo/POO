#ifndef CORRIDA_H
#define CORRIDA_H


class Corrida
{
    public:
        Corrida();
        virtual ~Corrida();
        void adicionar(Carro c);
        int buscar(string placa);
        void remover(string placa);
    protected:
    private:
        vector<Carro*> carros;
};

#endif // CORRIDA_H
