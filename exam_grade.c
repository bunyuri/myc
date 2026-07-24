#include<stdio.h>
int main(){
float score;

printf("Enter the score:\n");
scanf("%f", &score);

if(score >= 90 && score <= 100){
printf("GRADE A\n");
}

else if(score >= 80 && score <= 89){
printf("GRADE B\n");
}

else if(score >= 70 && score <= 79){
printf("GRADE C\n");
}

else if(score >= 60 && score <= 69){
printf("GRADE D\n");
}

else if(score < 60){
printf("FAIL\n");
}

else if(score < 0 || score > 100){
printf("Invalid Score\n");
}
}
