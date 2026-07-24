#include <stdio.h>
int main (){
int a, b;
float c;
printf ("Enter the first number:\n");
scanf ("%d", &a);

printf ("Enter the second number:\n");
scanf ("%d", &b);

printf ("Addition:%d\n", a+b);
printf ("Substraction:%d\n", a-b);
printf ("Multiplication:%d\n", a*b);
printf ("Interger division:%d\n", a/b);
c = (float)a/b;
printf ("Floating divition:%.2f\n", c);

}
