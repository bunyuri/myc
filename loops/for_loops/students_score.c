#include<stdio.h>
int main(){

int students;
float score;
int pass = 0;
int fail = 0;
int excellent = 0;
float highest; 

printf("How many students:\n");
scanf("%d", &students);

for(int i = 1; i <= students; i++){

printf("Enter the score for student %d\n", i);
scanf("%f", &score);

if(score > highest){
highest = score;
}

if(score >= 80){
printf("EXCELLENT\n");
excellent++;
}

else if(score >= 50 && score <= 79){
printf("PASS\n");
pass++;
}

else{
printf("FAIL\n");
fail++;
}
}
printf("Excellent: %d\n", excellent);
printf("Passed: %d\n", pass);
printf("Failed: %d\n", fail);
printf("Highest: %.2f\n", highest);
}
