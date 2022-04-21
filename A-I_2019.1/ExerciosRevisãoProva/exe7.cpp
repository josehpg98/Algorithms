#include<iostream>
using namespace std;
main()
{
	
	float cd,cp,v,vc,dc = 3.88,e = 4.39,l = 5.08, pa = 0.92;
		cout<<"---conversor de moedas-----";
		cout<<"\n informe moeda de entrada( 0 - real | 1 - dolar com. | 2 - euro | 3 - libra | 4 - peso arg): ";
		cin>>cd;
		cout<<"\n informe moeda para ser convertida( 0 - real | 1 - dolar com. | 2 - euro | 3 - libra | 4 - peso arg): ";
		cin>>cp;
		cout<<"\n informe o valor em reais a ser convertido: ";
		cin>>v;
		//conversão de real pra real
		if(cd == 0 && cp == 0)
		{
			vc = v;
		}
		//conversão de real para dolar comercial
		if(cd == 0 && cp == 1)
		{
			vc = (v / dc);
		}
		//conversão de real para euro
		if(cd == 0 && cp == 2)
        {
        	vc = (v / e);
        }
        //conversao de real para libra
		if(cd == 0 && cp == 3)
        {
        	vc = (v / l);
        }
        //conversão de real para peso argentino
        if(cd == 0 && cp == 4)
        {
        	vc = (v / pa);
        }
        //conversão de dolar para real
        if(cd == 1 && cp == 0)
        {
        	vc = (v * dc);
        }
        //convarsão de dolar para dolar
        if(cd == 1 && cp == 1)
        {
        	vc = v;
        }
        //converter de dolar para euro
        if(cd == 1 && cp == 2)
        {
        	v = v * dc;
        	vc = (v / e);
        }
        //converter dolar para libra
        if(cd == 1 && cp == 3)
        {
        	v = v * dc;
        	vc = (v / l);
        }
        //conversão de dolar para peso argentino
          if(cd == 1 && cp == 4)
        {
        	v = v * dc;
        	vc = (v / pa);
        }
        cout<<"\n o valor convertido foi: " << vc;
}