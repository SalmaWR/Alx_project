#include"main.h"
/**
*Description: _printf - prints variable argements : a string is in a formatted way
*	@format: string to print (char*)
*	@  the  ... : variadic parameters
*
*	Return: number of characters printed
*/

int _printf(const char *format, ...) 

{
	int i = 0;
	int count = 0;
	va_list args;
	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++)
	{
	if (format[i] == '%')
	{
		i++;
		switch (format[i])
		{
		/*character*/
			case 'c':
			{ 
				count += _char(args);
				break;
			}
		/*string*/
			case 's':
			{
				count += _str(args);
				break;
			}
		/*write % char */
			case '%':
			{
				count += _putchar('%');
				break;
			}
		/*to print normal character*/
				default:
			{
				return(count);
			}

		}
	}else{
		_putchar(format[i]);
		count++;
		}

}

va_end(args);
return (count);
}
