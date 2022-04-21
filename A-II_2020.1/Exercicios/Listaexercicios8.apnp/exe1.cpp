#include<iostream>
#include<cstring>
using namespace std;
void removeparametro(char txt[],int t);
main()
{
    setlocale(LC_ALL,"Portuguese");
    char text[100];
    int tmt;
    cout<<"Digite um texto qualquer: " <<endl;
    gets(text);
    fflush(stdin);
    getchar();
    cout<<"Texto antes da verificação: " << text <<endl;
    tmt = strlen(text);
    removeparametro(text,tmt);
}
void removeparametro(char txt[],int t){
      char x = '*';
      for(int i; i<= t; i++)
    {
       if(isdigit(txt[i]))
        {
            txt[i] = x;
        }
        if(isspace(txt[i]))
        {
            txt[i] = x;
        }
        txt[i] = toupper(txt[i]);
    }
    cout<<"Texto após a verificação: " << txt <<endl;
}
