#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i;
	long int li;
	long long int lli;
	float f;
	char c;

	printf("size of a char: %lu byte(s)\n", (char)sizeof(c);
	printf("size of an int: %lu byte(s)\n", (int)sizeof(i);
	printf("size of a long int: %lu byte(s)\n", (long int)sizeof(li);
	printf("size of a long long int: %lu byte(s)\n", (long long int)sizeof(lli);
	printf("size of a float: %lu byte(s)\n", (float)sizeof(f);

	return (0);
}
