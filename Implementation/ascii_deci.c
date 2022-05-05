#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "function.h"
int main(){
char_name Char;
char name[20];
printf("Enter the name\n");
scanf("%s",name);
int sum=char_ascii(Char, name);
printf("%d\n",sum);
return 0;
}
int char_ascii(char_name character, char *p)
{
//union Character character;
int Sum=0;
while(*p!='\0')
{
  character.ch=*p++;
  Sum+=character.integer;
}
return Sum;
}

