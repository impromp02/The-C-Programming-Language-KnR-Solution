#include <stdio.h>

/* print a histogram of the frequencies of characters */

int main()
{
  int i, c;
  int nc[26];

  while ((c = getchar()) != EOF)
  {
    for (i = 0; i < 26; ++i)
    {
      nc[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
      if (c >= 65 && c <= 90)
      {
        ++nc[c - 'A'];
      }
      else if (c >= 97 && c <= 122)
      {
        ++nc[c - 'a'];
      }
    }
  }

  for (i = 0; i < 26; i++)
  {
    putchar(nc[i] + 65);
  }
}