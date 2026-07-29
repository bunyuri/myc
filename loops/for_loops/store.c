#include<stdio.h>
int main(){

int items;
float price;
int counter = 0;
float total = 0;

printf("Enter the number of sold items today:\n");
scanf("%d", &items);

for(int i = 1; i<= items; i++){
printf("Enter the price for item %d:\n", i);
scanf("%f", &price);
if(price >= 50){
printf("Expensive Item\n");
counter ++;
}

else{
printf("Regular Item\n");
}
total = total + price;
}
printf("Total: %f\n", total);
printf("Expensive items: %d\n", counter);
}
