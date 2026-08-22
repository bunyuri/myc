#include<stdio.h>

void change_numbers(int *a, int *b){

*a = 100;
*b = 200;

printf("%d\n", *a);
printf("%d\n", *b);

}

int main(){

int x = 10;
int y = 20;

change_numbers(&x, &y);

}
