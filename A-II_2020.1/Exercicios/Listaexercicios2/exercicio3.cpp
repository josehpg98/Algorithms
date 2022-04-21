#include<iostream>
using namespace std;
void mediaritimetica(float n1,float n2,float n3);
void mediaponderada(float n1,float n2,float n3);
void mediaharmonica(float n1,float n2,float n3);
main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1 = 0,n2 = 0,n3 = 0;
    char op;
    cout<<"informe a primeira nota: " << endl;
    cin>>n1;
    cout<<"informe a segunda nota: " << endl;
    cin>>n2;
    cout<<"informe a terceira nota: " << endl;
    cin>>n3;
    cout<<"escolha a opção de cálculo de média ( A - Aritmética | H - HARMÔNICA | P - Ponderada ) " << endl;
    cin>>op;
    switch(op)
    {
    case 'A':
        mediaritimetica( n1, n2, n3);
        break;
    case 'H':
        mediaharmonica( n1, n2,n3);
        break;
    case 'P':
        mediaponderada( n1, n2, n3);
        break;
    default:
        cout<<"Opção inválida!" << endl;
        break;
    }

}
void mediaritimetica(float n1,float n2,float n3){
    float media = (n1 + n2 + n3) / 3;
    cout.fixed;
    cout.precision(2);
    cout<<"A média aritimética é: " << media << endl;
}
void mediaponderada(float n1,float n2,float n3){
    float media = ((n1 * 5) + (n2 * 3) + (n3 * 2));
    media = (media / (5 + 3 + 2));
    cout.fixed;
    cout.precision(2);
    cout<<"A média ponderada é: " << media << endl;
}
void mediaharmonica(float n1,float n2,float n3){
    float media = (3/((1/n1) + (1/n2) + (1/n3)));
    cout.fixed;
    cout.precision(2);
    cout<<"A média harmônica é: " << media << endl;
}