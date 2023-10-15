#include "main.h"
#include <stdarg.h>

#include <stdio.h>

/**
 * _printf - custom printf function
 * @format: format string
 * Return: number of characters printed
 *
 */






int _printf(const char *format, ...)
{

if (*format == '\0')
	return 0;
int i = 0;
int counter = 0;

    if (format == NULL)
        return 0;

    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
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

        format++;
    }

    va_end(args);
    return counter;
        	        
        }
		
int main()
{
    _printf("String:[%s]\n", "I am a string !");
    _printf("string %d",11);
int len;
    int len2;
 

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
 
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

int max = 98;
_printf("%b", max);









}

int print_int(int n)
{
if (n / 10)
{
print_int(n / 10);
}
_putchar('0' + n % 10);
return (0);
}


void  decimalTobinary(unsigned int d) {
    if (d == 0) {
        _putchar('0');
        return;
    }
    int quotient[32];
    int i = 0;
    while (d > 0) {
        quotient[i] = d % 2;
        d = d / 2;

        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
       _putchar( quotient[j] + '0');
}
}
int  print_string(char *str)
{
        int counte =  0;
for (int i = 0;str[i] != '\0';i++ )
        {
                _putchar(str[i]);
                counte++;
        }
}
int print_char(char *c)
{
        int countr = 0;
        for (int i = 0; c[i]; c++) {
        _putchar(c[i]);
                countr++;

        }
}

int _putchar(char c)
{
        return (write(1, &c, 1));
}




