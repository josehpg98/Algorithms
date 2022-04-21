#include<iostream>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    char meio[50],maior[50],menor[50];
    char s1[50],s2[50],s3[50];
    int ts1,ts2,ts3;
    cout<<"Preencha a string 1: " << endl;
    gets(s1);
    cout<<"Preencha a string 2: " << endl;
    gets(s2);
    cout<<"Preencha a string 3: " << endl;
    gets(s3);
    ts1 = strlen(s1);
    ts2 = strlen(s2);
    ts3 = strlen(s3);

    //-----------------maior-------------------
    if(ts1 > ts2 && ts1 > ts3)
    {
        //cout<<"A string maior é a string 1 (s1)!" << endl;
        strcpy(maior,s1);
    }
    if(ts2 > ts1 && ts2 > ts3){
        //cout<<"A string maior é a string 2 (s2)!" << endl;
        strcpy(maior,s2);
    }
    if(ts3 > ts1 && ts3 > ts2){
        //cout<<"A string maior é a string 3 (s3)!" << endl;
        strcpy(maior,s3);
    }
    //------------menor----------
      if(ts1 < ts2 && ts1 < ts3)
    {
        //cout<<"A string maior é a string 1 (s1)!" << endl;
        strcpy(menor,s1);
    }
    if(ts2 < ts1 && ts2 < ts3){
        //cout<<"A string maior é a string 2 (s2)!" << endl;
        strcpy(menor,s2);
    }
    if(ts3 < ts1 && ts3 < ts2){
        //cout<<"A string maior é a string 3 (s3)!" << endl;
        strcpy(menor,s3);
    }
     //------------meio-------------------
        if(ts1 < ts2 && ts1 > ts3)
    {
        //cout<<"A string maior é a string 1 (s1)!" << endl;
        strcpy(meio,s1);
    }
    if(ts2 < ts1 && ts2 > ts3){
        //cout<<"A string maior é a string 2 (s2)!" << endl;
        strcpy(meio,s2);
    }
    if(ts3 < ts1 && ts3 > ts2){
        //cout<<"A string maior é a string 3 (s3)!" << endl;
        strcpy(meio,s3);
    }

    cout<<" a string maior é: " << maior<<endl;
    cout<<" a string do meio é: " << meio<<endl;
    cout<<"a string menor é: " << menor<<endl;
}
