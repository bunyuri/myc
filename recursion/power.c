#include<stdio.h>

int power(int base, int exponent){

if (exponent == 0){
return 1;
}
return base * power(base, exponent - 1);
}

int main(){

int number;
int pow;
int solution;

printf("Enter the number:\n");
scanf("%d", &number);

printf("To the power of: \n");
scanf("%d", &pow);

solution = power(number, pow);

printf("%d to the power of %d = %d\n", number, pow, solution);

}
