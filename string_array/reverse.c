#include<stdio.h>
int main(){

char word[50];
int length = 0;
char temp;

printf("Enter a word:\n");
scanf(" %s", word);

for(int i = 0; word[i] != '\0'; i++){
length = length + 1;
}

for(int i = 0; i < length / 2; i++){

temp = word[i];
word[i] = word[length - 1 - i];
word[length - 1 - i] = temp;

}
printf("%s\n", word);
}
  
