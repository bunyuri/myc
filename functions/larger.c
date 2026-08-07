#include<stdio.h>

int larger(int a, int b){
int big;

if(a > b){
big = a;
}
else if(a < b){
big = b;
}

else if(a == b){
big = a;
}

return big;
}

int main(){

int num1, num2,b;

printf("Enter the first number\n");
scanf("%d", &num1);

printf("Enter the second number\n");
scanf("%d", &num2);

b = larger(num1, num2);

printf("Largest: %d\n", b);
}
