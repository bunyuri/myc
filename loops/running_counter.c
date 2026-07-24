#include<stdio.h>
int main(){

int number = 1;
int total = 0;

printf("PROGRAM STARTED\n");
while(number <= 5){
total = number + total;
printf("%d\n", number);
printf("Current Total = %d\n", total);
number ++;
}

}
