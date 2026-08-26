#include<stdio.h>

int string_compare(char *str1, char *str2){

while(*str1 != '\0' && *str2 != '\0'){
if(*str1 != *str2){
return 0;
str1++;
str2++;
}
if(*str1 == '\0' && *str2 == '\0'){
return 1;
}
else{
return 0;
}
}

int main(){

char word1[] = "Hello";
char word2[] = "Hel";

printf("%d\n", string_compare(word1, word2));
}
