#include<stdio.h>

void swap(int *a, int *b){

*a = 20;
*b = 10;

}

int main(){

int a = 10;
int b = 20;

printf("Before: a =  %d, b = %d\n", a,b);

swap(&a, &b);

printf("After: a = %d, b = %d\n", a,b);

}
