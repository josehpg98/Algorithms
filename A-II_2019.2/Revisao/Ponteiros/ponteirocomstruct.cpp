#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
struct horario{//vari�vel heterog�nia hor�rio
    int hora;
    int minuto;
    int segundos;
};
main()
{
    setlocale(LC_ALL,"Portuguese");
    horario agora, *depois;//declarei uma vari�vel do tippo hor�rio e um ponteiro do tipo deopois

    depois = &agora;//ponteiro  depois recebe o endere�o de mem�ria  de agora

    //como nas opera��es matem�rticcas, a multiplica��o tem prefer�ncia
    //ent�o para atribuir um valor ao ponteiro depois depois pra struct hor�riio
    //o parenteses indica a precedencia de sinais
    //se faz assim:
    (*depois).hora = 15;//primeiro jeto de acessar um ponteiro do tipo estrutura
    depois->minuto = 35;// segunda forma de declara��o, adotad pelo c++
    depois->segundos = 10;

    cout<< agora.hora << " : " << agora.minuto << " : " << agora.segundos << endl;

    //opera��es matematicas
    struct horario antes;

    int tempox = 50;

    cout"agora com opera��es matem�ticas!" << endl;
    antes.hora = tempox - depois->hora;
    antes.minuto = tempox - depois->minuto;
    antes.segundos = tempox - depois->segundos;

    cout<< antes.hora << " : " << antes.minuto << " : " << antes.segundos << endl;

}
