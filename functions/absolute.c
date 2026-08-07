#include<stdio.h>

int absolute(int number){

if(number < 0){
number = number * -1;
}
else{
number = number;
}
return number;

}

int main(){

int num;

printf("Enter the number\n");
scanf("%d", &num);

num = absolute(num);

printf("Absolute: %d\n", num);

}
