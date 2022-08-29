#ifndef TV_H
#define TV_H


class Tv
{
    public:
        Tv();
        Tv(int canal, int volume);
        void ligar();
        void ligar(int canal);
    private:
        int canal;
        int volume;
        string usuario;
        bool on;
};

#endif // TV_H
