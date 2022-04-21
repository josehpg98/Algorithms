#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float h;
    int id;
    char sex, n;
    cout<<"infome seu nome: ";
    cin>> n;
    cout<<"informe a sua idade: ";
    cin>> id;
    cout<<"informe primeiro a sua altura: ";
    cin>> h;
    cout<<"agora informe o seu sexo (M- masculino, f-feminino) ";
    cin>> sex;
    sex=tolower(sex);

    if(sex == 'm' && h > 1.70 && id <= 20)
        cout<< n <<" o seu peso ideal é: " << (72.7 * h) - 58 << " kg";
    else if(sex == 'm' && h > 1.70 && id  >= 21)
        cout<< n << " o seu peso ideal é: " << (72.7 * h) - 53 << " kg";
    else if(sex == 'm' && h > 1.70 && id  >= 40)
        cout<< n << " o seu peso ideal é: " << (72.7 * h) - 45 << " kg";
    else if(sex == 'm' && h <= 1.70 && id  <= 40)
        cout<< n << " o seu peso ideal é: " << (72.7 * h) - 50 << " kg";
    else if(sex == 'm' && h <= 1.70 && id  > 40)
        cout<< n << " o seu peso ideal é: " << (72.7 * h) - 58 << " kg";
    else if(sex == 'f' && h > 1.50 )
        cout<< n << "o seu peso ideal й: " << (62.1*h)-44.7 << "KG";
    else if(sex == 'f' && h <= 1.50 && id >= 35 )
        cout<< n << "o seu peso ideal й: " << (62.1*h)- 45 << "KG";
    else if(sex == 'f' && h <= 1.50 && id < 35 )
        cout<< n << "o seu peso ideal й: " << (62.1*h)- 49 << "KG";
    else
        cout<<"opção invalida!";
}
