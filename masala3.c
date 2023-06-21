#include <stdio.h>
#include <math.h>
int main(){

   int arr[4];
   for(int i=0; i<4; i++){
    printf("Son kiriting:");
    scanf("%d", &arr[i]);
     if(arr[i]%2!=0){
       if(arr[i]>0){
        arr[i]=0-arr[i];
       }
     }
   }
   printf("%d\n", arr[i]);
}
