#include <stdio.h>

int main (int argc, char *argv[])
{
  char str[20]={"1234567"};
  FILE * pFile;
  pFile = fopen (argv[1],"w+");

  scanf("%s", &str[0]);
  if (pFile!=NULL)
  {
    fputs (str,pFile);
    fclose (pFile);
  }
  

  printf ("\nputs'%s' in file:'%s' \n",&str[0],argv[1]);

  return 0;
}
