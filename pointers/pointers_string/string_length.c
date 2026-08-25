#include<stdio.h>

void string_length(char *str){
int counter = 0;

while(*str != '\0'){
str++;
counter++;
}
printf("%d\n", counter);

}

int main(){

char word[] = "Hello";
string_length(word);
}
