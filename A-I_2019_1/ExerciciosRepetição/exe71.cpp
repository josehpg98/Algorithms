#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int id,cg,cc,cand=0,Tid = 0,m = 0,f = 0,sex,c1 = 0,c2 = 0,c3 = 0,c4 = 0,ms1 = 0,ms2 = 0, ms3 = 0, ms4 = 0;
    float ps,pcf,msc1 = 10.054,msc2 = 7.0087,msc3 = 8.981,msc4 = 4.564,idm;


    cout<<"\n --Cargos Disponiveis:-- ";
    cout<<"\n codigo  |  Tecnologia da Informação |  Maior  | Menor  |  Média ";
    cout<<"\n    1    |      Coordenador de TI    |  6.971  | 9.294  |  10.054 ";
    cout<<"\n    2    |      Administ. de Rede    |  4.849  | 5.008  |  7.0087 ";
    cout<<"\n   3     |       Suporte Técnico     |  4.739  | 6.232  |  8.981 ";
    cout<<"\n   4     |      Analista de S. T.    |  3.405  | 4.122  |   4.564 ";

   do{
        cout<<"\n informe sua idade: ";
        cin>>id;
        cout<<"\n informe a pretensão salarial: ";
        cin>>ps;
        cout<<"\n informe o seu sexo (0-feminino | 1-MASCULINO): ";
        cin>>sex;
        cout<<"\n informe o seu cargo pretendido";
        cin>>cg;
        cout<<"\n deseja continuar o cadastro de candidatos: (0-Continuar | 1-Sair)";
        cin>>cc;
        if(sex == 0)
        {
            f = f + 1;
        }
       if(sex == 1)
        {
            m = m + 1;
        }
        if(cg == 1)
        {
            c1 = c1 +1;
            if(ps > msc1)
            {
                ms1 = ms1 + 1;
            }
        }
        if(cg == 2)
        {
            c2 = c2 + 1;
            if(ps > msc2)
            {
                ms2 = ms2 + 1;
            }
        }
        if(cg == 3)
        {
            c3 = c3 + 1;
            if(ps > msc3)
            {
                ms3 = ms3 + 1;
            }
        }
        if(cg == 4)
        {
            c4 = c4 + 1;
            if(ps > msc4)
            {
                ms4 = ms4 + 1;
            }
        }
        else{
            cout<<"\n opção inválida!";
        }
        cand = cand + 1;
        Tid = Tid + id;

   }while(cc == 0);
            pcf = (f * 100) / cand;
            idm = (Tid / cand);
            cout<<"\n total da idade: " << Tid;
            cout<<"\n a idade media dos candidatos é: " << idm;
            cout<<"\n total de candidatos: " << cand;
            cout<<"\n total de candidatos do sexo nasculino: " << m;
            cout<<"\n total de candidatos do sexo feminino: " << f;
            cout<<"\n o percentual de candidatos femininos em relação ao total é: " <<pcf;
            cout<<"\n o total de candidatos para o cargo 1 é: " <<c1;
            cout<<"\n o total de candidatos com média salarial maior que o pretendido para o cargo 1 é: " <<ms1;
            cout<<"\n o total de candidatos para o cargo 2 é: " <<c2;
            cout<<"\n o total de candidatos com média salarial maior que o pretendido para o cargo 1 é: " <<ms2;
            cout<<"\n o total de candidatos para o cargo 3 é: " <<c3;
            cout<<"\n o total de candidatos com média salarial maior que o pretendido para o cargo 1 é: " <<ms3;
            cout<<"\n o total de candidatos para o cargo 4 é: " <<c4;
            cout<<"\n o total de candidatos com média salarial maior que o pretendido para o cargo 1 é: " <<ms4;

   
}
