#include<stdio.h>
int main(){

char word[50];
int counter = 0;
char e;

printf("Enter a word:\n");
scanf("%s", word);

printf("Search a character:\n");
scanf(" %c", &e);

for(int i = 0; word[i] != '\0'; i++){

if(e == word[i]){
counter = counter + 1;
}
}
printf("%c appears %d time.\n", e, counter);
}
