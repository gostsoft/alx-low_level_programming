#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;
		int l;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
l = n % 10;
if (l > 5)
{
printf("last digit %d is %d and is greater than 5\n", n, l);
}
else if (l < 6 && l != 0)
{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
else if (l == 0)
{

printf("last digit of %d is %d and is 0\n", n, l);
}
					return (0);
}
