#include <stdio.h>
/**
 * main - prints Buzz each numbers of 3 and 5
 * Return: Always 0
 */
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if ((n % 3) == 0 && (n % 5) == 0)
{
printf("FIZZBUZZ");
}
else if ((n % 3) == 0)
{
printf("FIZZ");
}
else if ((n % 5) == 0)
{
printf("BUZZ");
}
else
{
printf("%d", n);
}
if (n == 100)
{
continue;
}
printf(" ");
}
printf("\n");
return (0);
}
