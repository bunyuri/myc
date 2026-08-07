#include<stdio.h>

char isPrime(int number){

for(int i = 2; i < number; i++){

if(number % i == 0){
return 'N';
}
}
return 'Y';
}

int main(){

int number;
char p;

printf("Enter the number:\n");
scanf("%d", &number);

p = isPrime(number);

printf("PRIME? %c\n", p);

}
