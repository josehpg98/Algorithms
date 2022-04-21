#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<time.h>
#include<algorithm>
using namespace std;
void verificapalavra(string *pont);
main()
{
    setlocale(LC_ALL,"Portuguese");
    string *pont = new string();
    getline(cin,*pont);
    verificapalavra(pont);
}
void verificapalavra(string *pont)
{
    int size = pont->size();
    string plv = *pont;
    int c=0;
    std::transform (pont->begin(), pont->end(), pont->begin(), ::tolower);
    std::string::iterator end_pos = std::remove(pont->begin(), pont->end(), ' ');
    pont->erase(end_pos, pont->end());
    string tx = *pont;
    int comp = tx.size() - 1;
    for (int i=0; i < tx.size(); i++)
    {
        if (tx[i] == tx[comp])
        {
            c++;
        }
        comp--;
    }
    if (c == tx.size())
    {
        cout<<"A palavra " << plv <<" é um palíndromo." << endl;
    }
    else
    {
        cout<<"A palavra " << plv << " não é um palíndromo" << endl;
    }
}
