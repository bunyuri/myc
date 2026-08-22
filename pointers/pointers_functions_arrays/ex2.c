#include<stdio.h>

void add_ten(int *ptr){

for(int i = 0; i < 5; i++){
*ptr = *ptr + 10;
printf("%d\n", *ptr);
ptr++;
}

}


int main(){

int numbers[5] = {10, 20, 30, 40, 50};
add_ten(numbers);
}
