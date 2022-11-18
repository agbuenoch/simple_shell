#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * This is a super simple shell that can run command
 * with their full path, without any arguement.
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
      return (1);
    }

  
  return (0);
}
