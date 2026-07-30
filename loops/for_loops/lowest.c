#include<stdio.h>
int main(){

int score;
int students;
int lowest;

printf("How many students?\n");
scanf("%d", &students);

for(int i = 1; i<= students; i++){
printf("Enter the score for student %d: \n", i);
scanf("%d", &score);
if(i == 1){
lowest = score;
}
else if(score < lowest){
lowest = score;
}
}
printf("Lowest: %d\n", lowest);
}
