#include<iostream>
#include <iomanip>
using namespace std;
main()
{
    setlocale(LC_ALL,"portuguese");

    int idade, codCargo,contC=0,contF=0;
    int cargo1=0, cargo2=0,cargo3=0,cargo4=0, contPretSal=0;
    double pretSal, percF, somaIdade=0, mediaIdade;
    char sexo, continua;

    do
    {
        contC++;
        cout<< "\n Informe idade Candidato "<< contC << " : ";
        cin>>idade;
        somaIdade =  somaIdade + idade;
        cout<< "\n Informe pretensão salarial do Candidato "<< contC << " : ";
        cin>>pretSal;

        cout<< "\n Informe sexo do Candidato "<< contC << " : ";
        cin>>sexo;
        sexo = toupper(sexo);
        if(sexo == 'F')
        {
            contF++;
        }
        cout<< "\n Informe cargo do Candidato "<< contC << " : ";
        cout<<"\n 1 - Coordenador TI \n 2 - Administrador de Rede ";
        cout<<"\n 3 - Suporte Tecnico \n 4 - Analista de Suporte ";
        cin>>codCargo;
        if(codCargo == 1)
            cargo1++;
        else if(codCargo == 2)
            cargo2++;
        else if(codCargo == 3)
            cargo3++;
        else if(codCargo == 4)
            cargo4++;

        if(codCargo == 1 and pretSal > 9294)
            contPretSal++;
        if(codCargo == 2 and pretSal > 5008)
            contPretSal++;
        if(codCargo == 3 and pretSal > 6232)
            contPretSal++;
        if(codCargo == 4 and pretSal > 4122)
            contPretSal++;

        cout<<"\n---------------------------------------------\n";
        cout<<"Deseja Continuar S/N ? ";
        cin>>continua;
    }
    while(continua=='S'or continua=='s' );
    cout<<"\n\n\n";
    cout<<"\n-------------------------------------------------------\n";
    cout<<"\n O total de Candidatos...................: " << contC;
    cout<<"\n O total de Candidatos do sexo feminino .: " << contF;
    percF = (contF * 100.00)/contC;
    cout<<"\n Com percentual de sexo feminino.......% : " << setprecision(2)<<fixed<< percF;
    mediaIdade = somaIdade / contC;
    cout<<"\n Media de Idade de todos ................: " << setprecision(2)<<fixed<< mediaIdade;
    cout<<"\n Total do 1 - Coordenador TI ............: " <<cargo1;
    cout<<"\n Total do 2 - Administrador de Rede......: "<<cargo2;
    cout<<"\n Total do 3 - Suporte Tecnico ...........: "<< cargo3;
    cout<<"\n Total do 4 - Analista de Suporte........: "<<cargo4;
    cout<<"\n Quantidade de Candidato com pretensão";
    cout<<"   salarial acima da media ................: "<<contPretSal;
    cout<<"\n\n\n";
}
