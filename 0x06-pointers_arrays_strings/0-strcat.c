#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */

char *_strcat(char *newloc, char *src)
{
	int i, j;

	i = 0;
	while (newloc[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		newloc[i] = src[j];
		j++;
		i++;
	}
	newloc[i] = '\0';

	return (newloc);
}
