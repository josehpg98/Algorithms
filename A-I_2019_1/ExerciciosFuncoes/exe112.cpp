#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;
float calculanota(float n1, float n2,float n3,float m,char op);
main()
{
   float n1,n2,n3,m;
   char op;
   cout<<" informe a primeira nota: " << endl;
   cin>>n1;
   cout<<" informe a segunda nota: " << endl;
   cin>>n2;
   cout<<" informe a treceira nota: " << endl;
   cin>>n3;
   cout<<"informe a media que deseja calcular (A -aritimetica | p - ponderada | h - harmonica): " << endl;
   cin>>op;

   m = calculanota(n1,n2,n3,m,op);

    cout<<" a média das notas é: " << m << endl;
}
float calculanota(float n1,float n2,float n3,float m, char op){
    float media;
    if(op == 'a' || op == 'A'){
        media = (n1 + n2 + n3) / 3;
    }
    if(op == 'p' || op == 'P'){
        media = (n1 * 10 + n2 * 10 + n3 * 10) / (10 + 10 + 10);
    }
    if(op == 'h' || op == 'H'){
            n1 = (n1 / 10);
            n2 = (n2 / 10);
            n3 = (n3 / 10);
        media = 3 / (n1 + n2 + n3);
    }
    return media;
}



