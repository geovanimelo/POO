#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>

int main()
{
int N=0;
int aux=0;
//int vec[];
printf("Digite um número: ");
scanf("%d", &N);
int vec[N];

do{


printf("Digite uma Sequencia numerica: ");
scanf("%d", &vec[aux]);
aux++;

}while((aux+1)!=N);


printf("Sequencia invertida: \n");
int i=0;

for(i=aux;i>=0;i--)
{

printf(vec[i]);
}

return 0;
}
