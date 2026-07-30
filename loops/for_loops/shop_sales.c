#include<stdio.h>
int main(){

int products;
float price;
float total = 0;
float average;
float highest = 0;
float lowest;
int counter = 0;

printf("How many products were sold?\n");
scanf("%d", &products);

for(int i = 1; i <= products; i++){

printf("Enter the price of product %d \n", i);
scanf("%f", &price);

total = total + price;
average = total/i;

if(price >= highest){
highest = price;
}
if( i == 1){
lowest = price;
}
else if(price < lowest){
lowest = price;
}
if(price >= 50){
counter++;
}
}
printf("The total is: %.2f\n", total);
printf("The Average is: %.2f\n", average);
printf("The Highest is: %.2f\n", highest);
printf("The Lowest is: %.2f\n", lowest);
printf("Products 50 or more: %d\n", counter);
}
