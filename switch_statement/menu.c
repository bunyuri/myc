#include<stdio.h>
int main(){

int choice;

printf("Enter your choice:\n");
scanf("%d", &choice);

switch(choice){

case 1: 
printf("Deposit Selected\n");
break;

case 2:
printf("Withdraw Selected\n");
break;

case 3:
printf("Balance Selected\n");
break;

case 4:
printf("Exi Selected\n");
break;

default:
printf("Invalid Option\n");
break;
}
}
