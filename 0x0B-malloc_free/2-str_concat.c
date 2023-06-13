#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int p, qp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = qp = 0;
	while (s1[p] != '\0')
		p++;
	while (s2[qp] != '\0')
		qp++;
	conct = malloc(sizeof(char) * (p + qp + 1));

	if (conct == NULL)
		return (NULL);

	p = qp = 0;

	while (s1[p] != '\0')
	{
		conct[p] = s1[p];
		p++;
	}

	while (s2[qp] != '\0')
	{
		conct[p] = s2[qp];
		p++, qp++;
	}
	conct[p] = '\0';

	return (conct);
}
