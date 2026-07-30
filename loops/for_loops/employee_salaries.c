#include<stdio.h>
int main(){

int employees;
float salary;
float total = 0;
float average;
float highest = 0;
float lowest;
int counter = 0;

printf("How many employees?\n");
scanf("%d", &employees);

for(int i = 1; i <= employees; i++){

printf("Enter the salary for employee %d\n", i);
scanf("%f", &salary);

total = total + salary;
average = total / i;

if(salary >= highest){
highest = salary;
}

if(i == 1){
lowest = salary;
}
else if(salary <= lowest){
lowest = salary;
}
if(salary >= 2000){
counter++;
}
}

printf("Total payroll: %.2f\n", total);
printf("Average Salary: %.2f\n", average);
printf("Highest salary: %.2f\n", highest);
printf("Lowest salary: %.2f\n", lowest);
printf("Employees earning 2000 or more: %d\n", counter);

}
