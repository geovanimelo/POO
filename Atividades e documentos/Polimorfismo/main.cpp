#include <iostream>
#include "Mae.h"
#include "Filha.h"

using namespace std;

/**
 - Polimorfismo
*/
int main()
{
    Mae *mae;
    Filha filha;

    mae = &filha;
    mae->metodo();

    return 0;
}

