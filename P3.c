#include <stdio.h>

int main(){
    float Radius, Area, Circumference;

    printf("Enter radius of circle :");
    scanf("%f", &Radius);

    Area = 3.14*Radius*Radius;
    Circumference = 2*3.14*Radius;

    printf("Cirucmeference = %f\nArea=%f", Circumference, Area);
    
    return 0;
}