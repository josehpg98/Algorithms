#include <iostream>
using namespace std;
main()
{
     setlocale(LC_ALL, "Portuguese");

     float v[6], alturamedia = 0, somaaltura = 0, maioraltura = 0, menoraltura = 0;
     for (int i = 1; i < 7; i++)
     {
          cout << " informe a altura do " << i << " jogador: " << endl;
          cin >> v[i];
          somaaltura += v[i];
          maioraltura = v[1];
          menoraltura = v[1];
          if(maioraltura < v[i]){
               maioraltura = v[i];
          }
          if(menoraltura > v[i]){
               menoraltura = v[i];
          }
     }
     alturamedia = (somaaltura / 6);
     cout << "a altura média é: " << alturamedia << endl;
     cout << "a maior altura é " << maioraltura << endl;
     cout << "a menor altura é " << menoraltura << endl;
}
