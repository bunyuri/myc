#include<stdio.h>
int main(){

char word[50];
char w;

printf("Enter a word:\n");
scanf("%s", word);

printf("Search a character:\n");
scanf(" %c", &w);

for(int i = 0; word[i] != '\0'; i++){

if(w == word[i]){
printf("%c was found at index %d\n", w,i);
}
}
}
