#include<stdio.h>
int main(){

int menu, deposit, withdraw;

printf("====================\n");
printf("        ATM         \n");
printf("====================\n");
printf("\n");
printf("1. Deposit\n");
printf("2. Withdraw\n");
printf("3. Check Balance\n");
printf("4. Transfer\n");
printf("5. Exit\n");
printf("\n");
printf("Enter a menu number:\n");
scanf("%d", &menu);

switch(menu){

case 1:
printf("Deposit selected\n");
printf("Enter deposit amount:\n");
scanf("%d", &deposit);
printf("%d Deposited Successfully\n", deposit);
break;

case 2:
printf("Withdraw selected\n");
printf("Enter withdraw amount:\n");
scanf("%d", &withdraw);
printf("%d  withdrawn Successfully\n", withdraw);
break;

case 3:
printf("Check Balance selected\n");
break;

case 4:
printf("Transfer selected\n");
break;

case 5:
printf("Thank you for using our AMT\n");
break;

default:
printf("Invalid option\n");
break;
}

}
