#include <stdio.h>
#include <stdlib.h>

int main()
{
  size_t n;
  char *buffer;

  buffer = NULL;

  puts("Write a sentence or statements.");
  getline(&buffer, &n, stdin);

  printf("You entered: %s\nThe string length is: %ld\n", buffer, n);

  free(buffer);
  return (0);
}
