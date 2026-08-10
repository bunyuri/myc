#include<stdio.h>
int main(){

int numbers[5];
int num;
int found = 0;

for(int i = 0; i <= 4; i++){
printf("Enter number %d\n", i + 1);
scanf("%d", &numbers[i]);
}

printf("Enter number to search: \n");
scanf("%d", &num);

for(int i = 0; i <= 4; i++){
if(numbers[i] == num){
found = 1;
break;
}
}
if(found == 1){
printf("Found\n");
}
else{
printf("Not found\n");
}
}
