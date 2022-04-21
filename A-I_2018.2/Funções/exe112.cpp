#include<iostream>
#include<locale.h>
using namespace std;
float mediaart(float n1,float n2,float n3, int t);
main()
{
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, n3, res;
    int tp;
    cout<<"informe a primeira nota: ";
    cin>>n1;
    cout<<"informe a segunda nota: ";
    cin>>n2;
    cout<<"informe a terceira nota: ";
    cin>>n3;
    cout<<"informe o tipo de media: (0-AriTMÉTICA | 1-Ponderada | 2-Harmônica)"

    cin>>tp;
    res = mediaart(n1, n2 ,n3, t);
    cout<<"\n a média aritmética é: " << res;
}
float mediaart(float n1,float n2,float n3,int t){
    float m;
    if(t == 0)
    {
    m = (n1+n2+n3)/3;
    }
    if(t == 1)
    {
      m = ((n1*5)+(n2*3)+(n3*2)/10);
    }
     if(t == 2)
    {

    }
    return m;
}



