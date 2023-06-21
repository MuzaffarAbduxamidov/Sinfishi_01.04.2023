#include <stdio.h>

int main(){

   int arr[5];
   int sum=0;
   for(int i=0; i<5; i++){
     printf("Son kiriting:");
     scanf("%d", &arr[i]);
     if(arr[i]>0){
      sum+=1;
     }
   }
   printf("%d", sum);
}

