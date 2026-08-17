#include<stdio.h>
int main(){

char word[50];
int counter = 0;

printf("Enter a word:\n");
scanf(" %s", word);

for(int i = 0; word[i] != '\0'; i++){
if(word[i] == 'a' || word[i] == 'o' || word[i] == 'u' || word[i] == 'i' || word[i] == 'e'){
counter++;
}
}
printf("%d\n", counter);
}
