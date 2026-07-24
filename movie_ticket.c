#include<stdio.h>
int main(){
int age;

printf("Enter your age\n");
scanf("%d", &age);

if(age < 5){
printf("Free Ticket\n");
}

else if(age >= 5 && age <= 12){
printf("Child Ticket\n");
}

else if(age >= 13 && age <= 17){
printf("Teen Ticket\n");
}

else if(age >= 18 && age <= 64){
printf("Adult Ticket\n");
}

else if(age >= 65){
printf("Senior Ticket\n");
}

else if(age < 0 && age > 100 ){
printf("Invalid Age\n");
}
}
