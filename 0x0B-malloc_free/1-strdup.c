#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, leng;

	i = 0;
	leng = 0;

	dup = malloc(sizeof(char) * (leng + 1));

	if (str == NULL)
		return (NULL);

	else if (dup == NULL)
		return (NULL);


	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
