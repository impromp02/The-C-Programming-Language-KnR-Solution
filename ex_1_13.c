#include <stdio.h>

/* print a histogram of length of its word */

int main()
{
  int c, nc, state;

  nc = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      for (int i = 0; i < nc; i++)
      {
        if (i == 0)
          printf(" :=");

        printf("=");
      }
      printf("\n");
      nc = 0;
    }
    else
    {
      ++nc;
      printf("%c", c);
    }
  }
}