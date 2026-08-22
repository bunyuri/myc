#include<stdio.h>
int main(){

int numbers[3] = {10, 20, 30};
int *ptr = numbers;

printf("%d\n", *ptr);
ptr++;
*ptr = 99;
printf("%d\n", *ptr);
ptr++;
printf("%d\n", *ptr);

}
