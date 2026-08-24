#include<stdio.h>

void update_salary(int *salary, int *bonus){

int percentage;
percentage = *salary * 10 / 100;
*salary = *salary + percentage + *bonus;
printf("Updated salary: %d\n", *salary);

*bonus = 0;
printf("Updated bonus: %d\n", *bonus);

}

int main(){

int sal = 3000;
int bon = 500;

update_salary(&sal, &bon);

}
