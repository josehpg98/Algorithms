#include<iostream>
#include<locale.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int lt, t;
    float p, desc, reaj;

    cout<<"informe quantos litros voc� quer abastecer: ";
    cin>> lt;
    cout<<"informe o tipo de combustivel: (1 - GASOLINA e 2- �LCOOL) ";
    cin>> t;

    if(lt <= 20 && t == 1)
    {
        p = (2.59 * lt);
    desc = ((p *3) / 100);
    reaj = p - desc;
    cout<<"o pre�o sem desconto �: " << p << " e com desconto �: " << reaj;
    }
       else if( lt > 20 && t == 1)
       {
         p = (2.59 * lt);
         desc = ((p *5) / 100);
         reaj = p - desc;
        cout<<"o pre�o sem desconto �: " << p << " e com desconto �: " << reaj;
       }
          else if( lt <= 15 && t == 2)
          {
          p = (1.65 * lt);
         desc = ((p * 3.5) / 100);
         reaj = p - desc;
          cout<<"o pre�o sem desconto �: " << p << " e com desconto �: " << reaj;
          }
           else if( lt > 15 && t == 2)
           {
            p = (1.65 * lt);
            desc = ((p * 6) / 100);
            reaj = p - desc;
           cout<<"o pre�o sem desconto �: " << p << " e com desconto �: " << reaj;
           }
             else if(t != 1 && t != 2)
             {
              cout<<"op��o invalida! ";
             }
}
