#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

#define ON 1
#define OFF 0

char *my_strtok(char *str, const char *delim);
/**
 * main
*/
int main()
{
  char *pri;
  char *str;
  char *mark = ' ';  
  
  str = malloc(sizeof(char));
  pri = malloc(sizeof(char));
  
  puts("Please write a simple statement:");
  scanf("%s[^\n]s", str);

  pri = my_strtok(str, mark);

  printf("%s\n", pri[3]);
  
  return (0);
}


char *my_strtok(char *str, const char *delim)
{
  int state;
  char *store;
  store = malloc(sizeof(char));

  while (*str)
    {
      if (*str == delim)
	{
	  state = OFF;
	}
      else if (state == OFF)
	{
	  state = ON;
	  *store = *str;
	}
      str++;
    }
  return (store);
}
