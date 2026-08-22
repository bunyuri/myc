#include<stdio.h>

void swap(int *a, int *b){

int temp;

temp = *a;
*a = *b;
*b = temp;

printf("The numbers after swap:\n");
printf("%d\n", *a);
printf("%d\n", *b);

}

int main(){

int x;
int y;

printf("Enter the first number:\n");
scanf("%d", &x);
printf("Enter the second number:\n");
scanf("%d", &y);

printf("The numbers before swap:\n");
printf("%d\n", x);
printf("%d\n", y);
printf("\n");

swap(&x, &y);

}
