#include "Veterinario.h"

Veterinario::Veterinario()
{
    //ctor
}

void Veterinario::consultar(Animal *animal){
    cout <<"Veterinario consultando..."<<endl;
    cout <<"Diga ahhh..."<<endl;
    animal->emitirSom();
}
