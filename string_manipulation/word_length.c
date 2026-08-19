#include<stdio.h>
#include<string.h>
int main(){

char word[50];

printf("Enter a word: \n");
scanf(" %s", word);

if(strlen(word) >= 5){
printf("Long word!\n");
}
else{
printf("Short word!\n");
}

}
