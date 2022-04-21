#include<iostream>
#include<locale.h>
using namespace std;
main(){
setlocale(LC_ALL,"Portuguese");
int fp;
cout<<"quais são os 2 ultimos digitos da sua placa?";
cin>>fp;
if(fp==1||fp==11||fp==21||fp==31||fp==41){
    cout<<"o vencimento do IPVA é 06/04/2010";
}
else if(fp==51||fp==61||fp==71||fp==81||fp==91){
    cout<<"o vencimento do IPVA é 09/04/2010";
}
else if(fp==2||fp==12||fp==22||fp==32||fp==42){
    cout<<"o vencimento do IPVA é 14/04/2010";
}
else if(fp==52||fp==62||fp==72||fp==82||fp==92){
    cout<<"o vencimento do IPVA é 16/04/2010";
}
else if(fp==3||fp==13||fp==23||fp==33||fp==43){
    cout<<"o vencimento do IPVA é 20/04/2010";
}
else if(fp==53||fp==63||fp==73||fp==83||fp==93){
    cout<<"o vencimento do IPVA é 23/04/2010";
}
else if(fp==4||fp==14||fp==24||fp==34||fp==44){
    cout<<"o vencimento do IPVA é 04/05/2010";
}
else if(fp==54||fp==64||fp==74||fp==84||fp==94){
    cout<<"o vencimento do IPVA é 07/05/2010";
}
else if(fp==5||fp==15||fp==25||fp==35||fp==45){
    cout<<"o vencimento do IPVA é 10/05/2010";
}
else if(fp==55||fp==65||fp==75||fp==85||fp==95){
    cout<<"o vencimento do IPVA é 14/05/2010";
}
else if(fp==6||fp==16||fp==26||fp==36||fp==46){
    cout<<"o vencimento do IPVA é 17/05/2010";
}
else if(fp==56||fp==66||fp==76||fp==86||fp==96){
    cout<<"o vencimento do IPVA é 21/05/2010";
}
else if(fp==7||fp==17||fp==27||fp==37||fp==47){
    cout<<"o vencimento do IPVA é 08/06/2010";
}
else if(fp==57||fp==67||fp==77||fp==87||fp==97){
    cout<<"o vencimento do IPVA é 15/06/2010";
}
else if(fp==8||fp==18||fp==28||fp==38||fp==48){
    cout<<"o vencimento do IPVA é 18/06/2010";
}
else if(fp==58||fp==68||fp==78||fp==88||fp==98){
    cout<<"o vencimento do IPVA é 23/06/2010";
}
else if(fp==9||fp==19||fp==29||fp==39||fp==49){
    cout<<"o vencimento do IPVA é 08/07/2010";
}
else if(fp==59||fp==69||fp==79||fp==89||fp==99){
    cout<<"o vencimento do IPVA é 14/07/2010";
}
else if(fp==10||fp==20||fp==30||fp==40||fp==50){
    cout<<"o vencimento do IPVA é 19/07/2010";
}
else if(fp==60||fp==70||fp==80||fp==90||fp==0){
    cout<<"o vencimento do IPVA é 23/07/2010";
}
else{
    cout<<"final de placa invalido";
}
}
