#include <stdint.h>
typedef union{
char ch;
uint8_t  integer;
}char_name;


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
