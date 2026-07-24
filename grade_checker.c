#include<stdio.h>
int main(){

float score;

printf("Enter the score:\n");
scanf("%f", &score);

if(score == 100){
printf("Perfect score!\n");
}

else if(score == 50){
printf("Just passed!");
}

else if(score == 0){
printf("You scored zero\n");
}

else{
printf("Invalid value\n");
}
}
