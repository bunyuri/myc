#include<stdio.h>

void change(int *x){

*x = 100;
printf("%d\n", *x);

}

int main(){

int number = 50;

change(&number);

}
