#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float sc,sj,jsj,jsc;
    int m = 0;
    cout<<"\n informe o salario de carlos: ";
    cin>>sc;
    sj = sc / 3;
    do
    {
        jsc = ( ((sc * 2) / 100 ) + sc );
        jsj = ( ((sj * 5) / 100 ) + sj );
        sj = jsj;
        sc = jsc;
        m = m + 1;
        cout<< m << "\t mes" << "\t sal�rio de carlos" << jsc << "\t sal�rio de joao " << jsj << endl;
    }
    while(sj <= sc);
    }
