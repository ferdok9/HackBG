#include <stdio.h>

int main (int argc, char *argv[])
{
  char str[20]={"1234567"};
  scanf("%s", &str[5]);

  printf (" \n%s\n",str);

  return 0;
}
