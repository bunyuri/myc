#include<stdio.h>

void compare_ends(int *start, int *end){

for(int i = 0; i < 3; i++){
if(*start > *end){
printf("Highest: %d\n", *start);
}
else{
printf("Highest: %d\n", *end);
}
start++;
end--;
}
}

int main(){

int temperature[6] = {18, 25, 21, 30, 17, 28};

compare_ends(temperature, temperature + 5);


}
