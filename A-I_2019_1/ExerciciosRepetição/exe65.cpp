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
            cout<<"\n números lidos: " << q;
            cout<<"\n média: " << m;
        }
    }while(n > 0 && n < 5000);

    cout<<"\n acabou o laço!";
}
