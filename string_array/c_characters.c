#include<stdio.h
int main(){

char word[50];
int counter = 0;

printf("Enter a word:\n");
scanf("%s", word);

for(int i = 0; word[i] != '\0'; i++){
counter = counter + 1;
}
printf("%s has %d characters\n", word, counter);
}
