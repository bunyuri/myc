#include<stdio.h>
int main(){
int balance;

printf("Enter the bank balancce:\n");
scanf("%d", &balance);

if(balance >= 1000){
printf("Premium customer\n");
}

else{
printf("Standard customer\n");
}
}
