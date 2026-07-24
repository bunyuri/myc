#include<stdio.h>
int main(){

float hours, percentage;
float rate, gross, tax, net;

printf("Enter the hours worked:\n");
scanf("%f", &hours);

printf("Enter the hourly rate:\n");
scanf("%f", &rate);

printf("Enter the tax percentage:\n");
scanf("%f", &percentage);

gross = rate * hours;
tax = (gross * percentage)/100;
net = gross - tax;

printf("Gross salary: %.2f\n", gross);
printf("Tax Amount: %.2f\n", tax);
printf("Net Salary: %.2f\n", net);


}
