#include"main.h"
#include <stdarg.h>
/**
* _str - print string
* @args: pointer
* Return: number of printed char
*/
int _str(va_list args)
{
int count;
char *s = va_arg(args,char*);
int len = strlen(s);
count += len;
return(count);
}
