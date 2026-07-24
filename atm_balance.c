#include<stdio.h>
int main(){

int balance;
int withdraw;

printf("Enter the balance:\n");
scanf("%d", &balance);

printf("Withdrawal amount:\n");
scanf("%d", &withdraw);

if(withdraw <= balance){
printf("Transaction successful\n");
}

else{
printf("Insufficient funds\n");
}
}
