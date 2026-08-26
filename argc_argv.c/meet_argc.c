#include<stdio.h>
int main(int argc, char **argv){
int i = 0;
printf("x\n");
printf("argc = %d\n", argc);
while(i < argc){
printf("argv[i] = %s\n", argv[i]);
i++;
}
}
