#ifndef USUARIO_H
#define USUARIO_H


class Usuario
{
    public:
        Usuario(string nome, int id);
        string getNome();
        int getId();
        void setNome(string nome);
        void setId(int id);


    private:
        string nome;
        int id;
};

#endif // USUARIO_H
