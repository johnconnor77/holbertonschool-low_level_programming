#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
/* your code goes there */
if (ld > 5)
{
printf("Last digit of %d is %d is greater than 5", n, ld);
}
else if (ld == 0)
{
printf("Last digit of %d is %d is 0", n, ld);
}
else if (ld < 6)
{
printf("Last digit of %d is %d is less than 6", n, ld);
}
return (0);
}
