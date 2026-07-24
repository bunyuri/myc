#include<stdio.h>
int main(){

int choice;
int months;
int counter = 1;

while(choice !=  4){


printf("====================\n");
printf("RICHARD'S GYM\n");
printf("====================\n");
printf("\n");
printf("1. Buy Membership\n");
printf("2. Check Membership Prices\n");
printf("3. View Promotions\n");
printf("4. Exit\n");
printf("\n");

printf("Choose:\n");
scanf("%d", &choice);

switch(choice){

case 1: 
printf("Choose Membership:\n");
printf("1. 1 Month\n");
printf("2. 3 Month\n");
printf("3. 6 Month\n");
scanf("%d", &months);
if(months == 1){
printf("30 Dollars\n");
}
else if(months == 3){
printf("80 Dollars\n");
printf("Free shaker bottle\n");
}
else if(months == 6){
printf("150 Dollars\n");
printf("VIP Member\n");
printf("FREE T-SHIRT\n");
}
else{
printf("Invalid Input\n");
}
break;

case 2: 
printf("GYM MEMBERSHIP PRICES\n");
printf("\n");
printf("1 Month = 30 Dollars\n");
printf("3 Month = 80 Dollars\n");
printf("6 Month = 150 Dollars\n");
break;

case 3: 
printf("3 Month Membership = Free shaker bottle\n");
printf("6 Month Mmbership = Free T-Shirt\n");
break;

case 4:
printf("Thank you for joining RICHARD'S gym.\n");
printf("Goodbye\n");
break;

default:
printf("Invalid Choice\n");
break;
}
counter ++;
}
}
