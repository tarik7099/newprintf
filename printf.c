#include <stdarg.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 *  _printf - prints decimal
 * @format: argument to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
if (format == '\0')
	return 0;
int i = 0;
int counter = 0;

va_list args;
va_start(args, format); 
while(*format)
{
	if(*format == '%')
	{
		format++;

		if (*format == 's')
	{
			print_string(va_arg(args, char*));
			counter++;
	}	
		else if(*format == 'c')
        {
        	        print_char(va_arg(args, char*));
			counter++;
        }
		
	
		else if(*format == 'c')
	{
		print_char(va_arg(args, char*));
		counter++;	
	}
	else if (*format == 'd' || *format == 'i')
	{
		print_int(va_arg(args, int));
		counter++;
	}
		else if(*format ==  '%')
	{
			_putchar('%');
			counter++;

	}
		else if (*format == '\0')
			break;
		else if (*format == 'b')
		{
			decimalTobinary(va_arg(args,unsigned int));
		}
        
}
	else
{
	_putchar(*format);
	counter++;
}


va_end(args);
return counter;
}
