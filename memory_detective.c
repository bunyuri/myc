#include <stdio.h>
int main(){

char grade = 'a';
short year = 2;
int age = 13;
float weight = 50.3;
double pi = 3.145;

printf("Grade: %c\n", grade);
printf("Year: %d\n", year);
printf("Age: %d\n", age);
printf("Weight: %.2f\n", weight);
printf("Pi: %f\n", pi);

printf("Size of grade: %zu bytes\n", sizeof(grade));
printf("Size of year: %zu bytes\n", sizeof(year));
printf("Size of age: %zu bytes\n", sizeof(age));
printf("Size of weight: %zu bytes\n", sizeof(weight));
printf("Size of pi: %zu bbytes\n", sizeof(pi));

printf("Address of grade: %p\n", &grade);
printf("Address of year: %p\n", &year);
printf("Address of age: %p\n", &age);
printf("Address of weight: %p\n", &weight);
printf("Address of pi: %p\n", &pi);

}
