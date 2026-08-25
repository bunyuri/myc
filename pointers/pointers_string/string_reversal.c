#include <stdio.h>

void reverse_string(char *str){

char *start = str;
char *end = str;
char temp;

while(*end != '\0'){
end++;
}
end--;

while(start < end){
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}

}

int main(){

char word[] = "Hello";
reverse_string(word);

printf("%s\n", word);

}
