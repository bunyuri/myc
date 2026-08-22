#include<stdio.h>

void find_max(int *ptr){
int max = 0;
max = *ptr;

for(int i = 0; i < 5; i++){
if(max < *ptr){
max = *ptr;
}
ptr++;
}
printf("%d\n", max);
}

int main(){

int numbers[5] = {12, 45, 7, 89, 34};
find_max(numbers);

}
