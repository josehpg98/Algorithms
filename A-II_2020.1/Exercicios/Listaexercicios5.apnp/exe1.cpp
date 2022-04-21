#include<iostream>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int voto;
    float p1 = 0,p2 = 0,p3 = 0,p4 = 0,op1 = 0,op2 = 0,op3 = 0,op4 = 0, total = 0;
    do
    {
        cout<<"----- Menu de Ações Para Votação -----" << endl;
        cout<<" 0 - Sair; " << endl;
        cout<<" 1 - Existir vacina para toda a comunidade; " << endl;
        cout<<" 2 - Quando o registro de novos casos no municipio estiver em declinio por 30 dias; " << endl;
        cout<<" 3 - Quando o municipio estiver 3 semanas consecutivas na bandeira laranja; " << endl;
        cout<<" 4 - Imediatamente; " << endl;
        cout<<" Escolha uma opção, caso queira sair digite zero (0): " << endl;
        cin>>voto;
        switch(voto)
        {
        case 0:
            cout<<" O programa foi encerrado! " << endl;
            break;
        case 1:
            op1 += 1;
            break;
        case 2:
            op2 += 1;
            break;
        case 3:
            op3 += 1;
            break;
        case 4:
            op4 += 1;
            break;
        default:
            cout<<"Opção para votação invalida, tente novamente! " << endl;
            break;
        }
        total = (op1 + op2 + op3 + op4);
        cout<<" ----- Resultado da enquete ----- " << endl;
        cout<<" Total de votos: " << total << endl;
        cout<<"Votos na opção 1: " << op1 << endl;
        p1 =((op1 / total) * 100);
        cout<<"Percentual na opção 1: " << p1 << endl;
        cout<<"Votos na opção 2: " << op2 << endl;
        p2 = (op2 / total) * 100;
        cout<<"Percentual na opção 2: " << p2 << endl;
        cout<<"Votos na opção 3: " << op3 << endl;
        p3 = (op3 / total) * 100;
        cout<<"Percentual na opção 3: " << p3 << endl;
        cout<<"Votos na opção 4: " << op4 << endl;
        p4 = (op4 / total) * 100;
        cout<<"Percentual na opção 4: " << p4 << endl;
    }
    while(voto != 0);

}
