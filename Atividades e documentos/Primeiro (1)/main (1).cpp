#include <iostream>
#include "Retangulo.h"
#include "Aluno.h"

using namespace std;

int main()
{

    float x;
    float y = 3.14;

    cout << "Digite um numero: " << endl;
    cin >> x;

    cout << "Valor de x: " << y << endl;
    cout << "Voce digitou: " << x << endl;

    Retangulo ret1;
    ret1.base = 10;
    ret1.altura = 20;
cout << "A Area do Ret1: " << ret1.calcularArea() << endl;
cout << "O Perimetro do Ret1: " << ret1.calcularPerimetro() << endl;


    Retangulo ret2;
    ret2.base = 13;
    ret2.altura = 5;
cout << "A Area do Ret2: " << ret2.calcularArea() << endl;
cout << "O Perimetro do Ret2: " << ret2.calcularPerimetro() << endl;


Aluno a1;
a1.setNp1(10);
a1.setNp2(7);
a1.setFreq(100);
a1.Exibir();
    return 0;
}
