#include <unistd.h>
int puts(const char *s)
{
	(void)s;
	write(1,"Congratulations, you win the Jackpot!\n", 38);
return 0;
}

int printf(const char *format, ...)
{
	static int num = 0;
(void)format;

	if (!num)
		write(1, "9 8 10 24 75 - 9\n", 17);
	num = 1;
return 0;
}
