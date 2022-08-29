#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<conio.h>
int main()
{
    int x= 0;

printf("Digite um numero: ");
scanf("%d", &x);


if(x>= 1000 && x<=9999)
{

if((x/1000) == (x%10) && (x/100 - x/1000*10) == ((x%100 - x%10)/10))
{

printf("Verdadeiro!\n");

}else
{

    printf("Falso!\n);
}
}
printf("\n\n");
system("pause");
    return 0;
}
