#include<stdio.h>

void string_concat(char *dest, char *src){
while(*dest != '\0'){
dest++;
}
while(*src != '\0'){
*dest = *src;
dest++;
src++;
}
*dest = '\0';
}

int main(){

char word[20] = "Hello";
char add[] = " World";
string_concat(word, add);

printf("%s\n", word);

}
