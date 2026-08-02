#include<stdio.h>

int result(int a, int b){
return a + b;
}

int main(){

int sum;
int first, second;

printf("Enter the first number:\n");
scanf("%d", &first);

printf("Enter the second number:\n");
scanf("%d", &second);

sum = result(first, second);

printf("Sum = %d\n", sum);

return 0;
}
