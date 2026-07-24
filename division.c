#include <stdio.h>
int main(){

int a, b;
float c;

printf ("Enter the first number:\n");
scanf ("%d", &a);

printf ("Enter the second number:\n");
scanf ("%d", &b);

c = (float)a / b;

printf ("The answer is: %f\n", c);
}
