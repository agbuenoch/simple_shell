#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - program that prints all the arguments, without using ac.
 *
 * Return: zero
*/
int main(__attribute__((unused))int argc, char *argv[])
{

  printf("#cisfun$ ");
  scanf("%s", *argv);

  if (execve(argv[0], argv, NULL) == -1)
    {
      perror("./shell");
    }

  
return (0);
}
