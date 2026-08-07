#include<stdio.h>

int factorial(int number){

int fact = 1;
for(int i = 1; i <= number; i++){
fact = fact * i;
}
return fact;

}

int main(){

int num;
int fact;

printf("Enter the number:\n");
scanf("%d", &num);

fact = factorial(num);

printf("Factoria: %d\n", fact);

}
