#include<stdio.h>

void double_number(int *x){

*x = *x * 2;
printf("%d\n", *x);

}

int main(){

int number;

printf("Enter a number: \n");
scanf("%d", &number);

double_number(&number);

}
