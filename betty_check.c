#include <stdio.h>
/**
 * main - prints all the arguments passed in the shell
 * without using the "ac" variable
 * You can also use: (void) ac
 *
 * @ac: integer parameter
 * @av: pointer-to-character-pointer
 *
 * Return: zero
*/
int main(__attribute__((unused))int ac, char **av)
{
while (*av != NULL)
{
printf("%s\n", *av);
av++;
}
return (0);
}
