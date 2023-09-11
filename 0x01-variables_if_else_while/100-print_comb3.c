#include <stdio.h>

/**
 * main -main function
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '7')
	{
		while (j <= '8')
		{
			if (!(i > j) || i == j)
			{
				putchar(i);
				putchar(j);
				if (i == '7' && j == '8')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
return (0);
}

