#include<stdio.h>
#include<string.h>
int main(){

char first[50] = "Hello ";
char second[] = "Ricky";
char third[] = "!";

strcat(first, second);

printf("%s\n", strcat(first, third));

}
