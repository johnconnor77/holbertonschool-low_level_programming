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
char alfa;
for (num = 0; num < 10; ++num)
{
putchar(num + '0');
}
for (alfa = 'a'; alfa <= 'f'; ++alfa)
{
putchar(alfa);
}
putchar('\n');
return (0);
}
