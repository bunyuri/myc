#include<stdio.h>
int main(){


int light;

printf("Enter the number:\n");
scanf("%d", &light);

if(light == 1){
printf("STOP\n");
}

else if(light == 2){
printf("SLOW DOWN\n");
}

else if(light == 3){
printf("GO\n");
}

else{
printf("Invalid number\n");
}

}
