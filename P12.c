#include <stdio.h>

int main(){
    int number,i;
    int sum=0; 

   printf("Pick a numbers:");
   scanf("%d", &number);

   for(i=1 ; i<=number ; i++){
    sum += i;
   }

   printf("%d", sum);

return 0;
}
