#include<stdio.h>
int main(){

char word[50];
int length = 0;
int palindrome = 1;

printf("Enter a word:\n");
scanf(" %s", word);

for(int i = 0; word[i] != '\0'; i++){
length = length + 1;
}

for(int i = 0; i < length / 2; i++){

if(word[i] != word[length - 1 - i]){
palindrome = 0;
}
}
if(palindrome == 0){
printf("Not a palindrome\n");
}
else{
printf("A palindrome\n");
}
}
