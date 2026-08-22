#include<stdio.h>

voit print_array(int *array){

for(int i = 0; i < 5; i++){
printf("%d\n", *array);
array++;
}

}

int main(){

int numbers[5] = {10, 20, 30, 40, 50};
int *ptr = numbers;

print_array(ptr);
printf("%d\n", *ptr);

}
