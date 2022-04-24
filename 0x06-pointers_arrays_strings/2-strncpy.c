include "main.h"
/**
 *_strncpy - copies a string
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: dest
 */

char *_strncpy(char *newcopy, char *src, int n)

{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		newcopy[i] = src[i];
		i++;
	}

	while (i < n)
	{
		newcopy[i] = '\0';
		i++;
	}

	return (newcopy);

}
