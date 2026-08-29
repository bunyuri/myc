#include<stdio.h>
#include<stdlib.h>

int main(){

int *n;
int number;

printf("How many integers you want?\n");
scanf("%d", &number);

n = malloc(number * sizeof(int));

if(n == NULL){
printf("Memory allocation failed\n");
return 1;
}

for(int i = 0; i < number; i++){
printf("Enter number:\n");
scanf("%d", &n[i]);
}
for(int i = 0; i < number; i++){
printf("You entered: %d\n", n[i]);
}
free(n);
}
