#include<iostream>
#include<clocale>
#include<ctime>
#include<stdlib.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int a,b,c,d,e;
    cout<<"\n informe um valor:";
    cin>>a;
    cout<<"\n informe um valor:";
    cin>>b;
    cout<<"\n informe um valor:";
    cin>>c;
    cout<<"\n informe um valor:";
    cin>>d;
    cout<<"\n informe um valor:";
    cin>>e;

    //if(a > b && a > c && a > d && a > e)
    //{
        //mr = a;
        //cout<< e << "\n é o maior numero!";
    //}
    //f(a < b && a < c && a < d && a < e)
    //{
       // mn = a;
       // cout<< a << "\n é o menor numero!";
    //}

    //if(b > a && b > c && b > d && b > e)
    //{
        //mr = b;
        //cout<< b << "\n é o maior numero!";
    //}
    //if(b < a && b < c && b < d && b < e)
    //{
       // mn = b;
        //cout<< b << "\n é o menor numero!";
    //}
    //if(c < a && c < b && c < d && c < e)
    //{
       // mn = c;
       // cout<< c << "\n é o menor numero!";;
    //}
    //if(c > a && c > b && c > d && c > e)
   //{
       // mr = c;
        //cout<< c << "\n é o maior numero!";
    //}

    //if(d > a && d > b && d > c && d > e)
    //{
      // mr = d;
        //cout<< d << "\n é o maior numero!";
    //}
    //if(d < a && d < b && d < c && d < e)
    //{
      //  mn = d;
        //cout<< d << "\n é o menor numero!";
   // }

    //if(e > a && e > b && e > c && e > d)
    //{
       // mr = e;
       // cout<< e << "\n é o maior numero!";
    //}
    //if(e < a && e < b && e < c && e < d)
   // {
   //     mn = e;
        //cout<< e << "\n é o menor numero!";
   // }
    if(a > b && a > c && a > d && a > e)
        {
            cout<<"\n é o maior número!" << a;
             if(b < a && b < c && b < d && b < e)
             {
                cout<<"\n o menor numero é: " << b;
             }
             else if(c < a && c < b && c < d && c < e)
             {
                cout<<"\n o menor numero é: " << c;
             }
             else if(d < a && d < b && d < c && d < e)
             {
                cout<<"\n o menor numero é: " << d;
             }
             else if(e < a && e < b && e < c && e < d)
             {
                cout<<"\n o menor numero é: " << e;
             }
        }
        if(b > a && b > c && b > d && b > e)
        {
            cout<<"\n é o maior número!" << b;
             if(a < b && a < c && a < d && a < e)
             {
                cout<<"\n o menor numero é: " << a;
             }
             else if(c < a && c < b && c < d && c < e)
             {
                cout<<"\n o menor numero é: " << c;
             }
             else if(d < a && d < b && d < c && d < e)
             {
                cout<<"\n o menor numero é: " << d;
             }
             else if(e < a && e < b && e < c && e < d)
             {
                cout<<"\n o menor numero é: " << e;
             }
        }
        if(c > a && c > b && c > d && c > e)
        {
            cout<<"\n é o maior número!" << c;
             if(b < a && b < c && b < d && b < e)
             {
                cout<<"\n o menor numero é: " << b;
             }
             else if(a < b && a < c && a < d && a < e)
             {
                cout<<"\n o menor numero é: " << a;
             }
             else if(d < a && d < b && d < c && d < e)
             {
                cout<<"\n o menor numero é: " << d;
             }
             else if(e < a && e < b && e < c && e < d)
             {
                cout<<"\n o menor numero é: " << e;
             }
        }
        if(d > a && d > b && d > c && d > e)
        {
            cout<<"\n é o maior número!" << d;
             if(b < a && b < c && b < d && b < e)
             {
                cout<<"\n o menor numero é: " << b;
             }
             else if(c < a && c < b && c < d && c < e)
             {
                cout<<"\n o menor numero é: " << c;
             }
             else if(a < b && a < c && a < d && a < e)
             {
                cout<<"\n o menor numero é: " << a;
             }
             else if(e < a && e < b && e < c && e < d)
             {
                cout<<"\n o menor numero é: " << e;
             }
        }
        if(e > a && e > b && e > c && e > d)
        {
            cout<<"\n é o maior número!" << e;
             if(b < a && b < c && b < d && b < e)
             {
                cout<<"\n o menor numero é: " << b;
             }
             else if(c < a && c < b && c < d && c < e)
             {
                cout<<"\n o menor numero é: " << c;
             }
             else if(d < a && d < b && d < c && d < e)
             {
                cout<<"\n o menor numero é: " << d;
             }
             else if(a < b && a < c && a < d && a < e)
             {
                cout<<"\n o menor numero é: " << a;
             }
        }
}
