#include <stdio.h>

int main(){
    int Numbers, num;
    int sum=0; 

   printf("Pick a numbers:");
   scanf("%d", &Numbers);

   for(num=1 ; num<Numbers ; num++){
    sum += num;
   }

   printf("%d", sum);

return 0;
}
