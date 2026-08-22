#include<stdio.h>

void change(int *number){

*number = 50;


}

int main(){

int number = 10;

printf("Before: %d\n", number);

change(&number);

printf("After: %d\n", number);

}
