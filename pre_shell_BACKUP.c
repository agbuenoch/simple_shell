#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * This is a super simple shell that can run command
 * with their full path, without any arguement.
 *
 * Return: zero
*/
int main()
{
  char **argv;
  
  argv = malloc(sizeof(char*));

  printf("#cisfun$ ");
  scanf("%s", *argv);


  if (execve(argv[0], argv, NULL) == -1)
    {
      perror("Error:");
      return (1);
    }

  
  return (0);
}
