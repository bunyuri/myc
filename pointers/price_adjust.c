#include<stdio.h>

void apply_discount(int *ptr){

for(int i = 0; i < 6; i++){
*ptr = *ptr - 10;
printf("%d\n", *ptr);
ptr++;
}

}

int main(){

int prices[6] = {20, 35, 50, 15, 40, 60};
apply_discount(prices);

}
