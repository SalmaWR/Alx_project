#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
*Auther: Salma Wagdy
*Description: main - test file 
*program start execution from here 
*
*return: always 0
*/

int main(void)
{
char x = 's';
int count_strd = 0;
int count_Myfun =0;

write(1,"STANDARD:\n",10);
count_strd = printf("I try to print %c\n", x);
printf("the stundard printf return:%d\n", count_strd);

write(1,"MYFUNCTION:\n",12);
count_Myfun = _printf("I try to print %c\n", x);
printf("my function return:%d\n", count_Myfun);

return(0);
}
