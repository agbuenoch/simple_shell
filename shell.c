#include <stdio.h>
#include <stdlib.h>

void pass_betty();


/**
 * main - program that prints all the arguments, without using ac.
 *
 * Return: zero
*/
int main(void)
{
  pass_betty();
  
return (0);
}
/**
 * pass_betty - program that comform to betty coding style
*/
void pass_betty()
{
  char *str;

  str = malloc(sizeof(char));
  puts("Write a sentence or statement.");
  scanf("%[^\n]s", str);

  printf("You entered: %s\n", str);
}
