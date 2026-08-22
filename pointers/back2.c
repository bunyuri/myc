#include<stdio.h>
int main(){

int numbers[4] = {10, 20, 30, 40};
int *ptr = numbers;

ptr = ptr + 3;

printf("%d\n", *ptr);

}
