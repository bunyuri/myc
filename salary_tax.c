#include<stdio.h>
int main(){
int salary;

printf("Enter the salary:\n");
scanf("%d", &salary);

if(salary < 20000){
printf("No Tax\n");
}

else if(salary >= 20000 && salary <= 49999){
printf("10 percent TAX\n");
}

else if(salary >= 50000 && salary <= 99999){
printf("20 percent TAX\n");
}

else if(salary >= 100000){
printf("30 percent TAX\n");
}
}
