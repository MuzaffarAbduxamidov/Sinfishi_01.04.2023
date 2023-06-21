#include <stdio.h>

int main(){

   int arr[5];
   int musbat=0;
   int manfiy=0;
   for(float i=0; i<5; i++){
     printf("Son kiriting:");
     scanf("%d", &arr[i]);
     if(i>0){
       musbat+=1;
     }else if(i<0){
       manfiy+=1;
     }
   }
      printf("Musbat -> %d\n", musbat);
      printf("Manfiy -> %d", manfiy);
}
