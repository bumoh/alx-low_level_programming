#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints a combination of numbers
 *Return: Always 0
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
if (i < j)
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
