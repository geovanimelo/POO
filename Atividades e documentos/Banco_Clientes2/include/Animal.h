#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal
{
    public:
        Animal();
        virtual void emitirSom();
        virtual void viver() = 0;
    protected:
    private:
};

#endif // ANIMAL_H
