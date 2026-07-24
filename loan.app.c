#include<stdio.h>
int main(){

int age, salary;

printf("Enter the age:\n");
scanf("%d", &age);

printf("Enter the salary:\n");
scanf("%d", &salary);

if(age >= 18){
  if(salary >= 1000){
   printf("Loan approved\n");
}
  else{
  printf("salary low\n");
}
}
else{
printf("Age is low and Must be 18 or older\n");
}


}
