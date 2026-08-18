#include<stdio.h>
#include<string.h>
int main(){

char source[] = "Hello";
char destination[20];

strcpy(destination, source);

printf("%s\n", destination);

if(strcmp(source, destination) == 0){
printf("Copy successful!\n");
}
else{
printf("Copy failed!\n");
}

return 0;

}
