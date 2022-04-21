#include<iostream>
#include<locale.h>
using namespace std;
main()
{
  bool b=false;
  int n1,n2,n1c,n2c,mmc=1;
  cout<<"digite o primeiro numero:";
  cin>>n1;
  cout<<"digite o segundo numero:";
  cin>>n2;
  if(n1>n2){
    for(int i=2;i<=n1;i++){
            if(n1%i==0 && n2%i==0){
                n1=n1/i;
                n2=n2/i;
                mmc = mmc*i;
                i=2;

            }
    }
  }
  else{
    for(int i=2;i<=n2;i++){

            }
  }
  }
    cout<<"o minimo multiplo comum entre "<<n1c<<" e "<<n2c<<" é "<<mmc;
}
