#include<stdio.h>
#include<string.h>
int main(){

char name1[] = "zara";
char name2[] = "alpha";

if(strcmp(name1, name2) == 0){
printf("The names are the same\n");
}
else if(strcmp(name1, name2) < 0){
printf("name1 comes before name2\n");
}
else if(strcmp(name1, name2) > 0){
printf("name1 comes after name2\n");
}
return 0;
}
