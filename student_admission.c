#include<stdio.h>
int main(){

int age;
float score;
int recommendation; 

printf("Enter your age:\n");
scanf("%d", &age);

printf("Enter your score:\n");
scanf("%f", &score);

printf("Do you have recommendation? (1 = Yes, 0 = No): \n");
scanf("%d", &recommendation);

if(age < 0 || score < 0 || score > 100){
printf("Invalid Input\n");
}

else if(age >= 18 && score >= 70){
printf("Admission Granted\n");
if(score >= 90 && score <= 100){
printf("Full Scholarship\n");
}
else if(score >= 80 && score <= 89){
printf("Half Scholarship\n");
}
else if(score >= 70 && score <= 79){
printf("No Scholarship\n");
}
}

else{
printf("Admission Denied\n");
if(score >= 65 && recommendation == 1){
printf("Waitlist Candidate\n");
}
}
}
