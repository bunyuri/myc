#include<stdio.h>

int add(int a, int b){
return a + b;
}

int substract(int a, int b){
return a - b;
}

int multiply(int a, int b){
return a * b;
}
char isEven(int number){
if(number % 2 == 0){
return 'Y';
}
else{
return 'N';
}
}

int main(){

int num1;
int num2;
int num3;
int sum;
int sub;
int mult;
char e;

printf("Enter first number:\n");
scanf("%d", &num1);

printf("Enter second number:\n");
scanf("%d", &num2);

sum = add(num1, num2);
sub = substract(num1, num2);
mult = multiply(num1, num2);

printf("Addition: %d\n", sum);
printf("Substraction: %d\n", sub);
printf("Multiplication: %d\n", mult);

printf("Enter another number:\n");
scanf("%d", &num3);

e = isEven(num3);

printf("Even?: %c\n", e);


}
