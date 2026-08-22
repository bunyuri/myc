#include<stdio.h>

void swap(int *a, int *b){

int temp;

temp = *a;
*a = *b;
*b= temp;

}

int main(){

int a;
int b;

printf("Enter the first number: \n");
scanf("%d", &a);

printf("Enter the second number: \n");
scanf("%d", &b);

printf("Before: a = %d, b = %d\n", a,b);

swap(&a, &b);

printf("After: a = %d, b = %d\n", a,b);

}
