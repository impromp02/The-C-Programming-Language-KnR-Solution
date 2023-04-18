#include <stdio.h>

#define IN 1
#define OUT 0

/* copy input to its output, replacing each string of one or more blanks by a single blank */

int main()
{
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      state = IN;
    }
    else
    {
      if (state == IN)
      {
        putchar(' ');
        state = OUT;
      }
      putchar(c);
    }
  }
}