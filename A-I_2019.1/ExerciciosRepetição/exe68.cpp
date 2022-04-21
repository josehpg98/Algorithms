#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float tx1,tx2,cid1=90.000,cid2=200.000;
    int m = 0;

    do
    {
        tx1 = ( ((cid1 * 3.1) / 100 ) + cid1 );
         tx2 = ( ((cid2 * 1.5) / 100 ) + cid2 );
        cid1 = tx1;
        cid2 = tx2;
        m = m + 1;
        cout<< m << "\t mes" << "\t pop. cidade A " << cid1 << "\t pop. cidade B " << cid2 << endl;
    }
    while(cid1 < cid2);
    }
