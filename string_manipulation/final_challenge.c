#include<stdio.h>
#include<string.h>
int main(){

char first[200];
char second[100];
char third[300] = "Hello, ";
char fourth[5] = "!";
char fifth[5] = " ";

printf("Enter your first name: \n");
scanf(" %s", first);

printf("Enter your last name: \n");
scanf(" %s", second);

strcat(first, fifth);
strcat(first, second);
strcat(third, first);

printf("%s\n", strcat(third, fourth));

printf("%lu\n", strlen(first));

}
