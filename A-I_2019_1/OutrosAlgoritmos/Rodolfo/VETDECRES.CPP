#include <iostream>
#define N 10
using namespace std;
int main () {
int x[4], i, trocou=0, aux;
cout << "Informe os elementos do vetor: " << endl;
for (i=0; i<4; i++)
cin >> x[i];
while (trocou == 0) {
trocou = 1;
for (i=0; i<4-1; i++) {
if (x[i] > x[i+1]) {
trocou = 0;
aux = x[i];
x[i] = x[i+1];
x[i+1] = aux;
}
}
}
cout << "Vetor ordenado:" << endl;
for (i=0; i<4; i++)
cout << "\t" << x[i];
return 0;
}
