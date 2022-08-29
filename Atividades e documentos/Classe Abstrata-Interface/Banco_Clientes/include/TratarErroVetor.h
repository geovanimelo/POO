#ifndef TRATARERROVETOR_H
#define TRATARERROVETOR_H
#include <iostream>

using namespace std;

class TratarErroVetor
{
    public:
        TratarErroVetor(int posicao);
        void msg();

    protected:
    private:
        int posicao;
};

#endif // TRATARERROVETOR_H
