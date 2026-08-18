#include<stdio.h>
int main(){

int number[5];
int large = 0;

for(int i = 0; i < 5; i++){
printf("Enter number %d:\n", i + 1);
scanf("%d", &number[i]);
}

large = number[0];

for(int i = 0; i < 5; i++){
if(large <= number[i]){
large = number[i];
}
}
printf("The largest number is: %d\n", large);
}
