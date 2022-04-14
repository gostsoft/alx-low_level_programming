include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 **/

void more_numbers(void)
{
	int i;
	int num1;
	int num2;
	int sum;

	i = 0;
	sum = 0;
	while (i < 10)
	{
		while (sum <= 14)
		{
			if (sum < 10)
			{
				num2 = sum;
			}

			else
			{
				num1 = sum / 10;
				num2 = sum % 10;
				_putchar (num1 + '0');
			}

			_putchar (num2 + '0');

			sum++;
		}
		i++;
		sum = 0;
		_putchar ('\n');
	}

}
