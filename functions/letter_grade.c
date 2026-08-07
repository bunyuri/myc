#include<stdio.h>

char grade(int mark){

if(mark >= 90 && mark <= 100){
return 'A';
}
else if(mark >= 80 && mark <= 89){
return 'B';
}
else if(mark >= 70 && mark <= 79){
return 'C';
}
else if(mark <  70){
return 'F';
}
}

int main(){

int mark;
char letter;

printf("Enter the grade: \n");
scanf("%d", &mark);

letter = grade(mark);
printf("%c", mark);

}
