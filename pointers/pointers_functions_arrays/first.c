#include<stdio.h>

void print_array(int *ptr){

for(int i = 0; i < 5; i++){
printf("%d\n", *ptr);
ptr++;
}

}

int main(){

int numbers[5] = {10, 20, 30, 40, 50};
print_array(numbers);

}
