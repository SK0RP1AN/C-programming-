#include <stdio.h>

int main(){
  float Maths, Physics, PPS, Graphics, EE;

  printf("enter Maths marks : ");
  scanf("%f", &Maths);

  printf("enter Physics marks : ");
  scanf("%f", &Physics);

  printf("enter PPS marks : ");
  scanf("%f", &PPS);

  printf("enter Graphics marks : ");
  scanf("%f", &Graphics);

  printf("enter EE marks : ");
  scanf("%f", &EE);

  float sum = Maths + PPS + EE + Graphics +Physics;
  float percentage = sum/5;

  if ( percentage >= 100 && percentage > 90 ){
    printf("percentage: %f \n grade A", percentage);
  }
  else if (percentage >= 90 && percentage >80){
    printf("percentage: %f \n grade B", percentage);
  }
  else if (percentage >= 80 && percentage >60){
    printf("percentage: %f \n grade C", percentage);
  }
  else{printf("percentage: %f \n grade D", percentage);}


    return 0;
}