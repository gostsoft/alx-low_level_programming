#include <stdio.h>
/**
 * main - prints argc
 * @argc: argc
 * @argv: argv
 * Return: zero
 */
int main(int argc, char *argv[])
{
if (argv[0])
printf("%d\n", argc - 1);
return (0);
}
