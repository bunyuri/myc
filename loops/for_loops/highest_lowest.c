#include<stdio.h>
int main(){

int numbers;
int quantity;
int maximum;
int minimum;

printf("How many numbers?\n");
scanf("%d", &quantity);

for(int i = 1; i <= quantity; i++){
printf("Enter number %d:\n", i);
scanf("%d", &numbers);

if(i == 1){
maximum = numbers;
minimum = numbers;
}
else if(numbers >= maximum){
maximum = numbers;
}
else if(numbers <= minimum){
minimum = numbers;
}
}
printf("Highest: %d\n", maximum);
printf("Lowest: %d\n", minimum);
}
