#include<stdio.h>

int my_atoi(char *str){
int number = 0;

while(*str != '\0'){
number = number * 10 + (*str - '0');
str++;
}
return number;
}

int main(){

char *str = "12345";
printf("%d\n", my_atoi(str));

}
