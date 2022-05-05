/**
 * @file function.h
 * @author Megha Katigar (meghakatigar@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef FUNCTION_H_
#define FUNCTION_H_
typedef union{
char ch;
uint8_t  integer;
}char_name;

int char_ascii(char_name character, char *p);
#endif
