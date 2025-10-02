#include <stdio.h>

int main(){
   int Num1, Num2, Num3;

   printf("enter the first number: ");
   scanf("%d", &Num1);

   printf("enter the second number: ");
   scanf("%d", &Num2);

   printf("enter the third number: ");
   scanf("%d", &Num3);


   if (Num1 > Num2 && Num1 > Num3){
    printf("%d is the greatest", Num1);  }
    
   else if (Num2 > Num1 && Num2 > Num3 ){
    printf("%d is the greatest", Num2);  }
   
   else{printf("%d is the greatest", Num3);}

   
    return 0 ;
}