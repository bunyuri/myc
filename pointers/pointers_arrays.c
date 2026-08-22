#include<stdio.h>
int main(){

int numbers[4] = {10, 20, 30, 40};
int *ptr = numbers;

for(int i = 0; i < 4; i++){

printf("%d\n", *ptr);
ptr++;
}
}
