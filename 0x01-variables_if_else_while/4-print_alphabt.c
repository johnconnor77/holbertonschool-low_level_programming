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
char alfa;
for (alfa = 'a'; alfa <= 'z'; ++alfa)
{
if (alfa != 'q' && alfa != 'e')
{
putchar(alfa);
}
}
putchar('\n');
return (0);
}
