#include<stdio.h>
int main(){

int number;
int sum = 0;

printf("Enter the nnumber:\n");
scanf("%d", &number);

for(int i = 1; i <= number; i++ ){
if(i % 2 ==0){
sum = sum + i;
}
}
printf("The sum of even numbers: %d\n", sum);
}
