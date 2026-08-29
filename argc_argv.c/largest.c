#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){

int i = 1;
int max = atoi(argv[1]);

while(i < argc){
if(max < atoi(argv[i])){
max = atoi(argv[i]);
}
i++;
}
printf("%d\n", max);
}
