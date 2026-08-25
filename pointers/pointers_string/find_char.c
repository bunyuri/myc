#include<stdio.h>

char *find_char(char *str, char target){

while(*str != '\0'){

if(target == *str){
return str;
}
str++;
}
return NULL;
}

int main(){

char word[] = "programming";
char *result = find_char(word, 'g');

printf("%c\n", *result);
}
