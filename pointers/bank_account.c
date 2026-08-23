#include<stdio.h>

void deposit(int *balance, int amount){

*balance = *balance + amount;
printf("New Balance: %d\n", *balance);
}

void withdraw(int *balance, int amount){

if(*balance < amount){
printf("Insufficient funds\n");
}
else{

*balance = *balance - amount;
printf("Withdraw successful!\n");
printf("New balance: %d\n", *balance);

}
}

int main(){

int balance = 1000;
int dep;
int with;

printf("Enter the deposit amount:\n");
scanf("%d", &dep);

deposit(&balance, dep);

printf("Enter the withdraw amount: \n");
scanf("%d", &with);

withdraw(&balance, with);

}
