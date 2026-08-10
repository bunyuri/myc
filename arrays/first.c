#include<stdio.h>

int main(){

int numbers[5];

for(int i = 0; i <= 4; i++){
printf("Enter number %d\n", i + 1);
scanf("%d", &numbers[i]);
}

printf("You entered:\n");
for(int i = 0; i <= 4; i++){
printf("%d\n", numbers[i]);
}
}
