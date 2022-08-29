#ifndef RELOGIO_H
#define RELOGIO_H

using namespace std;

class Relogio
{
    public:
        Relogio();
        Relogio(int hora);
        Relogio(int hora, int minutos);
        Relogio(int hora, int minutos, int segundos);
        void addHora();
        void addMin();
        void addSec();

    private:
        int hora;
        int mi;
        int sec;
};

#endif // RELOGIO_H
