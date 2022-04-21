#include <iostream>
#include <clocale>
#include <ctime>
#include <cstdlib>

using namespace std;

void mostraVetor(int vetor[3]);
void mostraMatriz(int matriz[3][3]);
float calculaMedia(float n1, float n2);

main()
{
    setlocale(LC_ALL, "portuguese");
    int v[3] = {1, 2, 3};
    int m[3][3] = {
        1,0,0,
        0,1,0,
        0,0,1
    };

    mostraVetor(v);
    mostraVetor(v);
    mostraVetor(v);

    mostraMatriz(m);

    float media;
    int numero1 = 10;
    float numero2 = 20.5;

    media = calculaMedia((float) numero1, numero2);

    cout << "O média de " << numero1 << " e " << numero2 << " é: " << media << endl;

}

float calculaMedia(float n1, float n2){
    float resultado;

    resultado = (n1 + n2) / 2.0;

    return resultado;
}


void mostraVetor(int vetor[3]){
    int i;
    for(i=0; i<3; i++)
        cout << vetor[i] << " ";

    cout << endl;
}
void mostraMatriz(int matriz[3][3]){
    int i,j;

    cout << endl;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

