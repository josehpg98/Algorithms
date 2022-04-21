#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
using namespace std;
main(){
    ifstream ler("numeros.txt",ios :: in);
    char c[100];
    float s = 0;
    int co=0;
    float ma=0,me=1000;
    ler.getline(c,100,';');
    while(!ler.eof())
    {
        s+=atof(c);
        if(ma<atof(c)){
            ma=atof(c);
        }
        if(me>atof(c)){
            me=atof(c);
        }
        co++;
        ler.getline(c,100,';');
    }
    ler.close();
    cout<<"soma: "<<s<<endl;
    cout<<"media: "<<s/co<<endl;
    cout<<"maior: "<<ma<<endl;
    cout<<"menor: "<<me<<endl;
}


