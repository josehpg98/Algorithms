#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n, s = 0, c = 0;
   double  m = 0;

    for (int i = 1; i < 11; ++i)
    {
       cout<<"\n informe a nota do aluno: ";
       cin>>n;
       	s = s + n;
       
       if(n > 7)
       {
       	c = c + 1;
       }
    }
     m = (s / 10);
     cout<<"\n a média geral da turma é: " << m;
     cout<<"\n os alunos que passaram com média maior que 7 são: " << c;
   
     

   
}
