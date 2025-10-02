#include <stdio.h>

int main(){
    float TempC, TempF;

    printf("Enter temperature in centigrade :");
    scanf("%f", &TempC);

    TempF = TempC*1.8 + 32;
    printf("temperature in farenheit  = %f", TempF);
    
    return 0;
}