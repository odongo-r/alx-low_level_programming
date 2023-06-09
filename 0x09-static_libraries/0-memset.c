#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @b: expected value
 * @s: memory address to fill
 * @n: number of bytes
 *
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    	int i = 0;

    	for (; n > 0; i++)
    	{
            	s[i] = b;
            	n--;
    	}
    	return (s);
}
