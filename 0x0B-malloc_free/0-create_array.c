#include "main.h"
/**
 * create_array - array for prints a string
 * @sze: the number of element array
 * @c: char 
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int array_position;

if (size == 0)
{
rerturn (NULL);
}


buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
return (NULL);
}

else
{
array_position = 0;
while(array_position < size)
{
*(buffer + array_position) = c;
array_postition++;
}
return (buffer);
}

}
