#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
using namespace std;
void geravetor(int v[]);
void mostravetor(int v[]);
main()
{
   int vet[5];
    geravetor(vet);
    mostravetor(vet);
}
void geravetor(int v[]){
    srand(time(NULL));
    int x;
    bool r;
    do{
    srand(time(NULL));
    for(x = 0;x < 5;x++){
        v[x] = rand() % 15;
        if(v[1] == v[2] || v[1] == v[3] || v[1] == v[4] || v[1] == v[5]){
			  r = true;
			if(v[2] == v[1] || v[2] == v[3] || v[2] == v[4] || v[2] == v[5]){
				 r = true;
				if(v[3] == v[1] || v[3] == v[2] || v[3] == v[4] || v[3] == v[5]){
					 r = true;
					if(v[4] == v[1] || v[4] == v[2] || v[4] == v[3] || v[4] == v[5]){
						  r = true;
						if(v[5] == v[1] || v[5] == v[2] || v[5] == v[3] || v[5] == v[4]){
							 r = true;
						}
					}
				}
			}
		}
    }
  }while(r == false);
}
void mostravetor(int v[]){
    int x;
        for(x = 0;x < 10;x++){
        cout<< v[x] << " ;";
        cout.width(2);
    }
}

