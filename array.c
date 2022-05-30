#include <stdio.h>

int main(int argc, char *argv[])
{
  int a[4] = {1, 2, 3, 4};
  int i;

  for (i = 0; i < 4; i++)
  {
    printf("%d\n", a[i]);
  }
  return 0;
}