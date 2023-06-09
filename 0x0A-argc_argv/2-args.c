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
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}

	return (0);
}
