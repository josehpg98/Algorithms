#include <iostream> //biblioteca para leitura e escrita no disco
#include <clocale>  //biblioteca para inclusão do padrão portugês brasileiro
#include <cstdio>   //biblioteca padrão de entrada e saída
#include <cstdlib>  //biblioteca para emular o prompt de comando ou terminal
using namespace std;
void leianumero(int num[5]);
main()
{
    setlocale(LC_ALL, "Portuguese"); //transforma o padrão de escrita do teclado em brasileiro
    int n[5];
   leianumero(n);
}
void leianumero(int num[5]){
    int c = 0,s = 0;
    while (c < 5)
    {
      for (int i = 0; i <= 4;i++)
      {
         cout<<"informe um valor: " << endl;
         cin>>num[i];
         int r = 0;
         r = (i % 2);
         if(r == 0){
             cout<<"é positivo!" << endl;
         }else{
              cout<<"é negativo, informe outro numero inteiro e positivo: " << endl;
              cin>>num[i];
         }
         c = c + 1;
         s = s + i;
      }
      
      
    }
    cout<<"a soma dos elementos: " << s << endl;
}