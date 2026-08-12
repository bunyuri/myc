#include<stdio.h>
int main(){

int num1[5];
int num2[5];
int same = 1;

for(int i = 0; i < 5; i++){
printf("Enter number %d:\n", i + 1);
scanf("%d", &num1[i]);
}

printf("\n");

for(int i = 0; i < 5; i++){
printf("Enter number %d:\n", i + 1);
scanf("%d", &num2[i]);
}
for(int i = 0; i < 5; i++){

if(num1[i] != num2[i]){
same = 0;
break;
}
else{
same = 1;
}
}

if(same == 1){
printf("Arrays are equal\n");
}
else if(same == 0){
printf("Arrays are different\n");
}
}
