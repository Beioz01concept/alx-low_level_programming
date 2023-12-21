#include "main.h"

/**
* print_times_table - Prints the times table of the input
* starting with 0.
* @n: The value of the times table to be printed.
*/
void print_times_table(int n)
{
int row, column, product;
if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
product = row * column;
{
if (column > 0)
{
_putchar(',');
_putchar(' ');
if (product <= 9)
_putchar(' ');
else
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
else
{
_putchar('0');
}
}
_putchar('\n');
}
}
}
