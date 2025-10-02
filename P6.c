#include <stdio.h>

int main(){
    int Num1,Num2;

    printf("enter first number :");
    scanf("%d", &Num1);

    printf("enter second number :");
    scanf("%d", &Num2);

    if (Num1 == Num2){
        printf("Both numbers are equal");
    } 
    
    else{printf("Numbers not equal");}

    return 0;
}