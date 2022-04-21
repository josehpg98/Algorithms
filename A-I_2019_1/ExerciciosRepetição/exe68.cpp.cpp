#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float ppca = 90.000,ppcb = 200.000,tca,tcb;
    int m = 0;

    do
    {
        tca = ( ((ppca * 3.1) / 100 ) + ppca );
        tcb = ( ((ppcb * 1.5) / 100 ) + ppcb );
        ṕpca = tca;
        ppcb = tcb;
        m = m + 1;
        cout<< m << "\t mes" << "\t a taxa de crec. cid A" << tca << "\t a taxa de crescimento da cd. B" << tcb << endl;
    }
    while(ppca <= ppcb);
    
    }
