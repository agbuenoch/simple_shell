#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all the arguments, without using ac.
 *
 * Return: zero
*/
int main()
{
  char *str;

  str = malloc(sizeof(char));

  puts("Write a sentence or statements.");
  scanf("%[^\n]s", str);

  printf("You entered: %s\n", str);

  return (0);
}
