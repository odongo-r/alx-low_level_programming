#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: arguments number
 * @argv: is an array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
