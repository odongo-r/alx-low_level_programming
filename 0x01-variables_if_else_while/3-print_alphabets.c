#include <stdio.h>
/**
  *main - Entry point
  *Description: print alphabets lowercase and uppercase
  *Return: always 0
  */
int main(void)
{
	int k = 97;
	int l = 65;

	while (k <= 122)
	{
		putchar(k);
		k++;
	}
	while (l <= 90)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
