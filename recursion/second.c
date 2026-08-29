#include<stdio.h>

void count_up(int n){

if(n == 6){
return;
}
printf("%d\n", n);
count_up(n + 1);
}

int main(){

int number;

printf("Enter the number: \n");
scanf("%d", &number);

count_up(number);

}
