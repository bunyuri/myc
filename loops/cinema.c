#include<stdio.h>
int main(){

int tickets, choice;
int child = 8;
int adult = 15;
int senior = 10;
int total;

printf("====================\n");
printf("RICHARD CINEMAS\n");
printf("====================\n");
printf("\n");
printf("1. Child Ticket\n");
printf("2. Adult Ticket\n");
printf("3. Senior Ticket\n");
printf("Exit\n");
printf("\n");

printf("Choose:\n");
scanf("%d", &choice);

printf("How many tickets?\n");
scanf("%d", &tickets);

if(tickets < 1){
printf("Invalid Quantity\n");
}
else if(tickets >= 10){
printf("Warning!\n");
printf("Large group booking detected\n");
}

switch(choice){

case 1:
printf("Child Ticket = 8\n");
printf("Number of tickets: %d\n", tickets);
total = tickets * 8;
printf("The total is = %d\n", total);

if(tickets >= 5){
printf("Congratulations\n");
printf("You received FREE popcorn\n");
}
if(total > 50){
printf("VIP Customer!\n");
printf("Enjoy a FREE soft drink\n");
}

break;

case 2:
printf("Adult Ticket = 15\n");
printf("Number of tickets: %d\n", tickets);
total = tickets * 15;
printf("The total is = %d\n", total);

if(tickets >= 5){
printf("Congratulations\n");
printf("You received FREE popcorn\n");
}
if(total > 50){
printf("VIP Customer!\n");
printf("Enjoy a FREE soft drink\n");
}

break;

case 3:
printf("Senior Ticket\n");
printf("Number of tickets: %d\n", tickets);
total = tickets * 10;
printf("The total is = %d\n", total);

if(tickets >= 5){
printf("Congratulations\n");
printf("You received FREE popcorn\n");
}
if(total > 50){
printf("VIP Customer!\n");
printf("Enjoy a FREE soft drink\n");
}

break;

case 4:
printf("Thank you!!");
break;

default:
printf("Invalid Input\n");
break;

}

}
