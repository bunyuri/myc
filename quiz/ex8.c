#include<stdio.h>
int main(){

int number[5];
float average;
int sum = 0;

for(int i = 0; i < 5; i++){
printf("Enter number %d: \n", i + 1);
scanf("%d", &number[i]);
}

for(int i = 0; i < 5; i++){
sum = sum + number[i]; 
}
average = (float) sum / 5;
printf("%.2f\n", average);
}
