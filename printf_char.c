#include "main.h"

int  print_char(char *c)
/**
 * print_char - Entry point
 * @c: input
 * Return: Always 0
 */
void print_char(char *c)

{
        int countr = 0;
        for (int i = 0; c[i]; c++) {
        _putchar(c[i]);
                countr++;

        }
}
