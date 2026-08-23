#include<stdio.h>

void updated_prices(int *ptr){

for(int i = 0; i < 5; i++){
*ptr = *ptr + 10;
printf("%d\n", *ptr);
ptr++;
}
}

void most_expensive(int *ptr){

int max = *ptr;
for(int i = 0; i < 5; i++){
if(max < *ptr){
max = *ptr;
}
ptr++;
}
printf("Most expenside: %d\n", max);
}

int main(){

int prices[5] = {20, 35, 15, 50, 40};
updated_prices(prices);
most_expensive(prices);
}
