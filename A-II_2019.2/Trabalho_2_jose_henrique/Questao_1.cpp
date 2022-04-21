#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdio>
using namespace std;
void lervalores(int *vl1, int *vl2, int *vl3);
void ordena(int *vl1,int *vl2, int *vl3);
void mostrapares(int *v1,int *v2,int *v3);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int *v1 = new int;
    int *v2 = new int;
    int *v3 = new int;
    lervalores(v1,v2,v3);
    cout<<endl;
    cout<<endl;
}
void lervalores(int *vl1, int *vl2, int *vl3){
    cout<<endl;
    cout<<" função ler valores! " << endl;
    cout<<"---------------------------------" <<endl;
    cout<<endl;
    cout<<"Informe o primeiro valor: " << endl;
    cin>>*vl1;//le o valor digitado
    fflush(stdin);//apaga o buffer do teclado
    cout<<"Informe o segundo valor: " << endl;
    cin>>*vl2;
    fflush(stdin);
    cout<<"Informe o terceiro valor: " << endl;
    cin>>*vl3;
    fflush(stdin);
    //cout<<" valor de v na função ler: " << endl;
    //cout<<" v1: " << *vl1 << endl;//mostra os valores
    //cout<<" v2: " << *vl2 << endl;
    //cout<<" v3: " << *vl3 << endl;
    ordena(vl1,vl2,vl3);
}
void ordena(int *vl1,int *vl2, int *vl3){
     cout<<endl;
    cout<<" função ordena valores! " << endl;
    cout<<"---------------------------------" <<endl;
    cout<<endl;
    int vet[3] = {*vl1,*vl2,*vl3};
    for (int i=0; i < 3; i++)
        {
            int aux;//variavel auxiliar
            for (int j=0; j < 2; j++)
            {
                if (vet[j] < vet[i]) //se valor do indice "i" for menor do que o valor do indice j
                {
                aux = vet[j];//aux recebe v[j]
                vet[j] = vet[i];//v[j] recebe o vALOR DE V[I]
                vet[i] = aux;//VET[I] RECEBE AUX
                }
            }
        }


    for (int i=0; i < 3; i ++)
    {
        cout << vet[i] <<endl;

    }
    mostrapares(vl1,vl2,vl3);
}
void mostrapares(int *v1,int *v2,int *v3){
    cout<<endl;
    cout<<" função mostra pares! " << endl;
    cout<<"---------------------------------" <<endl;
    cout<<endl;
    int vet[3] = {*v1,*v2,*v3};
    int mai = vet[0];//variavel auxiliar
    int me = vet[0];
    for (int i=0; i < 3; i++)
        {

            for (int j=0; j < 2; j++)
            {
                if (vet[i] > mai) //se valor do indice "i" for menor do que o valor do indice j
                {
                    mai = vet[i];
                }
                if (vet[i] < me)
                {
                    me = vet[i];
                }
            //cout<<"maior valor " << mai << endl;
            //cout<<"menor valor " << me << endl;
        }
    }
    cout<<"maior valor " << mai << endl;
    cout<<"menor valor " << me << endl;

    cout<<endl;
    cout<<"valores pares no intervalo: " << endl;
    int cp = 0, p = 0/*p2 = 0,cimp = 0*/;
    int a = mai - me;
    int *vet3  = new int[a];
    //int *vet4 = new int[a];
     for (int l = me; l < mai; l++)
    {

        if (l % 2 == 0)
        {
            p++;
            cp++;
            vet3[p] = l;
        }//else{
             //p2++;
            //cimp++;
            //vet4[p2] = l;
        //}
    }
    //cout <<"Valores pares: " << endl;
    for (int k =0; k < cp; k++)
    {
        cout << vet3[k] << endl;
    }


}
