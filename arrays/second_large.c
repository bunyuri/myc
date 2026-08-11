#include<stdio.h>
int main(){

int numbers[5];
int large;
int second;

for(int i = 0; i < 5; i++){
printf("Enter number %d: ", i + 1);
scanf("%d", &numbers[i]);
}

large = numbers[0];
second = numbers[0];

for(int i = 0; i < 5; i++){

if(numbers[i] > large){
second = large;
large = numbers[i];
}
else if(numbers[i] > second){
second = numbers[i];
}
}
printf("The largest number is: %d\n", large);
printf("The second largest is: %d\n", second);
}
