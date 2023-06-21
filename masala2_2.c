#include <stdio.h>

int main(){

   int arr[5];
   int ma=0;
   int mus=0;
   for(int i=0; i<5; i++){
     printf("Son kiriting:");
     scanf("%d", &arr[i]);
     if(arr[i]>0){
      mus+=1;
     }else if(arr[i]<0){
      ma+=1;
     }
   }
   printf("Manfiy ->%d\n", ma);
   printf("Musbat ->%d", mus);
}

