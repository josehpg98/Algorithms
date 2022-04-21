#include <stdio.h>

main() {

int i, n;

printf("Informe um numero: ");

scanf("%d", &n);

long fat = 1;

for (i=1; i<=n; i++) {

fat = fat * i;

}

printf("\n O fatorial de %d eh igual a %ld.", n, fat);

}
