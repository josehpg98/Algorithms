#include <stdio.h>
#include <stdlib.h>
using namespace std;
main(){

       int vector[4]={10,3,15,50};



       int i,y,vect;

       int x=4;





       printf("VECTOR POR ORDENAR\n\n\n");


       for(i=0;i<x;i++)
       printf("Posicao %d = %d\n",i,vector[i]);

   ////////////////////////////////////////////////////////////7
       x--;
       for(i=0;i<x;i++)
       for(y=0;y<i;y++)

       if(vector[y]>vector[y+1]){
       vect += vector[y];
       vector[y]=vector[y+1];
       vector[y+1]=vect;
       }

      printf("VECTOR ORDENADO\n\n\n");



      for(i=0;i<=x;i++)

      printf("Posicao %d = %d\n",i,vector[i]);
      printf("\n\n");


       system("pause");

       }
