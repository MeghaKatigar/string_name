#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "function.c"
int main(){
char_name Char;
char name[20];
printf("Enter the name\n");
scanf("%s",name);
int sum=char_ascii(Char, name);
printf("%d\n",sum);
return 0;
}

