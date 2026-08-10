#include<stdio.h>
int main(){

int number[5];
int small;

for(int i = 0; i <= 4; i++){
printf("Enter number %d\n", i + 1);
scanf("%d", &number[i]);
}

small = number[0];

for(int i = 0; i <= 4; i++){
if(small > number[i]){
small = number[i];
}
}
printf("Smallest number: %d\n", small);
}
