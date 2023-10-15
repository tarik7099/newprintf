#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - custom printf function
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
if (*format == '\0')
	return 0;
int i = 0;
int counter = 0;
=======
    if (format == NULL)
        return 0;
>>>>>>> 269b1815364d8b183ee0f9fb8f469ce4c943fa50

    int i = 0;
    int counter = 0;

    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
<<<<<<< HEAD
            format++;

            if (*format == 's')
            {
                print_string(va_arg(args, char*));
                counter++;
            }
            else if (*format == 'c')
            {
                print_char(va_arg(args, char*));
                counter++;
            }
            else if (*format == 'd' || *format == 'i')
            {
                print_int(va_arg(args, int));
                counter++;
            }
            else if (*format == '%')
            {
                _putchar('%');
                counter++;
            }
            else if (*format == 'b')  // Placeholder for handling %b
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
=======
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

}
va_end(args);
return counter;
>>>>>>> 7d4c56c40d8bafd1c0e10f8b7cafc2745dcc4e90
}


int main()
{
    _printf("String:[%s]\n", "I am a string !");
}
