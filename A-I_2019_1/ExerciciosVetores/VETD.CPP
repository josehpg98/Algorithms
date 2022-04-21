#include <stdlib.h>
#include <stdio.h>
int main()
{
int x[10];
int i, j, temp;
/* Leitura do Vetor */
for (i = 0; i<10; i++)

{
printf("Digite um numero:");
scanf("%d",&x[i]);
}
//ordenando o vetor

for (i=0;i<10; i++)
for(j=i+1;j<10;j++)
{
if (x[i]<x[j])
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}


/* Impressão do Vetor Ordenado */
printf("Vetor em ordem crescente: \n");
for(i=0;i<10;i++)
printf(" %d",x[i]);

system("pause");
return 0;
}
