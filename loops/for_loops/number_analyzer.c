#include<stdio.h>
int main(){

int quantity;
int number;
int total = 0;
float average;
int highest;
int lowest;
int even = 0;
int odd = 0;

printf("How many numbers?\n");
scanf("%d", &quantity);

for(int i = 1; i <= quantity; i++){

printf("Enter number %d:\n", i);
scanf("%d", &number);
total = total + number;

if(i == 1){
highest = number;
lowest = number;
}
else if(number < lowest){
lowest = number;
}
else if(number > highest){
highest = number;
}
if(number % 2 == 0){
even++;
}
else{
odd++;
}
}
average = (float) total / (float) quantity;
printf("Total: %d\n", total);
printf("Average: %.2f\n", average);
printf("Highest: %d\n", highest);
printf("Lowest: %d\n", lowest);
printf("Even numbers: %d\n", even);
printf("Odd numbers: %d\n", odd);
}
