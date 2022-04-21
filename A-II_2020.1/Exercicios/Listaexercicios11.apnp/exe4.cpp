#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
void gera_valor(int *v,int *tm){
    cout<<" Função Gera valores vetor! " << endl;
    srand(time(NULL));
    for(int i= 0;i < *tm;i++){
        v[i] = rand() % 50;
        if(i > 0){
            if(v[i] == v[i-1]){
                i--;
            }
        }
    }
    cout<<"Vetor Gerado com Sucesso! " << endl;
    getchar();
}
void mostra_valor(int *v,int *tmn){
    cout<<" Função Mostra valores vetor: " << endl;
    for(int i = 0;i < *tmn;i++){
        cout<<v[i] << " , ";
    }
    cout<<endl;
    cout<<" Mostra valores vetor em ordem inversa: " << endl;
    for(int j = *tmn;j >= 0;j--){
        cout<<v[j] << " , ";
    }
    getchar();
}
void troca_valores(int *v,int *tmn){
      cout<<" Função troca valores vetor: " << endl;
      int auxiliar;
      for(int i = *tmn;i >= 0;i--){
         for(int ic = 0;ic < (*tmn / 2);ic++){
                auxiliar = v[ic];//aux recebe o 1 posicao
                v[i] = auxiliar;//ulima posicao recebe o valor da priemeira
                v[ic] = v[i];
                cout<<v[i]<<" , ";

         }
      }
      cout<<endl;
      getchar();
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    int *tam,opcao,controle_menu = -1;
    do{
    cout<<"informe a dimensão do vetor: " << endl;
    cin>>*tam;
    fflush(stdin);
    }while(*tam % 2 != 0);
    int *pv = new int[*tam];
    do{
        system("cls");
        cout<<"Menu: " << endl;
        cout<<"0 - Sair " <<  endl;
        cout<< " 1 - Gerar Valores Randômicos para o vetor " << endl;
        cout<< " 2 - Mostrar o vetor e também em ordem inversa " << endl;
        cout<< " 3 – Trocar o 1º elemento com o último, o 2º com o penúltimo e assim sucessivamente, mostrar o vetor modificado " << endl;
        cout<< " Escolha sua opção: " << endl;
        cin>>opcao;
        fflush(stdin);
        getchar();
        switch(opcao)
        {
        case 0:
            cout<<"Programa encerrado! " << endl;
            getchar();
            break;
        case 1:
            controle_menu += 1;
            gera_valor(pv,tam);
            getchar();
            break;
        case 2:
            if(controle_menu < 0){
                cout<<"Primeiro gere o vetor! " << endl;
                getchar();
                break;
            }else{
                mostra_valor(pv,tam);
                getchar();
                break;
            }
        case 3:
            if(controle_menu < 0){
                cout<<"Primeiro gere o vetor! " << endl;
                getchar();
                break;
            }else{
                troca_valores(pv,tam);
                getchar();
                break;
            }
        default:
            cout<<" Opção inválida! " << endl;
             getchar();
            break;
        }
    }while(opcao);
}
