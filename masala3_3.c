#include <stdio.h>

int main(){

   int arr[5];
   for(int i=1; i<5; i++){
     printf("Son kiriting:");
     scanf("%d", &arr[i]);
     if(i%2!=0){
      i=0-arr[i];
     }
  }
   printf("%d\n", i);
}
