#include<stdio.h>

int main(){

int number[5];
int large;

for(int i = 0; i <= 4; i++){

printf("Enter number %d: \n", i + 1);
scanf("%d", &number[i]);
}

large = number[0];

for(int i = 0; i <= 4; i++){

if(number[i] >= large){
large = number[i];
}
}
printf("Largest number: %d\n", large);
}
