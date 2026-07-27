#include<stdio.h>
int main(){

int members;

printf("How manny members are coming today?\n");
scanf("%d", &members);

for(int i = 1; i <= members; i++){
printf("Member %d checked in\n", i);
}
}
