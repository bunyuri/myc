#include<stdio.h>

int factorial(int n){

int fact = n - 1;

if(n == 1){
return 1;
}
return n * factorial(n - 1);

}


int main(){

int number;

printf("Enter the number:\n");
scanf("%d", &number);

printf("%d\n", factorial(number));

}
