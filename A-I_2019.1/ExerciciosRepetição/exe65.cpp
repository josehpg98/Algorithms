#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int q=0,n,s=0;
    float m;
    do{
        cout<<"\n informe um valor: ";
        cin>>n;
        if(n > 0 && n < 5000)
        {
            q = q + 1;
            s = s + n;

            m = s / q;
            cout<<"\n n�meros lidos: " << q;
            cout<<"\n m�dia: " << m;
        }
    }while(n > 0 && n < 5000);

    cout<<"\n acabou o la�o!";
}
