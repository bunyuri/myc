#include<stdio.h>

void update_settings(int *vol, int *bri, int *bat){

*vol = *vol + 10;
*bri = *bri - 20;
*bat = *bat - 5;

printf("Volume: %d\n", *vol);
printf("Brightness: %d\n", *bri);
printf("Battery: %d\n", *bat);

}

void charge(int *bat){

*bat = *bat + 20;
printf("New battery level: %d\n", *bat);

}

int main(){

int volume = 50;
int brightness = 70;
int battery = 80;

update_settings(&volume, &brightness, &battery);
charge(&battery);
}
