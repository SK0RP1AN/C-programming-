#include <stdio.h>

int main(){
   int Num1, Num2;
   printf("First Number :");
   scanf("%d", &Num1);

   printf("Second Number:");
   scanf("%d", &Num2);
   
   
   char operator; 
   printf("What function would you like to perfom: \n + \n - \n *\n /\n Enter: ");
   scanf(" %c", &operator);
   

   int sum = 0 , subtract= 0, divide= 0, multiply= 0;

   switch (operator) {
   case '+':
      sum = Num1 + Num2 ;
      printf("The sum of these numbers are : %d", sum);
      break;
    case '-':
       subtract = Num1 - Num2;
       printf("The subtraction of these numbers are : %d", subtract);
       break;
    case '*':
       multiply = Num1 * Num2;
       printf("the multiplication of these numbers are : %d", multiply);
       break;
    
    case '/':
       divide = Num1/Num2;
       printf("The division of these numbers are : %d", divide);
       break;
   }


    return 0;
}