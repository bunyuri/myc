#include<stdio.h>

void count_down(int n){

if(n == 0){
return;
}
printf("%d\n", n);
count_down(n - 1);
}

int main(){

int number;
printf("Enter the number:\n");
scanf("%d", &number);
count_down(number);

}
