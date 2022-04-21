#include<iostream>
using namespace std;
main()
{
    int M[3][3], L, C, s;
    for(L = 0; L < 3; L++)
    {
        for(C = 0; C < 3; C++)
        {
            M[L][C] = (L + C) * 2;
            cout << M[L][C] << "\t";
        }
        cout<<"\n\n";
    }
    cout<<"\n\n\n\n";
    s = 0;
    for(L = 0; L < 3; L++)
    {
        for(C = 0; C < 3; C++)
        {
            if (L + C >= 2)
            {
                cout << M[L][C] << "\t";
                s = s + M[L][C];
            }
            else
            {
                cout << "-"<< "\t";
            }
        }
        cout<<"\n\n";
    }
    cout<< " \n\n A soma " << s;
    cout<<"\n\n";
}
