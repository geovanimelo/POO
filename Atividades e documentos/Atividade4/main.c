#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
    int M, N, i,j;

    printf("Digite o valor M: ");
    scanf("%d", &M);

    printf("\n\nDigite o valor N: ");
    scanf("%d", &N);

     int Mat[M][N];

printf("\n");

for(i=0;i<M;i++)
{
    for(j=0;j<N;j++)
    {

    scanf("%d", &Mat[i][j]);
    }
}
printf("\n\nMatriz: \n");

int a,b;

for(a=0; a<M; a++)
{
    for(b=0; b<N; b++)
    {

        printf("%d", Mat[a][b]);
        printf(" ");
    }
    printf("\n");
}


  int aux = Mat[2][0];
  Mat[2][0] = Mat[0][0];
  Mat[0][0] = aux;

  int aux2 = Mat[2][1];
  Mat[2][1] = Mat[0][1];
  Mat[0][1] = aux2;

 int aux3 = Mat[2][2];
  Mat[2][2] = Mat[0][2];
  Mat[0][2] = aux3;

printf("\n\nL1<>L3: \n");

for(a=0; a<M; a++)
{
    for(b=0; b<N; b++)
    {

        printf("%d", Mat[a][b]);
        printf(" ");
    }
    printf("\n");
}
    return 0;
}


