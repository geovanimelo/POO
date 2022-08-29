#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>


int main()
{

int N=0;
int aux=0;

printf("Digite um numero: ");
scanf("%d", &N);
int vec[N];

do{


printf("Digite uma Sequencia numerica: ");
scanf("%d", &vec[aux]);
aux++;

}while(aux!=N);

int i=0;
for(i=0;i<N;i++)
{
    int aux2 = vec[N-1-i];

    vec[N-1-i] = vec[i];
    vec[i] = aux2;

}

printf("Sequencia invertida: \n");

int j=0;
for(j=0;j<N;j++)
{

printf("%d", vec[j]);

}
printf("\n\n");

system("Pause");
return 0;
}
