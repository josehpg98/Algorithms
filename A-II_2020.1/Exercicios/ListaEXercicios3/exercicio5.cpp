#include<iostream>
#include<ctime>
#include<cstdio>
#include<cstdlib>
using namespace std;
void geramatriz(int m[][5]);
void mostradpds(int m[][5]);
//void mostravetor(int m[][5]);
main()
{
    setlocale(LC_ALL, "Portuguese");
    int op = -1;
    int mat[5][5];
    do{
        cout<<"#####MENU DE A��ES#####" << endl;
        cout<<" 1 - Gerar Valores Rand�micos para a matriz " << endl;
        cout<<" 2 - Mostrar os Valores da diagonal principal e secundária" << endl;
        cout<<" 3 - Motrar  o  maior e menor elemento de cada linha da matriz" << endl;
        cout<<" Ecolha uma op��o: " << endl;
        cin>>op;
        fflush(stdin);
        cout<< endl;
        switch(op)
        {
        case 0:
            cout<<"Programa Encerrado!" << endl;
            break;
        case 1:
            geramatriz(mat);
            break;
        case 2:
            mostradpds(mat);
            break;
        //case 3:
            //mostramaiormenor(mat); 
            //break;
        }
    }while(op != 0);
}
void geramatriz(int m[][5]){
     srand(time(NULL));
     int l,c;
     for(l = 0;l < 5;l++){
        for (c = 0; c < 5; c = c + 1){
        {
            m[l][c] = rand() % 50  * 2;
        }
        
     }
     
}
cout<<"matriz gerada com sucesso!"<< endl;
}
void mostradpds(int m[][5]){
    int l, c;
    cout<<"Diaogonal principal " << endl;
    for (int l = 0;l < 5; l++)
    {
        for (c = 0; c < 5; c = c + 1)
        {
            if(l == c){
                cout<< m[l][c] << endl;
            }
            
        }
        
    }
    cout<<endl;
    cout<<"diagoal sevcundária" << endl;
    for(int p = 0;p < 5;p++){
        for ( int j = 0;j < 5; j++){
            if(p + j == 5 -1){
                cout<< m[p][j]<<endl;
            }
        }
        {
            /* code */
        }
        
    }
    
}
//void mostramaiormenor(int v[]){
    
//}
