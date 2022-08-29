#include "classeD.h"

classeD::classeD()
{
    //ctor
}

void classeD::metodoPoli(classeA* obj){  // aqui aplicou polimorfismo, pois tem ponteiro
    cout <<"Chamando de forma polimorfica"<<endl;
    obj->metodo();
}
