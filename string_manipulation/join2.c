#include<stdio.h>
#include<string.h>
int main(){

char first[100];
char second[50];
char third[5] = " ";

printf("Enter the first word: \n");
scanf(" %s", first);

printf("Enter the second word: \n");
scanf(" %s", second);

strcat(first, third);

printf("%s\n", strcat(first, second));

}
