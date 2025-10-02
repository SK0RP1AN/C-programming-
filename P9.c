#include <stdio.h>

int main(){
    
   int year ;
   printf("Enter a Year: ");
   scanf("%d", &year);

   if (year%4 == 0 && year%100 != 0){
    printf("its a leap year");}
   
   else if (year%100 == 0 && year%400 == 0){
    printf("Its a leap year");}
   
   else {printf("Not a leap year");}


    return 0;
}