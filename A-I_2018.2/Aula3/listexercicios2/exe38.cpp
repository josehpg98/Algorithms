#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int lt, t;
    float p, desc, reaj;

    cout<<"informe quantos litros você quer abastecer: ";
    cin>> lt;
    cout<<"informe o tipo de combustivel: (1 - GASOLINA e 2- ÁLCOOL) ";
    cin>> t;

    if(lt <= 20 && t == 1)
    {
        p = (2.59 * lt);
    desc = ((p *3) / 100);
    reaj = p - desc;
    cout<<"o preço sem desconto é: " << p << " e com desconto é: " << reaj;
    }
       else if( lt > 20 && t == 1)
       {
         p = (2.59 * lt);
         desc = ((p *5) / 100);
         reaj = p - desc;
        cout<<"o preço sem desconto é: " << p << " e com desconto é: " << reaj;
       }
          else if( lt <= 15 && t == 2)
          {
          p = (1.65 * lt);
         desc = ((p * 3.5) / 100);
         reaj = p - desc;
          cout<<"o preço sem desconto é: " << p << " e com desconto é: " << reaj;
          }
           else if( lt > 15 && t == 2)
           {
            p = (1.65 * lt);
            desc = ((p * 6) / 100);
            reaj = p - desc;
           cout<<"o preço sem desconto é: " << p << " e com desconto é: " << reaj;
           }
             else if(t != 1 && t != 2)
             {
              cout<<"opção invalida! ";
             }
}
