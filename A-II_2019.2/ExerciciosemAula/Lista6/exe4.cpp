#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
void compara(char t1[30],char t2[30],char t3[30]);
main()
{
    setlocale(LC_ALL, "Portuguese");
    char s1[30],s2[30],s3[30];
    int t1 = 0,t2 = 0,t3 = 0,maior,menor,media;
    cout<<"informe uma palavra qualquer: " << endl;
    cin>>s1;
    cout<<"informe uma outra palavra qualquer: " << endl;
    cin>>s2;
    cout<<"informe uma última palavra qualquer: " << endl;
    cin>>s3;
    t1 = strlen(s1);
    t2 = strlen(s2);
    t3 = strlen(s3);
    if(t1 > t2 && t1 > t3)
    {
        //out<<"a string " << s1 << " e a maior";
        maior = t1;
        if(t2 > t1 && t2 > t3)
        {
            //cout<<"a string " << s2 << " e a maior";
            maior = t2;
            if(t2 > t1 && t2 > t3)
            {
                //cout<<"a string " << s2 << " e a maior";
                maior = t2;
            }

        }
    }
    if(t1 > t2 && t1 < t3)
    {
        //cout<<"a string " << s1 << " e a média";
        media = t1;
        if(t2 > t1 && t2 < t3)
        {
            //cout<<"a string " << s2 << " e a média";
            media = t2;
            if(t3 > t1 && t3 < t2)
            {
                //cout<<"a string " << s3 << " e a média";
                media = t3;
            }
        }
    }
    if(t1 < t2 && t1 < t3)
    {
        //cout<<"a string " << s1 << " e a menor";
        menor = t1;
        if(t2 < t1 && t2 < t3)
        {
            //cout<<"a string " << s2 << " e a ménor";
            menor = t2;
            if(t3 < t1 && t3 < t2)
            {
                //cout<<"a string " << s3 << " e a menor";
                menor = t3;
            }
        }
    }



    cout<<"maior " << maior << endl;
    cout<<"meio " << media << endl;
    cout<<"menor " << menor << endl;
}


