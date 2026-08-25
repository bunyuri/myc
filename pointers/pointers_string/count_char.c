#include<stdio.h>

int count_char(char *str, char target){
int counter = 0;
while(*str != '\0'){
if(*str == target){
counter++;
}
str++;
}
return counter;

}

int main(){

char word[] = "banana";

printf("Counter: %d\n", count_char(word, 'a'));
}
