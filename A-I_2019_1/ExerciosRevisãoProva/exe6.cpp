#include<iostream>
using namespace std;
main()
{
	int f,op=0,sf=0,smm=0,sex,sm = 0,tp = 0,contf = 0, contm = 0,ppf;
	float s,st = 0,stp;
	while(op == 0)
	{
		cout<<"\n informe o seu salário: ";
		cin>>s;
		cout<<"\n informe o numero de filhos: ";
		cin>>f;
		cout<<"\n informe seu sexo (0 - masc. | 1 - fem): ";
		cin>>sex;
		cout<<"\n deseja continuar a pesquisa (0 = continuar | 1 = sair): ";
		cin>>op;
		tp = tp + 1;
		st = st + s;
		if(sex == 1)
		{
			contf = contf + 1;
		}
		if(sex == 0)
		{
			contm = contm + 1;
		}
		if(f == 0)
		{
			sf = sf + 1;
		}
		if(s > 1960)
		{
			smm = smm + 1;
		}
		if(sex == 0 && s < 1960)
		{
			sm = sm + 1;
		}
	}
		stp = st / tp;
		ppf = (contf * 100) / tp;
		cout<<"\n o númeero de familias sem filhos é: " << sf;
		cout<<"\n o percentual de pessoas com salário maior que 2 sal. min. é: " << smm;
		cout<<"\n o total de homens com salario menor que 1960 é: " << sm;
		cout<<"\n o total de pessoas do sexo feminino é: " << contf;
		cout<<"\n o percentual de pessoas do sexo feminino em relação ao total é: " << ppf;
		cout<<"\n o salário total da popuplação é de: " << stp;

}