                                                                                                                                                                                                                       #include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void lertexto(char t[20],char p);
main()
{
    setlocale(LC_ALL, "Portuguese");
    char txt[20],cp;
    cout<<"informe um texto qualquer: " << endl;
    cin>>txt;//le a string
    cout<<"informe um caracter qualquer com parametro: " << endl;
    cin>>cp;
    //cout<<"o texto digitado foi: " << txt << endl;
    lertexto(txt,cp);

}
void lertexto(char t[20], char c)
{
    int tm = strlen(t);
    char s = '-';
    for(int x = 0; x <= tm; x++)
    {                                  
        if(t[x] == c)
        {
            t[x] = s;

        }
             
    }
	 cout<<t;    
}

                