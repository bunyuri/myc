#include<stdio.h>
int main(){

int numbers[5];
int search;
int times = 0;

for(int i = 0; i < 5; i++){
printf("Enter number %d\n", i + 1);
scanf("%d", &numbers[i]);
}

printf("Enter the number to search:\n");
scanf("%d", &search);

for(int i = 0; i < 5; i++){
if(search == numbers[i]){
times = times + 1;
}
}
printf("%d Appears %d times.\n", search, times);
}
