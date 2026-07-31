#include<stdio.h>
int main(){

int number;
int mult;

printf("Enter the number:\n");
scanf("%d", &number);

for(int i = 1; i <= 10; i++){
mult = number * i;
printf("%d * %d = %d\n", number, i, mult);
}
}
