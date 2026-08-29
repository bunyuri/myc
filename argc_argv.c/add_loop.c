#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv){

int i;
int total = 0;

while(i < argc){
total = atoi(argv[i]) + total;
i++;
}
printf("%d\n", total);
}
