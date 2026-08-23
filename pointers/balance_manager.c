#include<stdio.h>

void transaction(int *balance, int amount){

if(*balance + amount < 0){
printf("Insufficient funds\n");
printf("Balance: %d\n", *balance);
}
else{
*balance = *balance + amount;
printf("New balance: %d\n", *balance);
}
}


int main(){

int bal = 1000;
int amt;

printf("Enter the transaction amount: \n");
scanf("%d", &amt);

transaction(&bal, amt);

}
