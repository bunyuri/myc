#include<stdio.h>
int main(){

int choice = 0;
int room;
int nights;
int total;

while(choice != 4){

printf("====================\n");
printf("RICHARD'S HOTEL\n");
printf("====================\n");
printf("\n");
printf("1. Book a Room\n");
printf("2. Check Prices\n");
printf("3. View Promotions\n");
printf("4. Exit\n");
printf("\n");

printf("Choose:\n");
scanf("%d", &choice);

switch(choice){

case 1: 
printf("Book a Room\n");
printf("\n");
printf("1. Standard Room\n");
printf("2. Deluxe Room\n");
printf("3. Presidential Suite\n");
printf("\n");
printf("Choose room: \n");
scanf("%d", &room);
printf("How many nights?\n");
scanf("%d", &nights);
if (room == 1){
total = nights * 80;
printf("Total:%d\n", total);
} 
else if(room == 2){
total = nights * 150;
printf("Total: %d\n", total);
}
else if(room == 3){
total = nights * 500;
printf("Total: %d\n", total);
}
else{
printf("Invalid input\n");
}
if(nights >= 3){
printf("Congratulations\n");
printf("FREE Breakfast Included.\n");
}
if(nights >= 7){
printf("Congratulations\n");
printf("FREE SPA INCLUDED!\n");
}
if(total > 1000){
printf("VIP CUSTOMER\n");
printf("FREE Airport Pickup Included\n");
}
break;

case 2:
printf("STANDARD = 80 DOLLARS\n");
printf("DELUXE = 150 DOLLARS\n");
printf("PRESIDENTIAL = 500 DOLLARS\n");
break;

case 3:
printf("3 Nights = FREE Breakfast\n");
printf("More than 1000 Dollars = FREE Airport Pickup\n");
printf("7 Nights = FREE SPA ACCESS\n");
break;

case 4:
printf("Thannk you for choosing\n");
printf("RICHARD'S HOTEL\n");
printf("\n");
printf("GOODBYE.\n");
break;

default:
printf("Invalid Input\n");
break;
}
}
}
