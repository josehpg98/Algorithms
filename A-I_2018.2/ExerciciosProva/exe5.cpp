#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    float vc, vfc, pp, vd, vac;
    int fp,p, prc;
    cout<<"informe o valor da compra: ";
    cin>> vc;
    cout<<"infome a forma de pagamento (1- с vista, 2-P/em atщ 3x, 3-P/ em atщ 6x e 4-P/ em atщ 12x): ";
    cin>> fp;
    cout<<"informe em  quantas parcelas: ";
    cin>> prc;

    if(fp == 1)
    {
        vd = (vc * 10) /100;
        vfc = vc - vd;
        cout<<"o valor da compra foi: " << vc << " e o valor final с vista da compra щ: " << vfc;
    }
    else if(fp == 2 && prc == 2 )
    {
        p = (vc / 2);
        pp = vc -(p*1);
        vfc = vc;
        cout<<"o valor da compra щ: " << vc << " o valor final щ: " << vfc <<" a primeira parcela щ " << pp << " e as outras duas: " << p ;
    }
     else if(fp == 2 && prc == 3 )
    {
        p = (vc / 3);
        pp = vc -(p*2);
        vfc = vc;
        cout<<"o valor da compra щ: " << vc << " o valor final щ: " << vfc <<" a primeira parcela щ " << pp << " e as outras duas: " << p ;
    }
    else if(fp == 3 && prc == 4 )
    {
        vfc = vc + (vc * 0.04);
        p = (vfc / 4);
        pp = vfc -(p*3);
       cout<<"o valor da compra щ: " << vc << " o valor final щ: " << vfc <<" a primeira parcela щ " << pp << " e as outras duas: " << p ;
    }
    else if(fp == 3 && prc == 5 )
    {
        vfc = vc +(vc * 0.04);
        p = (vfc / 5);
        pp = vfc -(p*4);
        cout<<"o valor da compra щ: " << vc << " o valor final щ: " << vfc <<" a primeira parcela щ " << pp << " e as outras duas: " << p ;
    }
    else if(fp == 3 && prc == 6 )
    {
        vfc = vc + (vc * 0.04);
        p = (vfc / 6);
        pp = vfc -(p*5);
        cout<<"o valor da compra щ: " << vc << " o valor final щ: " << vfc <<" a primeira parcela щ " << pp << " e as outras duas: " << p ;
    }
    else if(fp == 4 && prc == 7 )
    {
        vfc = vc + (vc * 0.08);
        p = (vfc / 7);
        pp = vfc -(p*6);
        cout<<"o valor da compra щ: " << vc << " o valor final щ: " << vfc <<" a primeira parcela щ " << pp << " e as outras duas: " << p ;
    }
    else if(fp == 4 && prc == 8 )
    {
        vfc = vc + (vc * 0.08);
        p = (vfc / 8);
        pp = vfc -(p*7);
        cout<<"o valor da compra щ: " << vc << " o valor final щ: " << vfc <<" a primeira parcela щ " << pp << " e as outras duas: " << p ;
    }
    else if(fp == 4 && prc == 9 )
    {
       vfc = vc + (vc * 0.08);
        p = (vfc / 9);
        pp = vfc -(p*8);
        cout<<"o valor da compra щ: " << vc << " o valor final щ: " << vfc <<" a primeira parcela щ " << pp << " e as outras duas: " << p ;
    }
    else if(fp == 4 && prc == 10 )
    {
       vfc = vc + (vc * 0.08);
        p = (vfc / 10);
        pp = vfc -(p*9);
        cout<<"o valor da compra щ: " << vc << " o valor final щ: " << vfc <<" a primeira parcela щ " << pp << " e as outras duas: " << p ;
    }
    else if(fp == 4 && prc == 11 )
    {
        vfc = vc + (vc * 0.08);
        p = (vfc / 11);
        pp = vfc -(p*10);
        cout<<"o valor da compra щ: " << vc << " o valor final щ: " << vfc <<" a primeira parcela щ " << pp << " e as outras duas: " << p ;
    }
    else if(fp == 4 && prc == 12 )
    {
        vfc = vc + (vc * 0.08);
        p = (vfc / 12);
        pp = vfc -(p*11);
        cout<<"o valor da compra щ: " << vc << " o valor final щ: " << vfc <<" a primeira parcela щ " << pp << " e as outras duas: " << p ;
    }

    else
    {
        cout<<"opчуo invсlida!";
    }

}
