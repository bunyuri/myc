#include<stdio.h>
int main(){
printf("====================\n");
printf("   RICHARD BANK   \n");
printf("====================\n");
printf("\n");
printf("1. Deposit\n");
printf("2. Withdraw\n");
printf("3. Check Balance\n");
printf("4. Exit\n");
printf("\n");
printf("Choose an option:\n");
int choice;
float balance = 1000.00;
float amount;

scanf("%d", &choice);

switch(choice){

case 1:
printf("How much would you like to deposit?\n");
scanf("%f", &amount);
if (amount > 0){
balance = amount + balance;
printf("New Balance: %.2f\n", balance);
if(balance > 5000){
printf("VIP Customer\n");
}
else if(balance < 100){
printf("Warning!\n");
printf("Low account balance\n");
}
}
else{
printf("Invalid deposit amount\n");
}
break;

case 2:
printf("How much would you like to withhdraw?\n");
scanf("%f", &amount);
if(amount <= 0){
printf("Invalid withdrawal amount\n");
}
else if(amount > balance){
printf("Insufficient funds\n");
}
else if(amount > 5000){
printf("Security alert!\n");
printf("Large withdrawal detected\n");
if(balance < 100){
printf("Warning!\n");
printf("Low account balance\n");
}
}
else if(amount >=  100){
balance = balance - amount - 2.50;
printf("Withdrawal successful\n");
printf("Fee: 2.50\n");
printf("Remaining balance: %.2f\n", balance);
if(balance < 100){
printf("Warning!\n");
printf("Low account balance\n");
}
}
else{
printf("Withdrawal successful\n");
balance = balance - amount;
printf("Fee: 0.00\n");
printf("Remaining balance: %.2f\n", balance);
if(balance < 100){
printf("Warning!\n");
printf("Low account balance\n");
}
}
break;

case 3:
printf("Current Balance: %.2f\n", balance);
if(balance == 0){
printf("Warning!\n");
printf("Your account is empty.\n");
}
else if(balance > 0 && balance < 100){
printf("Low balance\n");
}
else if(balance >= 100 && balance < 500){
printf("Healthy\n");
}
else if(balance >= 5000){
printf("Premium Customer\n");
}
break;

case 4:
printf("Thank you for banking with Richard bank!\n");
break;

default:
printf("Invalid option\n");
break;

}
}
