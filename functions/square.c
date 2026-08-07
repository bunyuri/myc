#include<stdio.h>


int square(int number){
return number * number;
}

int main(){

int results;
int num;

printf("Enter a number\n");
scanf("%d", &num);
results = square(num);

printf("Square: %d\n", results);

}
