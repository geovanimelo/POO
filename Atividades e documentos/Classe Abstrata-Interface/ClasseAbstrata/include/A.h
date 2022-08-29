#ifndef A_H
#define A_H
#include<iostream>

using namespace std;

/** Classe abstrata */
class A
{
    public:
        A();
        void m1();
        virtual void m2() = 0; /** Método virtual puro, Método Abstrato. */

       /** virtual void m3(); -> Método virtual não puro. */
       /** Interface -> uma Classe que contém apenas métodos abstratos. */

    protected:
    private:
};

#endif // A_H
