#include<stdio.h>

int main(){

float cel,far;

printf("Enter the temperature:\n");
scanf("%f", &cel);
far = (cel*9/5) + 32;
printf("%.2f C = %.2f F\n", cel, far);

}
