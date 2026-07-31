#include<stdio.h>
int main(){

int number;
int sum = 0;

printf("Enter a positive number:\n");
scanf("%d", &number);

if(number <= 0){
printf("Invalid number\n");
}

else{
printf("\n");
for(int i = number; i >= 1; i--){
printf("%d\n", i);
sum = sum + i;
}
printf("\n");
printf("sum: %d\n", sum);
}

}
