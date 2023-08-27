/* gcc -g -O0 seg.c -o seg */

#include <stdio.h>

int func_nullnull()
{
  char *s = NULL;

  printf("%s\n", s);

  return 0;
}

int main()
{
  int i, j;
  char *s;

  i = 3;

  func_nullnull();

  return 0;
}
