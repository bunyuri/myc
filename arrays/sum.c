#include<stdio.h>
int main(){

int number[5];
int sum = 0;
float avg = 0;

for(int i = 0; i <= 4; i++){
printf("Enter number %d: ", i + 1);
scanf("%d", &number[i]);
}

for(int i = 0; i <= 4; i++){
sum = sum + number[i];
}
avg = (float) sum / 5;
printf("Sum: %d\n", sum);
printf("Average: %.2f\n", avg);
}
