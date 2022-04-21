#include <stdio.h>
#include <conio.h>

int main(void) {

    /*
    Site: http://programjm.blogspot.com.br/
    Author: João Matheus Santos Assis.
    Creation date: 03/06/2012.
    Last updated: 16/06/2016.
    Description: Recebe valores do usuário para o preenchimento do vetor e
        imprime o maior e o menor elemento (número) deste.
    */


    int A[5]; // Declarando o vetor com 5 elementos inteiros.
    int maior, menor;

    printf("\n\t\tMaior e menor valor de um vetor de inteiros.\n\n");

    // Recebendo os valores do vetor.
    for (int i = 0; i < 5; ++i) {
        printf(" A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    /*
    As variáveis, maior e menor, recebem inicialmente o valor
    do primeiro elemento do vetor, ou seja, A[0].
    */
    maior = A[0];
    menor = A[0];


    for (int i = 0; i < 5; ++i) {
        if (A[i] > maior) maior = A[i];
        if (A[i] < menor) menor = A[i];
    }

    printf("\n\n Maior: %d\n", maior);
    printf(" Menor: %d", menor);

    getch();
    return 0;
}

