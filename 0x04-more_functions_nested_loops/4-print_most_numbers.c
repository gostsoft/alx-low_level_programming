#include "main.h"

/**
 *
 */
void print_most_numbers(void)
{
int c = 0;
while(c <= 9)
{
if (c == 2 && c == 4)
{
continue;
}
else
{
_putchar(c + '0');
c++;
}

_putchar('\n');
}
