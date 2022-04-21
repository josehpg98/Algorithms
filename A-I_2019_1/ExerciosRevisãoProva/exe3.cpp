#include<iostream>
using namespace std;
main()
{
	int cont1=1,cont2=1,var1=10,var2=20;
	for (cont1=0; cont1 <= 5; cont1 = cont1 + 1)
	{
		var2 = var2 + 1;
		for (cont2=0; cont2 <= 10; cont2 = cont2 + 1)
		{
			var1 = var1 + 1;
		}
	}
	cout<<"\n o valor de var1 é: " << var1;
	cout<<"\n o valor de var2 é: " << var2;
}