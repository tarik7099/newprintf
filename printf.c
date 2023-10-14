#include <stdarg.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <unistd.h>


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
        }		int_string(va_arg(args, char*));
		counter++;
	}
		else if(*format == 'c')
	{
		print_char(va_arg(args, char*));
		counter++;	
	}
		else if(*format ==  '%')
	{
			_putchar('%');
			counter++;

	}
		if (*format == '\0')
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
format++;
}
va_end(args);
return counter;
}

