#include <stdio.h>

int main(){
    int Num1,Num2;

    printf("enter first number :");
    scanf("%d", &Num1);

    printf("enter second number :");
    scanf("%d", &Num2);

    int Num3;
    Num3 = Num1;
    Num1 = Num2;
    Num2 = Num3; 

    printf("Num1 = %d \nNum2 = %d", Num1, Num2);

    return 0;
}