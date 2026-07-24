#include<stdio.h>

void tick(void){

static int count = 0;
count++;

printf("tick function called count:  %d\n", count);

}

int main(){

tick();
tick();
tick();
tick();
tick();
tick();
tick();
tick();
tick();
tick();
tick();


}

