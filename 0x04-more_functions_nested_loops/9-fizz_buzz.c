#include <stdio.h>
/**
 *main -program that prints the numbers from 1 to 100,
 *followed by a new line.But for multiples of three print Fizz
 *instead of the number and for the multiples of five print Buzz.
 *For numbers which are multiples of both three and five
 *print FizzBuzz that checks if c is digit 0 to 9¬
 *Return:void¬
*/

int main(void)
{
int i, im5, im3;

for (i = 1; i <= 100; i++)
{
	im3 = i % 3;
	im5 = i % 5;
	if (im3 == 0 && im5 == 0)
	{
		printf("FizzBuzz");
	}
	else if (im3 == 0)
	{
		printf("Fizz");
	}
	else if (im5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", i);
	}
if (i != 100)
{
	printf(" ");
}
}
return (0);
}

