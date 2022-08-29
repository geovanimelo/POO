#ifndef A_H
#define A_H
#include <iostream>

using namespace std;
/** Classe abstrata */
class A
{
    public:
        A();
        void m1();
        virtual void m2() = 0; /** Método virtual puro*/
    protected:
    private:
};

#endif // A_H
