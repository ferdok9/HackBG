#include <stdio.h>

int main (int argc, char *argv[])
{
  char filein[20] = {"in/filein.c"};
  char fileout[20] = {"out/fileout.c"};
  char chr = 0;
  FILE *pFile1, *pFile2;

  pFile1 = fopen ("in/filein.c","r");
  pFile2 = fopen ("out/fileout.txt","w");  

  if(pFile1 != NULL || pFile2 != NULL)
  {
    printf("\nprintira neshto \n\n");
    do
    {
      chr = getc(pFile1);
      if(chr == EOF)
      { 
        break;
      }
      putc(chr,stdout);
      putc(chr,pFile2);
    }
    while(chr != EOF);
   printf("\nizliza ot cikyla\n");
   fclose(pFile1);
   fclose(pFile2);
  }
  else
  { 
   printf("\nGreshka pri otvariane na file\n");
  }

  return 0;
}
