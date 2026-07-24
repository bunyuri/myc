#include<stdio.h>
int main(){

int number;

printf("Enter a day number\n");
scanf("%d", &number);

switch(number){

case 1:
printf("Monday\n");
printf("Weekday\n");
break;

case 2:
printf("Tuesday\n");
printf("Weekday\n");
break;

case 3:
printf("Wednesday\n");
printf("Weekday\n");
break;

case 4:
printf("Thursday\n");
printf("Weekday\n");
break;

case 5:
printf("Friday\n");
printf("Weekday\n");
break;

case 6:
printf("Saturday\n");
printf("Week-end\n");
break;

case 7:
printf("Sunday\n");
printf("Week-end\n");
break;

default:
printf("Invalid day\n");
break;

}

}
