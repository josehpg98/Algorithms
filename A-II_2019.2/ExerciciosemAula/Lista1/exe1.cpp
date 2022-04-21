#include<iostream>
using namespace std;
main()
{

    int qt,qta,sta = 0,tc = 0,tr = 0,ts = 0;
    float pc = 0,pr = 0,ps = 0;
    char tp;
    cout<<" informe a quantidade de testes: " << endl;
    cin>>qt;
    if(qt >= 1 && qt <= 15)//verifica se o teste é maior que 1 e menor ou igual a 15
    {
        for(int i = 1;i <= qt;i++){//laço de repetição para ir de 1 até a quantidade de testes desejada
            cout<<" informe a quantidade de animais para o teste: " << endl;
            cout<<" Para \t Coelho = C \t Rato = R \t Sapo = s" << endl;
            cin>>qta;
            cin>>tp;
            sta = sta + qta;
            if(tp == 'c' || tp == 'C'){
            	tc = tc + qta;
            }
            if(tp == 'R' || tp == 'r'){
            	tr = tr + qta;
            }
             if(tp == 'S' || tp == 's'){
            	ts = ts + qta;
            }

        }
        pc = (qta - tc) / 100;
    }
    	
    	//pc = (qta - tc) / 100;
    	cout<<"o total de cobaias foi: " << sta << endl;
    	cout<<" total coelhos: " << tc << endl;
    	cout<<" total ratos: " << tr << endl;
    	cout<<" total sapos: " << ts << endl;
    	cout<<" percentual de coelhos: " << pc << endl;
    	cout<<" percentual de ratos: " << pr << endl;
    	cout<<" percentual de sapos: " << ps << endl;
}

