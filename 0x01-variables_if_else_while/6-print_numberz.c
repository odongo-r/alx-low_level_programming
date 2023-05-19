#include <stdio.h>
/**
 *main - Entry point
 *description: print base 10 numbers using putchar
 *Return: always 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
