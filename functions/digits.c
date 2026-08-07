#include<stdio.h>

int digits(int number){
int counter = 0;

while(number > 0){
number = number / 10;
counter = counter + 1;
}
return counter;

}

int main(){

int num;
int count;

printf("Enter a number:\n");
scanf("%d", &num);

count = digits(num);

printf("Digits: %d\n", count);

}
