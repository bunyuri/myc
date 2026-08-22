#include<stdio.h>

void add_ten(int *x){

*x = *x + 10;
}

int main(){

int number;
printf("Enter the number: \n");
scanf("%d", &number);

add_ten(&number);

printf("%d\n", number);

}
