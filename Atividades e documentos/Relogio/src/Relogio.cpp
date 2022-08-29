#include "Relogio.h"

using namespace std;

Relogio::Relogio()
{
    hora=0;
    mi=0;
    sec=0;
}
Relogio::Relogio(int hora)
{

  if(hora>=24 && hora!=0)
  {
  this->hora = 0;
  mi=0;
  sec=0;
  }else{ this->hora = hora; mi=0; sec=0; }
}

Relogio::Relogio(int hora, int minutos)
{
if(hora>=24 && hora!=0 && minutos>=60 && minutos!=00)
{
this->hora=0;
mi=0;
sec=0;
}else{this->hora =hora; mi=minutos; }
}


Relogio::Relogio(int hora, int minutos, int segundos)
{
if(hora>=24 && hora!=0 && minutos>=60 && minutos!=00 && segundos>=60 && segundos!=00 )
{
   this->hora = 0;
   mi=0;
   sec=0;
}else{this->hora=hora; mi=minutos; sec= segundos; }
}

void Relogio::addSec()
{
if(this->sec<59)
{
    sec+=1;
}else
{
    sec=0;
    addMin();

        mi=0;
        addHora();


}
}


void Relogio::addMin()
{
if(this->mi<59)
{ mi+=1; }
    else
    {
     mi=0;
    }
}

void Relogio::addHora()
{
if(hora<24)
{ hora+=1; }
    else
    {
    hora=0;
    }
}
