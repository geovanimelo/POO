#include <iostream>
#include "Animal.h"
#include "Cachorro.h"
#include "Gato.h"
#include "Galinha.h"
#include "Relatorio.h"
#include "ContaPoupanca.h"
#include "B.h"
using namespace std;

/**
 - Classe abstrata
 - Interface
*/
int main()
{
    ContaPoupanca c;
    c.depositar(1500);
    c.sacar(2000);
    Relatorio r;
    r.gerarRelatorio(&c);
    return 0;
}

