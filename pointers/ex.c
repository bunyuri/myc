#include<stdio.h>
int main(){

int numbers[5] = {10, 20, 30, 40, 50};
int *ptr = numbers;

printf("%d\n", *ptr);

ptr++;
ptr++;

printf("%d\n", *ptr);

ptr --;

printf("%d\n", *ptr);

}
