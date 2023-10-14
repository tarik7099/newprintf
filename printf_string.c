#include "main.h"

int  print_string(char *str)
{
        int counte =  0;
for (int i = 0;str[i] != '\0';i++ )
        {
                _putchar(str[i]);
                counte++;
        }
}
