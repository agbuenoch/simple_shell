#include <stdio.h>
#include <unistd.h>
int main()
{
  char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

  if (execve(argv[0], argv, NULL) == -1)
    {
      perror("Error:");      
    }
  return (0);
}
