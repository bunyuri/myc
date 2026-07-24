#include<stdio.h>
int main(){
float bmi;

printf("Enter the BMI:\n");
scanf("%f", &bmi);

if(bmi < 18.5){
printf("Underweight\n");
}

else if(bmi >= 18.5 && bmi <= 24.9){
printf("Normal\n");
}

else if(bmi >= 25.0 && bmi <= 29.0){
printf("Overweight\n");
}

else if(bmi >= 30){
printf("OBESE\n");
}
}
