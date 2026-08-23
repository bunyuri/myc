#include<stdio.h>
int main(){

int numbers[6] = {10, 20, 30, 40, 50, 60};
int *ptr = numbers;

printf("%d\n", *ptr);
ptr = ptr + 2;
printf("%d\n", *ptr);
ptr = ptr + 2;
printf("%d\n", *ptr);
ptr = ptr - 1;
printf("%d\n", *ptr);

}
