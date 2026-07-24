#include<stdio.h>
int main(){

int age, score, income, failed;

printf("Enter your age:\n");
scanf("%d", &age);

printf("Enter your score:\n");
scanf("%d", &score);

printf("Enter your income:\n");
scanf("%d", &income);

printf("Enter the number of failed courses:\n");
scanf("%d", &failed);

if(age < 0 || score < 0 || score > 100 || income < 0 || failed < 0){
printf("Invalid Input\n");
}

else if(age >= 18 && score >= 70){
printf("Admission granted\n");

if(income < 1000){
printf("Financial aid approved\n");
}
else{
printf("Financial aid not approved\n");
}

if(score >= 90 && score <= 100){
printf("Full scholarship\n");
}
else if (score >= 80 && score <= 89){
printf("Half Scholarship\n");
}
else if (score >= 70 && score <= 79){
printf("No scholarship\n");
}

if(failed >= 3){
printf("Academic warning\n");
}
else{
printf("Good Academic Standing\n");
}
}
else{
printf("Admission denied\n");
}

}

