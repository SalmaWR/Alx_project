#ifndef _MAIN_H_
#define _MAIN_H_
#include<stdio.h>
#include<stdarg.h>
#include<unistd.h>
#include<string.h>
#include <stddef.h>


int _printf(const char *format, ...);
int _putchar(char c);
int _char(va_list args);
int _str(va_list args);
int _int(va_list args);

#endif
