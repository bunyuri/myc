#include<stdio.h>
int main(){

int numbers[5] = {10, 20, 30, 40, 50};
int *ptr = numbers;

ptr = ptr + 2;
printf("%d\n", *ptr);

ptr = ptr + 2;
printf("%d\n", *ptr);

ptr = ptr - 3;
printf("%d\n", *ptr);
}
