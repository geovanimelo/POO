#include "Retangulo.h"

float Retangulo::calcularArea()
{
    float Area;
    Area = base * altura;
    return Area;
}

float Retangulo::calcularPerimetro()
{
    float Per;

    Per = 2 * base + 2 * altura;
   return Per;

}
