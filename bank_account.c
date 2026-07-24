#include <stdio.h>
#include <stdbool.h>

int main(){

char holder[30] = "ISHIMWE Pierre Richard";
int number = 123456798;
float balance = 20.5;
double interest = 2;
bool active = true;

printf ("Account Holder: %s\n", holder);
printf ("Account Number: %d\n", number);
printf ("Account balance: %.2f\n", balance);
printf ("Account Interest: %.2f%%\n", interest);
printf ("Account active: %d\n", active );


}
