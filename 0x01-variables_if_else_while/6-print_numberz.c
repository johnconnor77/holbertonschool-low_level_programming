#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
char n2c;
for (num = 0; num < 10; ++num)
{
n2c = num + '0';
putchar(n2c);
}
putchar('\n');
return (0);
}
