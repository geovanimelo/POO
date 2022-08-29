#include <stdio.h>
#include <stdlib.h>
#include <conio.h.>
#include <string.h>

struct Pessoa
{
char nome[30];
char endereco[100];
char telefone[9];
int idade;
};


int main()
{

struct Pessoa p[5];
int i,j;
for(i=0;i<=4;i++)
{

    printf("Digite o Nome: \n");
    gets(p[i].nome);

    printf("Digite o Endereco: \n");
    gets(p[i].endereco);

    printf("Digite o Telefone: \n");
    gets(p[i].telefone);

    printf("Digite a Idade: \n");
    scanf("%d", &p[i].idade);
    fflush(stdin);

}

//Ordenar
struct Pessoa aux[5];
for(j=0;j<=5;i++)
{
for(i=0;i<=4;i++){
        if(p[i].idade > p[i+1].idade)
        {

            aux[i] = p[i];
            p[i]= p[i+1];
            p[i+1] = aux;
        }
printf("Pessoa %d => Nome: &s\n", i, p.nome[i]);
printf("Pessoa %d => Endereco: &s\n", i, p.endereco[i]);
printf("Pessoa %d => Telefone: &s\n", i, p.telefone[i]);
printf("Pessoa %d => Idade: &s\n\n", i, p.idade[i]);

 return 0;
 system("Pause");

}
}


