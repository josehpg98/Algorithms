//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//bibliotecas principais
//using namespace std;
//int leitura();
//main()
//{
   // setlocale(LC_ALL, "Portuguese");
   //int v1, v2;
  // v1 = leitura();
   //v2 = leitura();
   //cout<<" v1 " << v1 << endl;
   //cout<<" v2 " << v2 << endl;
//}
//int leitura(){
    //int x;
    //cout<<"digite um numero: " << endl;
    //cin>>x;
    //fflush(stdin);
    //return x;
//}

//---------------------------------------------------------------------------------------------

#include<iostream>
#include<cstdio>
#include<cstdlib>
//bibliotecas principais
using namespace std;
void leitura(int &x);
main()
{
    setlocale(LC_ALL, "Portuguese");
   int v1, v2;
   leitura(v1);
   leitura(v2);
   cout<<" v1 " << v1 << endl;
   cout<<" v2 " << v2 << endl;
}
void leitura(int &x){
    cout<<"digite um numero: " << endl;
    cin>>x;
    fflush(stdin);
}
