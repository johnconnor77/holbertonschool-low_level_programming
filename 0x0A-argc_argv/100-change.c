#include <stdio.h>
#include <stdlib.h>
int count_coins(int i);
/**
 * main - prints the minimum number of coins to make change for an amount
 * @argc: argument count
 * @argv: array of strings
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i <= 0)
	{
		printf("0\n");
		return (0);
	}

change = count_coins(i);
printf("%d\n", change);
return (0);
}
/**
 *count_coins - function that returns the amount of coins
 *@i: input from char data
 *Return: coins
*/
int count_coins(int i)
{
	int coin = 0;

	while (i)
	{
		if (i >= 25)
		{
			i -= 25;
			coin += 1;
		}
		else if (i >= 10)
		{
			i -= 10;
			coin += 1;
		}
		else if (i >= 5)
		{
			i -= 5;
			coin += 1;
		}
		else if (i >= 2)
		{
			i -= 2;
			coin += 1;
		}
		else
		{
			i -= 1;
			coin += 1;
		}
	}
return (coin);
}
