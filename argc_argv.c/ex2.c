#include<stdio.h>
int main(int argc, char **argv){

int i = 1;

while(i < argc){
printf("argv[i] = %s\n", argv[i]);
i++;
}

}
