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

for(int i = 0; i < length; i++ ){

if(word[i] != word[length - 1 - i]){
palindrome = 0;
break;
}
}
if(palindrome == 1){
printf("%s is a Palindrome\n", word);
}
else{
printf("%s is not  a Palindrome\n", word);
}
}

