#include<stdio.h>
int main(){

char *str = "123";
int number = 0;

while(*str != '\0'){
number = *str - '0';
printf("%d\n", number);
str++;
}
}
