#include<iostream>
#include <locale.h>
#include <stdlib.h>// necessário p/ as funções rand
#include<time.h>//necessário p/ função time()
using namespace std;
main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	int A[5],troca;
	bool r;
	do{
	cout<<" vetor gerado: " << endl;
	for(int i = 0;i < 5;i++){
		A[i] = rand() % 99;
		cout<< A[i] << endl;
		if(A[1] == A[2] || A[1] == A[3] || A[1] == A[4] || A[1] == A[5]){
			r = true;
			if(A[2] == A[1] || A[2] == A[3] || A[2] == A[4] || A[2] == A[5]){
				r = true;
				if(A[3] == A[1] || A[3] == A[2] || A[3] == A[4] || A[3] == A[5]){
					r = true;
					if(A[4] == A[1] || A[4] == A[2] || A[4] == A[3] || A[4] == A[5]){
						r = true;
						if(A[5] == A[1] || A[5] == A[2] || A[5] == A[3] || A[5] == A[4]){
							r = true;
						}
					}
				}
			}
		}
	}
	 
   }while(r == false);
    for (int l=0; l<5; l++){
        for( int j=l+1; j<5; j++)
        {
            if (A[l]>A[j])
            {
                troca=A[l];
                A[l]=A[j];
                A[j]=troca;
            }
        }
    }
     cout<<" vetor ordenado de forma crescente: " << endl;
      for(int i=0; i<5; i++)
       {
        cout<<A[i] << endl;

       }
}
