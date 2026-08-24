#include<stdio.h>

void update_stock(int *ptr){
for(int i = 0; i < 5; i++){
*ptr = *ptr + 5;
printf("%d\n", *ptr);
ptr++;
}
}

void largest(int *ptr){
int max = *ptr;
for(int i = 0; i < 5; i++){
if(max < *ptr){
max = *ptr;
}
ptr++;
}
printf("Largest stock: %d\n", max);
}

void smallest(int *ptr){
int min = *ptr;
for(int i = 0; i < 5; i++){
if(min > *ptr){
min = *ptr;
}
ptr++;
}
printf("Smallest stock: %d\n", min);
}

int main(){

int stock[5] = {12, 5, 20, 8, 15};

update_stock(stock);
largest(stock);
smallest(stock);

}
