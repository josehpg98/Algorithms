#include<iostream>
#include<clocale>
#include<ctime>
#include<cstdlib>
using namespace std;
float reajustasalario(float s);
main()
{
    setlocale(LC_ALL,"Portuquese");
    float r,s;
    cout<<" informe seu sal�rio atual: " << endl;
    cin>>s;
    //cout<< s << endl;
    r = reajustasalario(s);
    cout<< " seu sal�rio reajustado ser�: " << r;

}
float reajustasalario(float s){
    float res;
    res = (s * 15 / 100) + s;
    return res;
}
