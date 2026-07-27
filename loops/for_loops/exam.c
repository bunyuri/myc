#include<stdio.h>
int main(){

int students;
int score;
int total=0; 
float average; 

printf("How many students took the exam?\n");
scanf("%d", &students);

for(int i = 1; i <= students; i++){
printf("Enter the score for student %d: \n", i);
scanf("%d", &score);
total = total + score;
}
average = total/students;
printf("The total is: %d\n", total);
printf("The Average is: %f\n", average);
}
