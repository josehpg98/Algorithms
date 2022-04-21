#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
void troca(int *a1, int *b1);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int a,b;
    a = 2;
    b = 3;
    troca(&a,&b);//passa os enderece onde os valores estoa na memória na função ao ser acionada

}
void troca(int *a1, int *b1){
    cout<<" valores antes da troca:  " << endl;
    cout<<" valor de a: " << *a1 << endl;//vmostra o valor da função
    cout<<" valor de b: " << *b1 << endl;//mostra o valor da função
    int ax = *a1;
    *a1 = *b1;//com o asterisco está se pegando o valor
    *b1 = ax;// o ponteiro de b1, pega o valor de ax+
    cout<<"--------------------------------------" << endl;
    cout<<" valores após a troca:  " << endl;
    cout<<" valor de a: " << *a1 << endl;//vmostra o valor da a
    cout<<" valor de b: " << *b1 << endl;//mostra o valor da b

}
