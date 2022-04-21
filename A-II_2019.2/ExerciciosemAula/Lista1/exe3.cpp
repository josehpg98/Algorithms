#include<iostream>
#include <locale.h>
#include <stdlib.h>// necessário p/ as funções rand
#include<time.h>//necessário p/ função time()
using namespace std;
main()
{
	setlocale(LC_ALL, "Portuguese");
	int nms,nas,nd,cont = 0;
	cout<<"informe o número máximo que poderá ser sorteado: " << endl;
	cin>>nms;
	srand(time(NULL));
	nas = rand() % nms;
	do{
		cout<<"informe um número para tenta-lo adivinhar: " << endl;
		cin>>nd;
		cont = cont + 1;
		if(nd < nas){
			cout<<" valor muito baixo!" << endl;
		}
		if(nd > nas){
			cout<<" valor muito alto!" << endl;
		}
		if(nd == nas){
			cout<<"parabéns, você acertou em " << cont << " tentativas! " << endl;
		}
		
	}while(nas != nd);
		
}