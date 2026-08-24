#include<stdio.h>

void update_temperatures(int *ptr){
int max = 0;
max = *ptr;

for(int i = 0; i < 5; i++){
*ptr = *ptr + 2;
printf("%d\n", *ptr);
ptr++;
}

ptr = ptr - 5;

for(int i = 0; i < 5; i++){
if(max < *ptr){
max = *ptr;
}
ptr++;
}
printf("Highest temperature: %d\n", max);
}

int main(){

int temperatures[5] = {18, 22, 25, 19, 27};
update_temperatures(temperatures);

}
