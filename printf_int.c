int print_int(int n)
{
if (n / 10)
{
print_int(n / 10);
}
_putchar('0' + n % 10);
return (0);
}
