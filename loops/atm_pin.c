#include<stdio.h>
int main(){

int pin = 1234;
int enteredpin;
int attempts = 1;
while(attempts <= 3){

printf("Enter PIN:\n");
scanf("%d", &enteredpin);
if(enteredpin == pin){
printf("Welcome Ricky!\n");
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
