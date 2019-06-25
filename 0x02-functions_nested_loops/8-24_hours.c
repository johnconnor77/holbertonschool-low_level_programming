#include "holberton.h"
/**
 * jack_bauer - print time til 24 h.
 * Return: Time lapse 00:00-23:59
 */
void jack_bauer(void)
{
int hour, min;

for (hour = 0; hour <= 23; ++hour)
{
	for (min = 0; min <= 59; ++min)
	{
		_putchar(hour / 10 + '0');
		_putchar(hour % 10 + '0');
		_putchar(58);
		_putchar(min / 10 + '0');
		_putchar(min % 10 + '0');
		_putchar('\n');
	}
}
return;
}

