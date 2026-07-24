#include<stdio.h>
int main(){

int choice, amount;
float burger = 8.50;
float pizza = 12.00;
float pasta = 10.50;
float salad = 6.00;
float total;

printf("====================\n");
printf(" RICKY'S RESTAURANT\n");
printf("====================\n");
printf("\n");
printf("1. Burger ($8.50)\n");
printf("2. Pizza  ($12.00)\n");
printf("3. Pasta  ($10.50)\n");
printf("4. Salad  ($6.00)\n");
printf("5. Exit\n");
printf("\n");
printf("Enter your choice:\n");
scanf("%d", &choice);

switch(choice){

case 1:
printf("How many burgers?\n");
scanf("%d", &amount);

if(amount > 0){
total = amount * burger;
printf("Total: %.2f\n", total);
if(total > 50){
printf("Congratulations!\n");
printf("You earned a FREE drink!\n");
}
}
else{
printf("Invalid Quantity\n");
}
break;

case 2:
printf("How many Pizzas?\n");
scanf("%d", &amount);

if(amount > 0){
total = amount * pizza;
printf("Total: %.2f\n", total);
if(total > 50){
printf("Congratulations!\n");
printf("You earned a FREE drink!\n");
}
}
else{
printf("Invalid Amount\n");
}
break;

case 3:
printf("How many pastas?\n");
scanf("%d", &amount);

if(amount > 0){
total = amount * pasta;
printf("Total: %.2f\n", total);
if(total > 50){
printf("Congratulations!\n");
printf("You earned a FREE drink!\n");
}
}
else{
printf("Invalid Amount\n");
}
break;

case 4:
printf("How many salads?\n");
scanf("%d", &amount);

if(amount > 0){
total = amount * salad;
printf("Total: %.2f\n", total);
if(total > 50){
printf("Congratulations!\n");
printf("You earned a FREE drink!\n");
}
}
else{
printf("Invalid Amount\n");
}
break;

case 5:
printf("Thank you for visiting\n");
break;

default:
printf("Invalid Menu Option\n");
break;
}

}
