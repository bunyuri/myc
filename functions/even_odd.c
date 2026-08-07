#include<stdio.h>

void evenOdd(int number){

if(number % 2 == 0){
printf("Even Number\n");
}

else{
printf("Odd Number\n");
}

}

int main(){

int num;

printf("Enter the number\n");
scanf("%d", &num);

evenOdd(num);

}
