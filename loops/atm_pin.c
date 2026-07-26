#include<stdio.h>
int main(){

int pin = 1234;
int enteredpin;
int attempts = 1;
int choice = 0;
int balance = 1000;
int deposit; 
int withdraw;

while(attempts <= 3){

printf("Enter PIN:\n");
scanf("%d", &enteredpin);
if(enteredpin == pin){
while(choice != 4){
printf("Welcome Ricky!\n");
printf("========== ATM ==========\n");
printf("1. Check Balance\n");
printf("2. Deposit\n");
printf("3. Withdraw\n");
printf("4. Exit\n");

printf("Choose Option:\n");
scanf("%d", &choice);
switch(choice){

case 1: 
printf("The Balance is:%d\n", balance);
break;

case 2:
printf("Deposit Amount:\n");
scanf("%d", &deposit);
balance = balance + deposit;
printf("New Balance:%d\n", balance);
break;

case 3:
printf("Withdraw Amount:\n");
scanf("%d", &withdraw);
if(withdraw > balance){
printf("Not enough money\n");
}
else{
balance = balance - withdraw;
printf("Remaining balance:%d\n", balance);
}
break;

case 4:
printf("Goodbye Ricky!\n");
break;

default:
printf("Invalid choice\n");
break;
}
}
break;
}
else{
printf("Wrong Pin!\n");
}
attempts++;
if(attempts > 3){
printf("Account Locked\n");
}
}
}
