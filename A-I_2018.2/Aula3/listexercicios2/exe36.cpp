#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float h;
    char sex;
    cout<<"informe primeiro a sua altura: ";
    cin>> h;
    cout<<"agora informe o seu sexo (M- masculino, f-feminino) ";
    cin>> sex;
    sex=tolower(sex);

    if(sex == 'm')
        cout<<"o seu peso ideal й: " << (72.7*h)-58 << "KG";
    else if(sex == 'f')
        cout<<"o seu peso ideal й: " << (62.1*h)-44.7 << "KG";
    else
        cout<<"opção invalida!";
}
