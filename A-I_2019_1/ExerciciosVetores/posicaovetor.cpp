#include <stdio.h>
#include <conio.h>
#define tam 10

main(){
       int vet[tam],i,po=0,maior;

         for(i=0;i<tam;i++){
         printf("Entre com os valores do vetor:");
         scanf("%d",&vet[i]);
                             }
          maior = vet[0];
          for(i=0; i<tam; i++){
          if (vet[i] > maior){
          maior = vet[i];
          po=i;
                                }
                                }
         printf("O maior elemento do vetor e %d e sua posicao atual %d",maior,po);

                        getch();
                        }
