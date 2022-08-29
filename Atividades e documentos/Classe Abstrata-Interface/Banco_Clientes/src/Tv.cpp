#include "Tv.h"

Tv::Tv()
{
    canal = 5;
    volume = 10;
    usuario = "anonimo"
    on = false;
}

Tv::Tv(int canal,int volume){
    this->canal = canal;
    this->volume = volume;
    usuario = "anonimo"
    on = false;
}

Tv::~Tv()
{
    //dtor
}
