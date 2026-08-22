#include<stdio.h>
int main(){

int number = 10;
int *ptr = &number;

printf("Before: %d\n", number);

*ptr = 25;

printf("After: %d\n", number);

return 0;

}
