#include<stdio.h>

int power(int base, int exponent){
int power = 1;

for(int i = 1; i <= exponent; i++){
power = power * base;
}
return power;
}
int main(){

int base;
int exponent;
int final;

printf("Enter the base:\n");
scanf("%d", &base);

printf("Enter the exponent:\n");
scanf("%d", &exponent);

final = power(base, exponent);

printf("%d\n", final);

}
