#include<stdio.h>
int main(){

int a,b,solution;

printf("Choose operation:\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
scanf("%d",&solution);

printf("Enter the first number:\n");
scanf("%d", &a);

printf("Enter the second number:\n");
scanf("%d", &b);

switch(solution){

case 1:
printf("The sum is: %d\n", a+b);
break;

case 2:
printf("The answer is: %d\n", a-b);
break;

case 3:
printf("The answer is: %d\n", a*b);
break;

case 4:
printf("The answer is: %d\n", a/b);
break;

default:
printf("Invalid operation!\n");
break;
}

}
