#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: arguments number
 * @argv: is an array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
