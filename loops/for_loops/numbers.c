#include<stdio.h>
int main(){

int number;
int positive = 0;
int negative = 0;
int zeros = 0;

printf("Enter six numbers:\n");
for(int i = 1; i <= 6; i++){
printf("Enter number %d:\n", i);
scanf("%d", &number);

if(number > 0){
positive++;
}
else if(number < 0){
negative++;
}
else if(number == 0){
zeros++;
}
}
printf("Positive numbers: %d\n", positive);
printf("Negative numbers: %d\n", negative);
printf("Zeros: %d\n", zeros);
}
