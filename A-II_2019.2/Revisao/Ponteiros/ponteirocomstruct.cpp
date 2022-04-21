#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
struct horario{//variável heterogênia horário
    int hora;
    int minuto;
    int segundos;
};
main()
{
    setlocale(LC_ALL,"Portuguese");
    horario agora, *depois;//declarei uma variável do tippo horário e um ponteiro do tipo deopois

    depois = &agora;//ponteiro  depois recebe o endereço de memória  de agora

    //como nas operações matemárticcas, a multiplicação tem preferência
    //então para atribuir um valor ao ponteiro depois depois pra struct horáriio
    //o parenteses indica a precedencia de sinais
    //se faz assim:
    (*depois).hora = 15;//primeiro jeto de acessar um ponteiro do tipo estrutura
    depois->minuto = 35;// segunda forma de declaração, adotad pelo c++
    depois->segundos = 10;

    cout<< agora.hora << " : " << agora.minuto << " : " << agora.segundos << endl;

    //operações matematicas
    struct horario antes;

    int tempox = 50;

    cout"agora com operações matemáticas!" << endl;
    antes.hora = tempox - depois->hora;
    antes.minuto = tempox - depois->minuto;
    antes.segundos = tempox - depois->segundos;

    cout<< antes.hora << " : " << antes.minuto << " : " << antes.segundos << endl;

}
