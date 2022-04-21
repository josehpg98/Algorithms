#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cstdlib>
using namespace std;
void geravetor(int vl1, int vl2);
void geravetor2(int vl1, int vl2);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int v1,v2;
    int *vet = new int[10];
    cout<<"informe um valor entre 1 e 10 " << endl;
    cin>>v1;
    cout<<"informe um segundo valor entre 1 e 10 " << endl;
    cin>>v2;
   if (v1 > v2)
    {
        geravetor(v1,v2);
    }
    else
    {
        geravetor2(v1,v2);
    }
}
void geravetor(int vl1, int vl2)
{
    int aux=0, cp=0,cimp=0,p1=-1,p2=-1;
    aux = vl1 - vl2;
    int *vt1 = new int[aux];
    int *vt2 = new int[aux];
    for (int a = vl2; a <= vl1; a++)
    {
        if (a % 2 == 0)
        {
            p1++;
            cp++;
            vt1[p1] = a;
        }
        else
        {
            p2++;
            cimp++;
            vt2[p2] = a;
        }
    }
    cout <<"Valores pares no intervalo do vetor 1: " << endl;
    for (int j=0; j < cp; j++)
    {
        cout << vt1[j] << endl;
    }
    cout <<"Valores ímpares no intervalo do vetor 1 : " << endl;
    for (int j=0; j < cimp; j++)
    {
        cout << vt2[j] << endl;
    }
}
void geravetor2(int vl1, int vl2)
{
    int aux=0, cp=0,cimp=0,p1=-1,p2=-1;
    aux = vl2 - vl1;
    int *vt1 = new int[aux];
    int *vt2 = new int[aux];
    for (int a = vl1; a <= vl2; a++)
    {

        if (a % 2 == 0)
        {
            p1++;
            cp++;
            vt1[p1] = a;

        }
        else
        {
            p2++;
            cimp++;
            vt2[p2] = a;
        }

    }
    cout <<"Valores pares no intervalo do vetor 2: " << endl;
    for (int j=0; j < cp; j++)
    {
        cout << vt1[j] << endl;
    }
    cout <<"Valores ímpares no intervalo do vetor 2: " << endl;
    for (int j=0; j < cimp; j++)
    {
        cout << vt2[j] << endl;
    }
}





